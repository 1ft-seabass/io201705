int tones[12] = {262,294,330,349,392,440,494,523,587,659,698,784};
 
// USBから入ってくる値
int inputUSBByte = 0;
int pin = 5;
 
void setup() {
  pinMode(pin, INPUT);
  Serial.begin(9600);
}
 
void loop() {
  if(Serial.available() > 0){
      inputUSBByte = Serial.read();
      Serial.println(inputUSBByte);
      if(inputUSBByte == '1'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[0]);
      }
      if(inputUSBByte == '2'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[1]);
      }
      if(inputUSBByte == '3'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[2]);
      }
      if(inputUSBByte == '4'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[3]);
      }
      if(inputUSBByte == '5'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[4]);
      }
      if(inputUSBByte == '6'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[5]);
      }
      if(inputUSBByte == '7'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[6]);
      }
      if(inputUSBByte == '8'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[7]);
      }
      if(inputUSBByte == '9'){
        tone(pin,0);  
        delay(50);
        tone(pin,tones[8]);
      }
      if(inputUSBByte == '0'){
        noTone(pin);
      }
  }
  delay(100);
}
