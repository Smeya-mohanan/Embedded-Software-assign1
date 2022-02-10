const int ledPin1 = 27;
const int buttonPin1 = 25;
const int ledPin2 = 12;
const int buttonPin2 = 33;
 
int buttonState1 = 1;
//int buttonState2 = 0;

#define a 1300
#define b 1200
#define c 12
#define d 500
#define mode 2
#define a2 1350
#define a3 1400
#define a4 1450
#define a5 1500
#define a6 1550
#define a7 1600
#define a8 1650
#define a9 1700
#define a10 1750
#define a11 1800
#define a12 1850
#define B 500

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  if (digitalRead(buttonPin1) == LOW && digitalRead(buttonPin2) == LOW)
    {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      delayMicroseconds(B);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a2);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a3);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a4);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a5);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a6);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a7);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a8);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a9);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a10);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a11);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a12);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b+d);
    }

else if (digitalRead(buttonPin1) == LOW && digitalRead(buttonPin2) == HIGH)
    {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      delayMicroseconds(B);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a12);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a11);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a10);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a9);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a8);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a7);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a6);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a5);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a4);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a3);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a2);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b+d);
      }

else {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);     
}
}






