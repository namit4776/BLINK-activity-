void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  NAMIT = -. .- -- .. -
  . = 1 second (HIGH)
  - = 2 seconds (HIGH)
  TIME BETWEEN DASH AND DOT = 2 SECOND(LOW)
  TIME BETWEEN LETTERS = 2 SECONDS(LOW)
  */

//N
digitalWrite(LED_BUILTIN,HIGH);
delay(2000);
digitalWrite(LED_BUILTIN,LOW);
delay(1000);
digitalWrite(LED_BUILTIN,HIGH);
delay(1000);
digitalWrite(LED_BUILTIN,HIGH);
delay(2000);
//A
digitalWrite(LED_BUILTIN,HIGH);
delay(1000);
digitalWrite(LED_BUILTIN,LOW);
delay(1000);
digitalWrite(LED_BUILTIN,HIGH);
delay(2000);
digitalWrite(LED_BUILTIN,LOW);
delay(2000);
//M
digitalWrite(LED_BUILTIN,HIGH);
delay(2000);
digitalWrite(LED_BUILTIN,LOW);
delay(1000);
digitalWrite(LED_BUILTIN,HIGH);
delay(2000);
digitalWrite(LED_BUILTIN,LOW);
delay(2000);
//I
digitalWrite(LED_BUILTIN,HIGH);
delay(1000);
digitalWrite(LED_BUILTIN,LOW);
delay(1000);
digitalWrite(LED_BUILTIN,HIGH);
delay(1000);
digitalWrite(LED_BUILTIN,LOW);
delay(2000);
//T
digitalWrite(LED_BUILTIN,HIGH);
delay(2000);
digitalWrite(LED_BUILTIN,HIGH);
delay(2000);

}
