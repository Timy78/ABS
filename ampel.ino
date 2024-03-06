int switchState;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);// A Grün
  pinMode(3, OUTPUT);// A Gelb
  pinMode(4, OUTPUT);// A Rot
  
  pinMode(5, OUTPUT);// FA Grün
  pinMode(6, OUTPUT);// FA Rot

  pinMode(8, INPUT); // Button
}

void loop() {
  // put your main code here, to run repeatedly:
  
   

  switchState = digitalRead(8);
  
  if(switchState == LOW){
   digitalWrite(2, HIGH);    // A Grün an
   digitalWrite(6, HIGH);    // FA Rot an
    
  }else {
   delay(2000);
   digitalWrite(2, LOW);     // A Grün aus
   digitalWrite(3, HIGH);    // A Gelb an
   delay(2000);
   digitalWrite(3, LOW);     // A Gelb aus
   digitalWrite(4, HIGH);    // A Rot an
   delay(2000);
   digitalWrite(6, LOW);     // FA Rot aus
   digitalWrite(5, HIGH);    // FA Grün an
   delay(2000);
   digitalWrite(3, HIGH);    // A Gelb an
   digitalWrite(6, HIGH);    // FA Rot an
   digitalWrite(5, LOW);     // FA Grün aus
   delay(2000);
   digitalWrite(3, LOW);    // A Gelb aus
   digitalWrite(4, LOW);    // A Rot aus
  }
}
