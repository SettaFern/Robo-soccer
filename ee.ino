void setup() {
  Serial.begin(115200);
 // pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char incomingByte = Serial.read();

    if(incomingByte != '\n' && incomingByte != '\r'){
      int realnum = incomingByte-'0';
      Serial.print(realnum);
    }
  }
  
}
