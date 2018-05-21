#include "iterators.cpp"

void setup()
{
   int i;
   int led;
   range range_iter_1;
   
   led = 13;
   pinMode(led, OUTPUT);
   while(true) {

            range_iter_1 = range(6);
            while (true) {
                i = range_iter_1.next();
                if (range_iter_1.completed())
                    break;

                
digitalWrite(led, HIGH);
delay(200);
digitalWrite(led, LOW);
delay(200); // Itself uses i
            }
        ;
delay(1000);};
}

void loop()
{
}

