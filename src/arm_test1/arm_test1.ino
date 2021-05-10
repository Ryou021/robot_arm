//
//  @file KrsServo1.ino
//  @brief KrsServoSample1
//  @author Kondo Kagaku Co.,Ltd.
//  @date 2018/01/05
//
//  ID:0のサーボをポジション指定で動かす
//  範囲は、左5500 - 中央7500 - 右9500
//  0.5秒ごとに指定数値まで動く
//  ICSの通信にはSoftwareSerialを使います。
//

#include <IcsSoftSerialClass.h>


const byte S_RX_PIN = 8;
const byte S_TX_PIN = 9;

const byte EN_PIN = 2;
const long BAUDRATE = 115200;
const int TIMEOUT = 200;   //softSerialは通信失敗する可能性があるため短めに

IcsSoftSerialClass krs(S_RX_PIN, S_TX_PIN, EN_PIN, BAUDRATE, TIMEOUT); //インスタンス＋ENピン(2番ピン)およびUARTの設定、softSerial版

int cou = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  krs.begin();  //サーボモータの通信初期設定
  krs.setSpd(4, 30);
  krs.setSpd(7, 30);
  krs.setSpd(6, 30);
}

void loop() {
  // ここを原点とする
  cou++;
  int servo4 = min(max(map(analogRead(A2), 0, 1023, 3500, 11500), 3500), 11500);
  int servo6 = min(max(map(analogRead(A1), 0, 1023, 3500, 11500), 3500), 11500);
  int servo7 = min(max(map(analogRead(A0), 0, 1023, 3500, 11500), 3500), 11500);
  krs.setPos(7, servo7); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(6, servo6); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, servo4); //位置指令　ID:0サーボを7500へ 中央
  if (cou > 10) {
    Serial.println("krs.setPos(7, " + String(servo7) + ");");
    Serial.println("krs.setPos(6, " + String(servo6) + ");");
    Serial.println("krs.setPos(4, " + String(servo4) + ");");
    Serial.println("delay(100);");
    cou = 0;
  }
  delay(10);
}
