const int analogInPin=A0;
 const int analogOutPin=9;
 
  int outputValue=0;


void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
 
}

void loop() {
   int sensorRead=analogRead(A0);

 Serial.println(sensorRead);
  if(sensorRead<700){sensorRead=700;}
  else if(sensorRead>900){sensorRead=900;}
  outputValue=map(sensorRead,700,900,0,255);
  analogWrite(analogOutPin,outputValue);
 // put your main code here, to run repeatedly:
Serial.println(outputValue);
delay(2);
}
