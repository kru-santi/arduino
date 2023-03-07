// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);

  analogWrite(9, 51);
  analogWrite(10, 102);
  analogWrite(11, 255);
  digitalWrite(12, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) <= 250) {
    digitalWrite(12, HIGH);
    Serial.println("orange");
    analogWrite(9, 255);
    analogWrite(10, 102);
    analogWrite(11, 0);
    delay(5000); // Wait for 5000 millisecond(s)
  } else {
    if (analogRead(A0) <= 500) {
      digitalWrite(12, LOW);
      Serial.println("yellow");
      analogWrite(9, 255);
      analogWrite(10, 255);
      analogWrite(11, 0);
    } else {
      if (analogRead(A0) > 500) {
        digitalWrite(12, LOW);
        Serial.println("green");
        analogWrite(9, 51);
        analogWrite(10, 255);
        analogWrite(11, 51);
      } else {
      }
    }
    delay(2000); // Wait for 2000 millisecond(s)
  }
}
