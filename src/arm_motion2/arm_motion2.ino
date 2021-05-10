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


void setup() {
  // put your setup code here, to run once:
  krs.begin();  //サーボモータの通信初期設定
  krs.setSpd(4, 20);
  krs.setSpd(7, 20);
  krs.setSpd(6, 20);
}

void loop() {
  // ここを原点とする
  int i, j, k, l;

  krs.setPos(7, 8434); //位置指令　ID:0サーボを7500へ 中央//P0
  krs.setPos(6, 6768); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, 9482); //位置指令　ID:0サーボを7500へ 中央
  delay(3000);
  krs.setPos(7, 8231); //位置指令　ID:0サーボを7500へ 中央//P0
  krs.setPos(6, 9208); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, 9263); //位置指令　ID:0サーボを7500へ 中央
  delay(1000);
  krs.setPos(7,8168); //位置指令　ID:0サーボを7500へ 中央//P0
  krs.setPos(6, 9208); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, 9005); //位置指令　ID:0サーボを7500へ 中央
  krs.setSpd(4, 30);
  krs.setSpd(7, 30);
  krs.setSpd(6, 30);
  delay(1000);
  krs.setPos(7, 8434); //位置指令　ID:0サーボを7500へ 中央//P0
  krs.setPos(6, 6768); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, 9482); //位置指令　ID:0サーボを7500へ 中央
  delay(3000);
  krs.setPos(7, 8231); //位置指令　ID:0サーボを7500へ 中央//P0
  krs.setPos(6, 9208); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, 9263); //位置指令　ID:0サーボを7500へ 中央
  krs.setSpd(4, 8);
  krs.setSpd(7, 12);
  krs.setSpd(6, 20);
  delay(1000);
  krs.setPos(7, 8340); //位置指令　ID:0サーボを7500へ 中央//P0
  krs.setPos(6, 9232); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, 8974); //位置指令　ID:0サーボを7500へ 中央
  delay(1000);

  //  krs.setPos(7, 8434); //位置指令　ID:0サーボを7500へ 中央//P0
  //  krs.setPos(6, 6768); //位置指令　ID:0サーボを7500へ 中央
  //  krs.setPos(4, 9482); //位置指令　ID:0サーボを7500へ 中央
  //  delay(1000);
  //
  //  krs.setPos(7, 7550); //位置指令　
  //  krs.setPos(6, 8500); //位置指令　
  //  krs.setPos(4, 9000); //位置指令　
  //  delay(1000);
  //  krs.setPos(7, 8400); //位置指令　
  //  krs.setPos(6, 8300); //位置指令　
  //  krs.setPos(4, 9500); //位置指令　
  //  delay(1000);
  //  krs.setPos(7, 9250); //位置指令　
  //  krs.setPos(6, 8500); //位置指令　
  //  krs.setPos(4, 9000); //位置指令　
  //  delay(1000);




  while (analogRead(A0)) {
    krs.setPos(7, 8434); //位置指令　ID:0サーボを7500へ 中央//P0
    krs.setPos(6, 6768); //位置指令　ID:0サーボを7500へ 中央
    krs.setPos(4, 9482); //位置指令　ID:0サーボを7500へ 中央
    delay(1000);
  }
}
