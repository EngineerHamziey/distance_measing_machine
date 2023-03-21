#if 0

//============CONTACTLESS DISTANCE MEASURING MACHINE===========//

#define echoPin 2
#define triggerPin 3

void setup() {
  Serial.begin(115200);
  pinMode(echoPin, INPUT);
  pinMode(triggerPin, OUTPUT);
  
  digitalWrite(triggerPin, LOW);//TURN OFF THE SPEAKER INCASE IT'S ON, JUST AS A PRECAUTION
}

void loop() {
  digitalWrite(triggerPin, HIGH);//TURN ON THE SPEAKER
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);//TURN OFF THE SPEAKER
  int echoTime = pulseIn(echoPin, HIGH);//time is returned in micro-seconds
  float totalDistance = (0.017) * echoTime;
  Serial.println(
    "The total Distance is ="+
    String(totalDistance)+
    "cm"
    );
  delay(300);
}




#endif