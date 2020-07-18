#include <Servo.h>
Servo servo1;
Servo servo2;

float X=4 , Y=6;

float L1=30 , L2=45;
float ang1=90;
float ang4 , ang5;

void setup() {
  servo1.attach(4);
  servo2.attach(5);
}
void loop(){

ang5= sq(X)+sq(Y)-sq(L1)-sq(L2)/2*L1*L2;
  ang5=cos(ang5);

servo1.write(ang5);  
  
  ang4=ang1-ang5;
servo1.write(ang4);
}
