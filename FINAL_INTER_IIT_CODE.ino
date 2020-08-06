
#include<NewPing.h>

//pins for moving forward or backward on soil
const int FBinput1 = 53;
const int FBinput2 = 52;
const int FBpwm = 2 ;


//colour sensor pins
const int colour1_S0 = 51;
const int colour1_S1 = 50;
const int colour1_S2 = 49;
const int colour1_S3 = 48;
const int colour1_out = 47;
const int motorA1;
const int motorA2;
const int motorB1;
const int motorB2;



//distances from all the ultrasound sensors
static int frontDistance;
static int rearDistance;

const int pushButton = 40;

const int AIN1_PIN;
const int AIN2_PIN; 
const int APWM_PIN; 
const int BIN1_PIN; 
const int BIN2_PIN; 
const int BPWM_PIN; 
const int CIN1_PIN; 
const int CIN2_PIN; 
const int CPWM_PIN; 
const int DIN1_PIN; 
const int DIN2_PIN; 
const int DPWM_PIN; 
const int EIN1_PIN; 
const int EIN2_PIN; 
const int EPWM_PIN;

//ultrasound pins
const int FLSonarPin = 27;
const int FRSonarPin = 26;
const int RLSonarPin = 25;
const int RRSonarPin = 24;
const int LSonarPin1 = 23;
const int RSonarPin1 = 22;
const int LSonarPin2 = 21;
const int RSonarPin2 = 20;
const int LSonarPin3 = 19;
const int RSonarPin3 = 18;
const int LSonarPin4 = 17;
const int RSonarPin4 = 16;
const int LSonarPin5 = 15;
const int RSonarPin5 = 14;
const int LSonarPinforward;  //facing the wall
const int RSonarPinforward;
//creating ultrasound NewPing objects
NewPing FLSonar(FLSonarPin,FLSonarPin);
NewPing FRSonar(FRSonarPin,FRSonarPin);
NewPing RLSonar(RLSonarPin,RLSonarPin);
NewPing RRSonar(RRSonarPin,RRSonarPin);
NewPing LSonar1(LSonarPin1,LSonarPin1);
NewPing RSonar1(RSonarPin1,RSonarPin1);
NewPing LSonar2(LSonarPin2,LSonarPin2);
NewPing RSonar2(RSonarPin2,RSonarPin2);
NewPing LSonar3(LSonarPin3,LSonarPin3);
NewPing RSonar3(RSonarPin3,RSonarPin3);
NewPing LSonar4(LSonarPin4,LSonarPin4);
NewPing RSonar4(RSonarPin4,RSonarPin4);
NewPing LSonar5(LSonarPin5,LSonarPin5);
NewPing RSonar5(RSonarPin5,RSonarPin5);
NewPing LSonarforward(LSonarPinforward ,LSonarPinforward);
NewPing RSonarforward(RSonarPinforward,RSonarPinforward);

//distaces from all the ultrasound sensors
  int FSonar_distance(){
  int frontdistance1 = FLSonar.ping_cm();
  int frontdistance2 = FRSonar.ping_cm();
  int frontdistance = (frontdistance1+frontdistance2)/2;
  return frontdistance;
}
int RSonar_distance(){
  int reardistance1 = RLSonar.ping_cm();
  int reardistance2 = RRSonar.ping_cm();
  int reardistance = (reardistance1+reardistance2)/2;
  return reardistance;
}
void motor1() {


  digitalWrite(AIN1_PIN, HIGH);
    digitalWrite(AIN2_PIN, LOW);
   analogWrite(APWM_PIN,150);// speed to be set
  delay(15);
  digitalWrite(AIN1_PIN, LOW);
   digitalWrite(AIN2_PIN, LOW);
 delay(20);
}

//for moving front slider up
void fRplanetry_up() {

    digitalWrite(BIN1_PIN, HIGH);
    digitalWrite(BIN2_PIN, LOW);
    analogWrite(BPWM_PIN,125);
    delay(10);
    digitalWrite(BIN1_PIN, LOW);
    digitalWrite(BIN2_PIN, LOW);
    delay(10);
}
void fLplanetry_up() {
    digitalWrite(CIN1_PIN, HIGH);
    digitalWrite(CIN2_PIN, LOW);
    analogWrite(CPWM_PIN,125);//set speed
    delay(10);
    digitalWrite(CIN1_PIN,LOW);
    digitalWrite(CIN2_PIN, LOW);
    delay(10);
}
//for moving front slider down
void fLplanetry_down() {
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, HIGH);
   analogWrite(CPWM_PIN,125);//set speed
   delay(100);
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, LOW);
   delay(1500);
}
void fRplanetry_down() {
   digitalWrite(BIN1_PIN, LOW);
   digitalWrite(BIN2_PIN, HIGH);
   analogWrite(BPWM_PIN,125);
   delay(100);
   digitalWrite(BIN1_PIN, LOW);
   digitalWrite(BIN2_PIN, LOW);
   delay(1500);
}


