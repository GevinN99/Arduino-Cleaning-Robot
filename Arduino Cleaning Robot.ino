//Ultrasoic 01
#define trigPin1 A0
#define echoPin1 A1
//Ultrasoic 02
#define trigPin2 A2
#define echoPin2 A3
//Ultrasoic 03
#define trigPin3 A4
#define echoPin3 A5

long duration, distance, FIRSTSensor, SECONDSensor, THIRDSensor, FOURTHSensor;
char btVal;

// For Motor A
int in1 = 6;
int in2 = 5;

// For Motor B
int in3 = 10;
int in4 = 9;

// For Relay
int relay = 4;

void setup() {
  Serial.begin(9600);

  //Ultrasoic Sensors
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);

  //L298n
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  //Relay
  pinMode(relay, OUTPUT);
}

void loop() {
  //change this delay times if code is too slow(detect obstacles after collision)
  UltrasonicSensor(trigPin1, echoPin1);
  FIRSTSensor = distance;

  UltrasonicSensor(trigPin2, echoPin2);
  SECONDSensor = distance;

  UltrasonicSensor(trigPin3, echoPin3);
  THIRDSensor = distance;

  //Print Values Using Terminal
  Serial.print("1st : ");
  Serial.println(FIRSTSensor);
  Serial.print("2nd : ");
  Serial.println(SECONDSensor);
  Serial.print("3rd : ");
  Serial.println(THIRDSensor);

  if (Serial.available()) {
    btVal = Serial.read();
    Serial.println(btVal);
  }

  if (btVal == 's') {
    if (FIRSTSensor <= 15) {
      //movebackword
      analogWrite(in1, 0);
      analogWrite(in2, 100);
      analogWrite(in3, 0);
      analogWrite(in4, 100);
      delay(500);

      //Stop
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(100);

      //turning
      analogWrite(in1, 100);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(500);
    } else if (SECONDSensor <= 15) {
      //movebackword
      analogWrite(in1, 0);
      analogWrite(in2, 100);
      analogWrite(in3, 0);
      analogWrite(in4, 100);
      delay(500);

      //Stop
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(100);

      //turning
      analogWrite(in1, 50);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(500);
    } else if (THIRDSensor <= 15) {
      //movebackword
      analogWrite(in1, 0);
      analogWrite(in2, 100);
      analogWrite(in3, 0);
      analogWrite(in4, 100);
      delay(500);

      //Stop
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(100);

      //turning
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 100);
      analogWrite(in4, 0);
      delay(500);

    } else {
      //move forward
      analogWrite(in1, 100);
      analogWrite(in2, 0);
      analogWrite(in3, 100);
      analogWrite(in4, 0);
    }
  } else if (btVal == 'v') {
  }
}

//Sensor Distance Calc..dont change following part
void UltrasonicSensor(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
}