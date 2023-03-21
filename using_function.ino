#if 1

//============USING FUNCTION THAT RETURNS VALUE===========//

#define echoPin 2
#define triggerPin 3

#if 0
 returnType function(arguements/parameters) {
  
}
#endif

float getDistance() {
  digitalWrite(triggerPin, LOW);//TURN OFF THE SPEAKER INCASE IT'S ON, JUST AS A PRECAUTION
  digitalWrite(triggerPin, HIGH);//TURN ON THE SPEAKER
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);//TURN OFF THE SPEAKER
  int echoTime = pulseIn(echoPin, HIGH);//time is returned in micro-seconds
  float totalDistance = (0.017) * echoTime;
  
  return totalDistance;
}

void setup() {
  Serial.begin(115200);
  pinMode(echoPin, INPUT);
  pinMode(triggerPin, OUTPUT);
  
}

void loop() {
  float totalDistance = getDistance();
  
  Serial.println(
    "The total Distance is ="+
    String(totalDistance)+
    "cm"
    );
  delay(300);
}




#endif