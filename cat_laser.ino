#include <Servo.h>
Servo servop;
Servo servo;  
int val;    
int val2;

void setup() {
  servop.attach(9);
  servo.attach(10); 
}

void loop() {
  val = analogRead(A0);            
  val = map(val, 0, 1010, 0, 180);     
  servop.write(val);                  
  delay(15);

  val2 = analogRead(1);            
  val2 = map(val2, 0, 1010, 0, 180);     
  servo.write(val2);                  
  delay(15); 
}
