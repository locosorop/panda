#include <Servo.h>

int heartPin = 13; 
Servo tail;

int tailPosition = 0;
void setup()
{
    pinMode(heartPin, OUTPUT);

    tail.attach(12);
    tail.write(0);
}

void loop()
{

    //beat 1
    digitalWrite(heartPin, HIGH);
    delay(80); 
    digitalWrite(heartPin, LOW);
    delay(500); 

    //beat 2
    digitalWrite(heartPin, HIGH);
    delay(50); 
    digitalWrite(heartPin, LOW);
    delay(800);

    if(tailPosition != 90) {
        tailPosition = 90;
    } else {
        tailPosition = -90;
    }

    tail.write(tailPosition);
}