//for moving rear slider up
void bLplanetry_up() {
  digitalWrite(EIN1_PIN, HIGH);
    digitalWrite(EIN2_PIN, LOW);
   analogWrite(EPWM_PIN,50);//set speed
  delay(15);
   digitalWrite(EIN1_PIN, LOW);
   digitalWrite(EIN2_PIN, LOW);
 delay(20);
}
void bRplanetry_up() {
digitalWrite(DIN1_PIN, HIGH);
    digitalWrite(DIN2_PIN, LOW);
   analogWrite(DPWM_PIN,50);//set speed
   delay(15);
  digitalWrite(DIN1_PIN, LOW);
   digitalWrite(DIN2_PIN, LOW);
 delay(20);
}
//for moving rear slider down
void bLplanetry_down() {
   digitalWrite(EIN1_PIN, LOW);
    digitalWrite(EIN2_PIN, HIGH);
   analogWrite(EPWM_PIN,150);//set speed
  delay(15);
   digitalWrite(EIN1_PIN, LOW);
   digitalWrite(EIN2_PIN, LOW);
 delay(20);
}
void bRplanetry_down() {
  digitalWrite(DIN1_PIN, LOW);
    digitalWrite(DIN2_PIN, HIGH);
   analogWrite(DPWM_PIN,150);//set speed
  delay(15);
  digitalWrite(DIN1_PIN, LOW);
   digitalWrite(DIN2_PIN, LOW);
 delay(20);
}

void fLplanetry_troque()
{
  
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, HIGH);
   analogWrite(CPWM_PIN,255);//set speed
   delay(10);
    digitalWrite(CIN1_PIN, LOW);
      digitalWrite(CIN2_PIN, LOW);
   delay(10); 
}
void fRplanetry_troque()
{
  digitalWrite(BIN1_PIN, LOW);
      digitalWrite(BIN2_PIN, HIGH);
      analogWrite(BPWM_PIN,255);
      delay(10);
   digitalWrite(BIN1_PIN, LOW);
      digitalWrite(BIN2_PIN, LOW);
    delay(10); 
}
void bLplanetry_down1()
{
  digitalWrite(EIN1_PIN, LOW);
    digitalWrite(EIN2_PIN, HIGH);
   analogWrite(EPWM_PIN,150);//set speed
  delay(15);
   digitalWrite(EIN1_PIN, LOW);
   digitalWrite(EIN2_PIN, LOW);
 delay(20);
}
void bRplanetry_down1()
{
  digitalWrite(DIN1_PIN, LOW);
    digitalWrite(DIN2_PIN, HIGH);
   analogWrite(DPWM_PIN,150);//set speed
  delay(15);
  digitalWrite(DIN1_PIN, LOW);
   digitalWrite(DIN2_PIN, LOW);
 delay(20);
}
void fLplanetry_down1()
{
  digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, HIGH);
   analogWrite(CPWM_PIN,125);//set speed
   delay(100);
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, LOW);
   delay(1500);
}
void fRplanetry_down1()
{
  digitalWrite(BIN1_PIN, LOW);
   digitalWrite(BIN2_PIN, HIGH);
   analogWrite(BPWM_PIN,125);
   delay(100);
   digitalWrite(BIN1_PIN, LOW);
   digitalWrite(BIN2_PIN, LOW);
   delay(1500);
}
void bLplanetry_troque()
 {
  
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, HIGH);
   analogWrite(CPWM_PIN,255);//set speed
   delay(10);
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, LOW);
   delay(10); 
 }
 void bRplanetry_troque()
 {
  digitalWrite(BIN1_PIN, LOW);
  digitalWrite(BIN2_PIN, HIGH);
  analogWrite(BPWM_PIN,255);
  delay(10);
  digitalWrite(BIN1_PIN, LOW);
  digitalWrite(BIN2_PIN, LOW);
  delay(10); 
 }
 void bLplanetry_lesstroque()
 {
  
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, HIGH);
   analogWrite(CPWM_PIN,255);//set speed
   delay(10);
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, LOW);
   delay(10); 
 }
  void bRplanetry_lesstroque()
 {
  digitalWrite(BIN1_PIN, LOW);
  digitalWrite(BIN2_PIN, HIGH);
  analogWrite(BPWM_PIN,255);
  delay(10);
  digitalWrite(BIN1_PIN, LOW);
  digitalWrite(BIN2_PIN, LOW);
  delay(10); 
 }

