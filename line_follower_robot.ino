/*
 * Remember you don't write code for the path, u need to write code which can reach the destination for any path.
 * 
 * 
 */


 //Motor 1
#define en1 9
#define in1 4
#define in2 5
//Motor2
#define en2 3
#define in3 6
#define in4 7

int sensorleft=14;
int sensorcenter=15;
int sensorright=16;

int l1=1;
int l2=1;
int l3=1;
//# define is used to declare variables
//here u need to use pins which are avialable in arduino uno

void setup() {
 pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);

//en1 ,en2 are used to enable the MotorDriver 
 pinMode(sensorleft,INPUT);
 pinMode(sensorcenter,INPUT);
 pinMode(sensorright,INPUT);

}

void loop() {

l1=digitalRead(sensorleft);
l2=digitalRead(sensorcenter);
l3=digitalRead(sensorright);

if(l1==1&&l2==0&&l3==1)   //move straight
{
  forward();
}
//similarlly write for all combinations  
}


/* writing individual functions for each operation
you have to change these values to run the robot perfectly
here I just wrote with digital write, if you want to give this as analog value,u can use "analogwrite(pin,value(between 0 to 255);
here 0=0Volts n 255=5 Volts
*/
void right() {
  analogWrite(en1,255);
  analogWrite(en2,255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void Stop () {
  analogWrite(en1, 0);
  analogWrite(en2, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void left() {
  analogWrite(en1, 255);
  analogWrite(en2, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void forward() {
  analogWrite(en1, 255);
  analogWrite(en2, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void back(){

   analogWrite(en1, 255);
  analogWrite(en2, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
