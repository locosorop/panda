#include <Servo.h>

Servo heart;
Servo tail;

int tailPosition = 0;
void setup()
{
    heart.attach(13);
    tail.attach(12);

    heart.write(0);
    tail.write(0);
}

void loop()
{
    heart.write(30);
    delay(600); 
    heart.write(0);
    delay(1200); 

    if(tailPosition != 90) {
        tailPosition = 90;
    } else {
        tailPosition = -90;
    }

    tail.write(tailPosition);
}
