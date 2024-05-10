int f = 10;
int l = 8;
int r = 9;
int a;
int b;
int c;
void setup() {
  // put your setup code here, to run once:
pinMode(f,INPUT);
pinMode(l,INPUT);
pinMode(r,INPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
a= digitalRead(f);
b= digitalRead(l);
c= digitalRead(r);
Serial.println(a);
Serial.println(b);
Serial.println(c);
delay(1000);
}
