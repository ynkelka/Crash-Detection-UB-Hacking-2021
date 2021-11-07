/*
 * Title: Crash Detection
 *
 * Objective:
 *    Use ultrasonic sensor to detect distance and if the distance is closer than 200cm buzz and/or vibrate
 * 
 *
 * Requirements:
 * ultrasonic sensor hc-sr04 as input to detect distance
 * buzzer and/or vibration motor to turn on when distance less than 200cm
 *      Note: You can leave the I/O points disconnected and still see the
 *      built-in I/O LEDs toggle with the connector state.
 *
 * Links:
 * ** ClearCore Documentation: https://teknic-inc.github.io/ClearCore-library/
 * ** ClearCore Manual: https://www.teknic.com/files/downloads/clearcore_user_manual.pdf
 *
 * Copyright (c) 2020 Teknic Inc. This work is free to use, copy and distribute under the terms of
 * the standard MIT permissive software license which can be found at https://opensource.org/licenses/MIT
 */

// Declares a variable used to write new states to the output. We will toggle
// this true/false.
//ultrasonic sensor stuff
//trig output
//echo input
long duration;
int distance;
//buzzer stuff
//buzzer output, use analogWrite
//vibrator stuff
//vibrating  motor output, use digitalWrite

void setup() {
  Serial.begin(9600);
    // Put your setup code here, it will run once:
    // IO-0 to 5 are the only pins that support digital output mode.
    //DI-6 for echo input
    pinMode(DI6, INPUT);
    //IO-1 for trig output
    pinMode(IO1, OUTPUT);
    //IO0 for buzzer output
    //pinMode(IO0, OUTPUT);
    //IO2 for vibrating output
    pinMode(IO2, OUTPUT);
}

void loop() {
    // Put your main code here, it will run repeatedly:
    //check if the distance is less than 100cm, if so then set outputState to true.
    digitalWrite(IO1, LOW);
    delayMicroseconds(2);
    digitalWrite(IO1, HIGH);
    delayMicroseconds(10);
    digitalWrite(IO1, LOW);
    duration = pulseIn(DI6, HIGH);
    distance = duration*0.034/2;
    Serial.println(duration);
    Serial.print("distance");
    Serial.println(distance);
    //if true, buzz and vibrate.
    if(distance<=100){
      //buzz
      //analogWrite(IO0,20);
      //vibrate
      digitalWrite(IO2, HIGH);
    }
    else{
      //turn vibration and buzz off
      //buzz
      //analogWrite(IO0,0);
      //vibrate
      digitalWrite(IO2, LOW);
    }

}
