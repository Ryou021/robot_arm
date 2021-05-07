//
//  @file KrsServoGetParameter.ino
//  @brief KRS Servo parameter get program
//  @author Kondo Kagaku Co.,Ltd.
//  @date 2018/01/05
//
//  ID:0の電流、温度、角度データ(ICS3.6のみ）を取得します。
//  ICSの通信にはSoftwareSerialを使います。
//  表示機がないので、Serialに9600bpsで出力します。
//

#include <IcsSoftSerialClass.h> 

const byte S_RX_PIN = 8;
const byte S_TX_PIN = 9;

const byte EN_PIN = 2;
const long BAUDRATE = 115200;
const int TIMEOUT = 100;

IcsSoftSerialClass krs(S_RX_PIN,S_TX_PIN,EN_PIN,BAUDRATE,TIMEOUT);  //インスタンス＋ENピン(2番ピン)およびUARTの設定、softSerial版


void setup() {
  // put your setup code here, to run once:
  krs.begin();  		//サーボモータの通信初期設定
  Serial.begin(9600);		//Serialの設定

  //krs.setPos(1,7500);   //最初に7500の位置で固定をしておきます
  
}

void loop() {

  int rTmp,rCur,rPos;   //実際にこの変数には取得したデータが代入されます

	//温度データの取得

  rTmp = krs.getTmp(1); //ID:0の温度データを取得
  //Serial.print("Temp = ");
  if(rTmp < 0)        //取得したデータは失敗かどうか区別できるようになっています
  {
    //Serial.println("Errer");
    //失敗した時の処理
    delay(100); //softSerialは通信失敗する可能性があるため短めに
  }
  else	//成功した時の処理
  {
    //Serial.println(rTmp);
  }
  
	//電流データの取得
  
  rCur = krs.getCur(1); //ID:0の電流データを取得
  
  //Serial.print("Amp = ");
  
  if(rCur < 0)        //取得したデータは失敗かどうか区別できるようになっています
  {
    //失敗した時の処理
    //Serial.println("Errer");
    delay(100);  //softSerialは通信失敗する可能性があるため短めに
  }
  else	//成功した時の処理
  {
    //Serial.println(rCur);b000
  }
  
	//ポジションデータを取得(ICS3.6のみ)
  
  rPos = krs.getPos(1); //ID:0のポジションデータを取得(ICS3.6のみ)
  
  //Serial.print("Pos = ");
  
  if(rPos < 0)  //ポジションデータの場合は負の数が返ってこないのでこの書き方もでます
  {
    //失敗した時の処理
    Serial.print("Errer");
    delay(100); //softSerialは通信失敗する可能性があるため短めに
  }
  else	//成功した時の処理
  {
    if(rPos<11501&&rPos>3499){
    Serial.print(rPos);
    }
  }

    Serial.print(",");
rPos = krs.getPos(2);
if(rPos<11501&&rPos>3499){
    Serial.print(rPos);
    }
    Serial.print(",");
rPos = krs.getPos(3);
if(rPos<11501&&rPos>3499){
    Serial.println(rPos);
    }
}
