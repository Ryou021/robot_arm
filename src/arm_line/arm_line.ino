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
  krs.setPos(7, 8434);
  krs.setPos(6, 8152);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8152);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8152);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8152);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8301);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8309);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8497);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8606);
  krs.setPos(4, 8145);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8747);
  krs.setPos(4, 8152);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8911);
  krs.setPos(4, 8152);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9028);
  krs.setPos(4, 8035);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9091);
  krs.setPos(4, 7894);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9114);
  krs.setPos(4, 7879);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9107);
  krs.setPos(4, 8270);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9114);
  krs.setPos(4, 8309);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9216);
  krs.setPos(4, 8301);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9341);
  krs.setPos(4, 8301);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9482);
  krs.setPos(4, 8301);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9529);
  krs.setPos(4, 8184);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9521);
  krs.setPos(4, 8129);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9615);
  krs.setPos(4, 8121);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9709);
  krs.setPos(4, 8027);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9693);
  krs.setPos(4, 8027);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9591);
  krs.setPos(4, 8027);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9568);
  krs.setPos(4, 8043);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9568);
  krs.setPos(4, 8035);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9677);
  krs.setPos(4, 8043);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9685);
  krs.setPos(4, 8043);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9670);
  krs.setPos(4, 8254);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9670);
  krs.setPos(4, 8270);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9584);
  krs.setPos(4, 8364);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9513);
  krs.setPos(4, 8434);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9474);
  krs.setPos(4, 8551);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9466);
  krs.setPos(4, 8622);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9404);
  krs.setPos(4, 8692);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9365);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9333);
  krs.setPos(4, 8856);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9302);
  krs.setPos(4, 8989);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9279);
  krs.setPos(4, 9060);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9216);
  krs.setPos(4, 9138);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9161);
  krs.setPos(4, 9185);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9099);
  krs.setPos(4, 9232);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9067);
  krs.setPos(4, 9255);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9044);
  krs.setPos(4, 9286);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9013);
  krs.setPos(4, 9310);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9005);
  krs.setPos(4, 9326);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9005);
  krs.setPos(4, 9388);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 9005);
  krs.setPos(4, 9451);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8942);
  krs.setPos(4, 9505);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8903);
  krs.setPos(4, 9544);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8895);
  krs.setPos(4, 9599);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8903);
  krs.setPos(4, 9591);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8903);
  krs.setPos(4, 9591);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8903);
  krs.setPos(4, 9388);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8903);
  krs.setPos(4, 9294);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8903);
  krs.setPos(4, 9138);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8903);
  krs.setPos(4, 9028);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8927);
  krs.setPos(4, 9036);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8927);
  krs.setPos(4, 9036);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8927);
  krs.setPos(4, 9028);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8919);
  krs.setPos(4, 8661);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8911);
  krs.setPos(4, 8262);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8919);
  krs.setPos(4, 8043);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8942);
  krs.setPos(4, 7902);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8927);
  krs.setPos(4, 7902);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8551);
  krs.setPos(4, 7926);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 8215);
  krs.setPos(4, 8192);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7965);
  krs.setPos(4, 8465);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7668);
  krs.setPos(4, 8583);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7543);
  krs.setPos(4, 8770);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);
  krs.setPos(7, 8434);
  krs.setPos(6, 7550);
  krs.setPos(4, 8802);
  delay(100);


  while (analogRead(A0)) {
    krs.setPos(7, 8528); //位置指令　ID:0サーボを7500へ 中央//P0
    krs.setPos(6, 6729); //位置指令　ID:0サーボを7500へ 中央
    krs.setPos(4, 9505); //位置指令　ID:0サーボを7500へ 中央
    delay(100);
  }
}
