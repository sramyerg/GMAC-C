
int triggerPin  = 2;
int echoPin     = 3;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  }

void loop() {
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  double duration = pulseIn(echoPin, HIGH);

  Serial.println("========================");
  Serial.print("Distance: ");
  
  double distance = duration*0.034/2;

  Serial.print("Centimeter(s): ");
  Serial.println(distance);

  distance = duration / 58.2;

  Serial.print("Centimeter(s): ");
  Serial.println(distance);
  
  distance = duration / 148;

  Serial.print("Inch(es): ");
  Serial.println(distance);
  
  delay(500);
  }