void fLplanetry_lesstroque()
 { digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, HIGH);
   analogWrite(CPWM_PIN,255);//set speed
   delay(10);
   digitalWrite(CIN1_PIN, LOW);
   digitalWrite(CIN2_PIN, LOW);
   delay(10); 
 }
 void fRplanetry_lesstroque()
 {
  digitalWrite(BIN1_PIN, LOW);
  digitalWrite(BIN2_PIN, HIGH);
  analogWrite(BPWM_PIN,255);
  delay(10);
  digitalWrite(BIN1_PIN, LOW);
  digitalWrite(BIN2_PIN, LOW);
  delay(10); 
 }
void motor1_reverse(){
  digitalWrite(AIN1_PIN,LOW);
  digitalWrite(AIN2_PIN,HIGH);
  analogWrite(APWM_PIN,155);
  delay(10);
  digitalWrite(AIN1_PIN,LOW);
  digitalWrite(AIN2_PIN,LOW);
  delay(10);
}
void fLplanetry_troque_getup()
{
  
   digitalWrite(CIN1_PIN, LOW);
   
   digitalWrite(CIN2_PIN, HIGH);
   
   analogWrite(CPWM_PIN,255);//set speed
   delay(10);
   
   digitalWrite(CIN1_PIN, LOW);
   
   digitalWrite(CIN2_PIN, LOW);
   delay(10); 
}
void fRplanetry_troque_getup()
{
  digitalWrite(BIN1_PIN, LOW);
   
   digitalWrite(BIN2_PIN, HIGH);
   
   analogWrite(BPWM_PIN,255);
   
   delay(10);
   digitalWrite(BIN1_PIN, LOW);
   
   digitalWrite(BIN2_PIN, LOW);
   
   delay(10); 
}
void bLplanetry_troque_getup()
 {
  
   digitalWrite(CIN1_PIN, LOW);
   
   digitalWrite(CIN2_PIN, HIGH);
   
   analogWrite(CPWM_PIN,255);//set speed
   delay(10);
   
   digitalWrite(CIN1_PIN, LOW);
   
   digitalWrite(CIN2_PIN, LOW);
   delay(10); 
 }
 void bRplanetry_troque_getup()
 {
  digitalWrite(BIN1_PIN, LOW);
  
   digitalWrite(BIN2_PIN, HIGH);
   
   analogWrite(BPWM_PIN,255);
  
   delay(10);
   digitalWrite(BIN1_PIN, LOW);
   
   digitalWrite(BIN2_PIN, LOW);
   
   delay(10); 
 }
