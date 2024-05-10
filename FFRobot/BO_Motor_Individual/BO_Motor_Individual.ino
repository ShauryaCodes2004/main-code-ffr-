int in1=2;
int enA = 7;
int in3= 4;
int in4= 5;
int enB = 6;
int in2 = 3;

void setup() {
  
  pinMode(enA,OUTPUT);
   pinMode(in1,OUTPUT);
    pinMode(enB,OUTPUT);
     pinMode(in3,OUTPUT);
      pinMode(in4,OUTPUT);
      pinMode(in2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      delay(1000);

      //digitalWrite(in3,HIGH);
      //digitalWrite(in4,LOW);
      //delay(1000);

      //digitalWrite(enA,100);
      //digitalWrite(enA,100);
      //delay(1500);


  





    /*digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      delay(1000);

      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
       delay(1000);*/


}
