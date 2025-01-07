/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>
#include <LiquidCrystal.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
const int numRows= 2;
const int numCols= 16;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
 lcd.begin(numCols, numRows);
lcd.print("Magloop");
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  //Serial.begin(9600);

 //

}

void loop() {
 

  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value

  lcd.setCursor(0,1);
  lcd.print(val);
  lcd.print(" ");
 //Serial.println(val);
  delay(15);                           // waits for the servo to get there
}
