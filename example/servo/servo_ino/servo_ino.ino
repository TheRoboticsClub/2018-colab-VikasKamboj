#include <Servo.h>

#include "iterators.cpp"

void setup()
{
   Servo myservo;
   int pin;
   int pos;
   range range_iter_1;
   range range_iter_2;
   
   myservo = Servo();
   pos = 0;
   pin = 9;
   (myservo).attach(pin);
   while(true) {

            range_iter_1 = range(180);
            while (true) {
                pos = range_iter_1.next();
                if (range_iter_1.completed())
                    break;

                
(myservo).write(pos);
delay(15); // Itself uses pos
            }
        ;

            range_iter_2 = range(180);
            while (true) {
                pos = range_iter_2.next();
                if (range_iter_2.completed())
                    break;

                
(myservo).write((179-pos));
delay(15); // Itself uses pos
            }
        ;};
}

void loop()
{
}


