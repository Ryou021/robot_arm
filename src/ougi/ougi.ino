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
  krs.setSpd(4, 30);
  krs.setSpd(7, 30);
  krs.setSpd(6, 30);
}

void loop() {
  // ここを原点とする
  int i,j;

  krs.setPos(7, 8434); //位置指令　ID:0サーボを7500へ 中央//P0
  krs.setPos(6, 6768); //位置指令　ID:0サーボを7500へ 中央
  krs.setPos(4, 9482); //位置指令　ID:0サーボを7500へ 中央
  delay(1000);
  for(j=0;j<2000;j=j+30){
    for(i=0;i<2000;i=i+10){
     krs.setPos(7, 7500+j); //位置指令　ID:0サーボを7500へ 中央//P0
     krs.setPos(6, 10000-i); //位置指令　ID:0サーボを7500へ 中央
     krs.setPos(4, 7500+i*2.1); //位置指令　ID:0サーボを7500へ 中央
     delay(20);
     }
     delay(100);
      krs.setPos(7, 8434); //位置指令　ID:0サーボを7500へ 中央//P0
      krs.setPos(6, 6768); //位置指令　ID:0サーボを7500へ 中央
      krs.setPos(4, 9482); //位置指令　ID:0サーボを7500へ 中央
      delay(300);
  }
  


  while (analogRead(A0)) {
    krs.setPos(7, 8434); //位置指令　ID:0サーボを7500へ 中央//P0
    krs.setPos(6, 6768); //位置指令　ID:0サーボを7500へ 中央
    krs.setPos(4, 9482); //位置指令　ID:0サーボを7500へ 中央
    delay(1000);
  }
}
