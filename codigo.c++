// C++
//

#include <Servo.h>

Servo servo;

const int pinoPotenciometro = A0;
const int pinoServo = 9;

void setup() {
    servo.attach(pinoServo);
}

void loop() {

    int valorPotenciometro = analogRead(pinoPotenciometro);

    int angulo = map(valorPotenciometro, 0, 1023, 0, 180);

    servo.write(angulo);

    delay(15);
}
