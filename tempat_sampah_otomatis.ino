#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

Servo myServo;
long duration;
float distanceCm;

void setup() {
  Serial.begin(9600);       
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  
  myServo.attach(servoPin); 
  myServo.write(0); 
}

void loop() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distanceCm = duration * 0.034 / 2;

  Serial.print("Jarak: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  if (distanceCm > 0 && distanceCm <= 6){
    myServo.write(180);
    delay(3000);
    myServo.write(0);
    delay(200);
  }
}