//for colour sensor to detect red colour
bool isRed(char d){
  if(d=='F'){
    digitalWrite(colour1_S2,LOW);
    digitalWrite(colour1_S3,LOW);
    int frequency = pulseIn(colour1_out,LOW);
    if(frequency>=1&&frequency<=1){
      return true;
      }
      return false;
    }

}
//for colour sensor to detect green colour
bool isGreen(char d){
  if(d=='F'){
    digitalWrite(colour1_S2,HIGH);
    digitalWrite(colour1_S3,HIGH);
    int frequency = pulseIn(colour1_out,LOW);
    if(frequency>=1&&frequency<=1){
      return true;
      }
      return false;
    }

}
/*bool isBlue(char d){
  if(d=='F'){
    digitalWrite(colour1_S2,LOW);
    digitalWrite(colour1_S3,HIGH);
    int frequency = pulseIn(colour1_out,LOW);
    if(frequency>=1&&frequency<=1){
      return true;
      }
      return false;
    }else if(d=='R'){
      digitalWrite(colour2_S2,LOW);
      digitalWrite(colour2_S3,HIGH);
      int frequency = pulseIn(colour2_out,LOW);
      if(frequency>=1&&frequency<=1){
        return true;
        }
        return false;
      }
}*/
//for colour sensor to detect yellow colour
bool isYellow(char d){
  if(d=='F'){
    if(isRed('F')==true&&isGreen('F')==true){
      return true;
    }
  }
  /*else if(d=='R'){
    if(isRed(R)==true&&isGreen(R)==true){
      return true;
      } 
  }*/
  return false;
}
//for moving forward on soil
void moveForward(){
  digitalWrite(FBinput1,HIGH);
  digitalWrite(FBinput2,LOW);
  analogWrite(FBpwm,255);
}
//for moving backward on soil
void moveBackward(){
  digitalWrite(FBinput1,LOW);
  digitalWrite(FBinput2,HIGH);
  analogWrite(FBpwm,255);
}
void plough(){
  digitalWrite(motorA1,HIGH);
  digitalWrite(motorA2,LOW);
  delay(6000);
  digitalWrite(motorA1,LOW);
  digitalWrite(motorA2,LOW);
}
void seedingON(){
 digitalWrite(motorB1,HIGH);
 digitalWrite(motorB2,LOW);
}
void seedingOFF(){
  digitalWrite(motorB1,LOW);
  digitalWrite(motorB2,LOW);
}
void climbUp(){
   int distancef=(int){LSonarforward.ping_cm()+RSonarforward.ping_cm()}/2;
 int distance1=(int){LSonar1.ping_cm()+RSonar1.ping_cm()}/2;
 int distance2=(int){LSonar2.ping_cm()+RSonar2.ping_cm()}/2;
 int distance4=(int)(LSonar4.ping_cm()+RSonar4.ping_cm())/2;

  while(distancef>5){
    motor1_reverse();
    distancef= (int){LSonarforward.ping_cm()+RSonarforward.ping_cm()}/2;
    }
  while(distancef<=5){
    bLplanetry_up();
    bRplanetry_up();
    distancef=(int){LSonarforward.ping_cm()+RSonarforward.ping_cm()}/2;
    if(distancef>=5){
      motor1_reverse;
    }
   }
   while(distance4<40){
    fLplanetry_troque_getup();
    bRplanetry_troque_getup();
    fLplanetry_troque_getup();
    bRplanetry_troque_getup();
    distance4=(int)(LSonar4.ping_cm()+RSonar4.ping_cm())/2;
   }
   while(distance2>=40){
    motor1_reverse();
    distance2=(int){LSonar2.ping_cm()+RSonar2.ping_cm()}/2;
   }
  while(distance1<40){
    fLplanetry_up();
    fRplanetry_up();
    distance1=(int){LSonar1.ping_cm()+RSonar1.ping_cm()}/2;
    }
  while(distance1>=5){
      motor1_reverse();
      distance1=(int){LSonar1.ping_cm()+RSonar1.ping_cm()}/2;
  }
 
}
void climbDown(){
  int distance1 = ((int)LSonar1.ping_cm()+(int)RSonar1.ping_cm())/2;
  
  delay(1000);
  int distance2 =((int)LSonar2.ping_cm()+(int)RSonar2.ping_cm())/2;
  
  delay(1000);
  int distance3 = ((int)LSonar3.ping_cm()+(int)RSonar3.ping_cm())/2;
  
  delay(1000);
  int distance4 = ((int)LSonar4.ping_cm()+(int)RSonar4.ping_cm())/2;
  
  delay(1000);
  int distance5 = ((int)LSonar5.ping_cm()+(int)RSonar5.ping_cm())/2;
  
  delay(1000);

while(distance1<4)
{
  motor1();
  distance1 = ((int)LSonar1.ping_cm()+(int)RSonar1.ping_cm())/2;
}
while(distance1>4)
{
  fRplanetry_down();
  fLplanetry_down();
  distance1 = ((int)LSonar1.ping_cm()+(int)RSonar1.ping_cm())/2;
} 
while(distance2<5)
{
  motor1();
  fLplanetry_troque();
  fRplanetry_troque();
  distance2 = ((int)LSonar2.ping_cm()+(int)RSonar2.ping_cm())/2;
}

while(distance3>4)
{
  
  bLplanetry_troque();
  fLplanetry_troque();
  bRplanetry_troque();
  fRplanetry_troque();
  motor1();
  distance3 = ((int)LSonar3.ping_cm()+(int)RSonar3.ping_cm())/2;
  
}
while(distance4>4)
{
  bLplanetry_lesstroque();
  fLplanetry_lesstroque();
  bRplanetry_lesstroque();
  fRplanetry_lesstroque();
distance4 = ((int)LSonar4.ping_cm()+(int)RSonar4.ping_cm())/2;
}
while(distance5<=4){
  motor1();
  distance5 = ((int)LSonar5.ping_cm()+(int)RSonar5.ping_cm())/2;
}
while(distance5>4)
{
 bLplanetry_down(); 
 bRplanetry_down(); 
 distance5 = ((int)LSonar5.ping_cm()+(int)RSonar5.ping_cm())/2;
}
  
}


