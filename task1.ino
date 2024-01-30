
 int ledr = 11;
int ledy = 12;
int ledg = 10;

void setup() {
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledg, OUTPUT);
}

void loop() {  

  digitalWrite(ledr,1);
   digitalWrite(ledg,0);
  digitalWrite(ledy,0);
   delay(1000);
  digitalWrite(ledy,1);
   delay(1000);
   digitalWrite(ledy,0);
   delay(1000);
  digitalWrite(ledy,1);
   delay(1000);
    digitalWrite(ledy,0);
   delay(1000);
  digitalWrite(ledy,1);
  digitalWrite(ledy,1);
  digitalWrite(ledr,1); 
  digitalWrite(ledg,0);
   delay(1000);
  digitalWrite(ledr,0);
  digitalWrite(ledy,0);
  digitalWrite(ledg,1);
   delay(1000); 
    digitalWrite(ledg,0);
    delay(1000);
}
