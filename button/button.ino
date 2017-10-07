int button =2;
int led1=8;
int led2=9;
int state1=0;

volatile byte state = LOW;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(button,INPUT);
Serial.begin(9600);
pinMode(button, INPUT_PULLUP);
attachInterrupt(0, blink1, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(led1,HIGH);

}



void blink1(){
  
state=digitalRead(button);
Serial.println(state);
if(state==1){
  
  Serial.println("I am in if block");
  digitalWrite(9,HIGH);
  delay(10000);
  digitalWrite(9,LOW);
  delay(10000);
  
}
Serial.println("interrupt finish");

}

