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
  myServo.write(0); // Awal servo tertutup
}

void loop() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Kirim pulsa 10µs ke trigPin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Baca durasi pulsa echo
  duration = pulseIn(echoPin, HIGH);

  // Hitung jarak 
  distanceCm = duration * 0.034 / 2;

  // Tampilkan hasil
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