void setup(){
  
  pinMode(FBinput1,OUTPUT);
  pinMode(FBinput2,OUTPUT);
  pinMode(FBpwm,OUTPUT);
  
  
  pinMode(colour1_S0,OUTPUT);
  pinMode(colour1_S1,OUTPUT);
  digitalWrite(colour1_S0,HIGH);
  digitalWrite(colour1_S1,LOW);
  pinMode(colour1_S2,OUTPUT);
  pinMode(colour1_S3,OUTPUT);
  pinMode(colour1_out,INPUT);

  pinMode(pushButton,INPUT);
  pinMode(motorA1,OUTPUT);
  pinMode(motorA2,OUTPUT);
  pinMode(motorB1,OUTPUT);
  pinMode(motorB2,OUTPUT);
 



  pinMode(AIN1_PIN, OUTPUT);
pinMode(AIN2_PIN,OUTPUT);
pinMode(APWM_PIN,OUTPUT);
pinMode(BIN1_PIN, OUTPUT);
pinMode(BIN2_PIN,OUTPUT);
pinMode(BPWM_PIN,OUTPUT);
pinMode(CIN1_PIN, OUTPUT);
pinMode(CIN2_PIN,OUTPUT);
pinMode(CPWM_PIN,OUTPUT);
pinMode(DIN1_PIN, OUTPUT);
pinMode(DIN2_PIN,OUTPUT);
pinMode(DPWM_PIN,OUTPUT);
pinMode(EIN1_PIN,OUTPUT);
pinMode(EIN2_PIN,OUTPUT);
pinMode(EPWM_PIN,OUTPUT);  
}
void loop(){
  int redCounter = 0;
  if(isRed('F')==true){
    redCounter++;
  }
  if(redCounter == 1){
    seedingON();
    frontDistance = FSonar_distance();
    while(frontDistance>100){
      moveForward();
      delay(500);
      frontDistance = FSonar_distance();
    }
    while(frontDistance<=100&&frontDistance>50){
      moveForward();
      delay(500);
      frontDistance = FSonar_distance();
    }
    while(frontDistance<=50&&frontDistance>5){
      moveForward();
      delay(500);
      frontDistance = FSonar_distance();
    }
    while(frontDistance<=5){
      break;
    }
    plough();
    seedingOFF();
    delay(2000);
    rearDistance = RSonar_distance();
    
    while(rearDistance>100){
      moveBackward();
      delay(500);
      rearDistance = RSonar_distance();
    }
    while(rearDistance<=100&&rearDistance>=5){
      if(isRed('F')==false){
        moveBackward();
        delay(250);
        rearDistance = RSonar_distance();
      }
      if(isRed('F')==true&&rearDistance<=5){
        break;
        redCounter++;
      }
    }
  }
  while(digitalRead(pushButton)!=HIGH){
    
  }
  if(redCounter==2){
    climbDown();
    delay(500);
    int yellowCounter = 0;
    if(isYellow('F')==true){
      yellowCounter++;
    }
    if(yellowCounter==1){
      frontDistance = FSonar_distance();
      while(frontDistance>100){
        moveForward();
        delay(500);
        frontDistance = FSonar_distance();
        }
        while(frontDistance<=100){
          moveForward();
          delay(500);
          frontDistance = FSonar_distance();
          }
          while(frontDistance<=50&&frontDistance>10){
            moveForward();
            delay(500);
            frontDistance = FSonar_distance();
            }
            while(frontDistance<=10){
              break;
              }
       delay(2000);
       rearDistance = RSonar_distance();
    
     while(rearDistance>100){
      moveBackward();
      delay(500);
      }
      delay(500);
      rearDistance = RSonar_distance();
      while(rearDistance<=100&&rearDistance>=5){
        if(isYellow('F')==false){
          moveBackward();
          delay(250);
          rearDistance = RSonar_distance();
          }
          if(isYellow('F')==true&&rearDistance<=5){
            break;
            yellowCounter++;
            }
      }
    }
    if(yellowCounter==2){
      climbUp();
    }
    if(isRed('F')==true){
      redCounter++;
    }
    if(redCounter==3){
      while(digitalRead(pushButton)!= HIGH){
        
      }
    }
  }   
}
