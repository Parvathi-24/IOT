/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// tdehe setup function runs once when you press reset or power the board
#define ECHO D4
#define TRIG D5
long duration=0;
float distance=0;
void setup() {
  Serial.begin(115200);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
digitalWrite(TRIG,LOW);
pinMode(D6,INPUT);

}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(TRIG, HIGH); 
  delay(10); // turn the LED on (HIGH is the voltage level)
     digitalWrite(TRIG, LOW); 
     duration=pulseIn(ECHO,1);
     distance=(duration/2)*0.034;
         
     
     Serial.print(distance);
     Serial.println(" cm ");
    
     delay(500) ;           // wait for a second
}
