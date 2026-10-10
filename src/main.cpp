#include <Arduino.h>
#include <IRremote.hpp>

#define IRsensor A0

#define in1 7
#define in2 8
#define in3 9
#define in4 10

#define ena 5
#define enb 6

//in1 high in2 low maju 4 high 3 low forward

void forward(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in4, HIGH);
  digitalWrite(in3, LOW);
}

void backward(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  digitalWrite(in4, LOW);
  digitalWrite(in3, HIGH);
}

void right(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  digitalWrite(in4, HIGH);
  digitalWrite(in3, LOW);
}

void left(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in4, LOW);
  digitalWrite(in3, HIGH);
}

void stop(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  digitalWrite(in4, LOW);
  digitalWrite(in3, LOW);
}

void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

  analogWrite(ena, 200);
  analogWrite(enb, 200);

  IrReceiver.begin(IRsensor, ENABLE_LED_FEEDBACK);
}

uint8_t cmd = 0;
int state = 0; //0 stop, 1 forward, 2 backward, 3 left, 4 right
int lastSignal = 0;

void loop(){
  // put your main code here, to run repeatedly:
  if(IrReceiver.decode()){
    Serial.print("Remote says : ");
    Serial.println(IrReceiver.decodedIRData.command);
    cmd = IrReceiver.decodedIRData.command;

    if(cmd == 24) state = 1;
    else if(cmd == 82) state = 2;
    else if(cmd == 8) state = 3;
    else if(cmd == 90) state = 4;

    lastSignal = millis();
    IrReceiver.resume();
  }

  if(millis() - lastSignal > 100){
    state = 0;
  }

  switch(state){
    case 0 : stop(); break;
    case 1 : forward(); break;
    case 2 : backward(); break;
    case 3 : left(); break;
    case 4 : right(); break;
  }
  
}

