void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone(12, 330);
delay(1000);
tone(12, 294);
delay(1000);
tone(12, 261);
delay(1500);

tone(12, 330);
delay(1000);
tone(12, 294);
delay(1000);
tone(12, 261);
delay(1500);

tone(12, 330);
delay(250);
noTone(12);
delay(100);

tone(12, 330);
delay(250);
noTone(12);
delay(100);

tone(12, 330);
delay(250);
noTone(12);
delay(100);

tone(12, 330);
delay(250);
noTone(12);
delay(100);

tone(12, 294);
delay(250);
noTone(12);
delay(100);

tone(12, 294);
delay(250);
noTone(12);
delay(100);

tone(12, 294);
delay(250);
noTone(12);
delay(100);

tone(12, 294);
delay(250);
noTone(12);
delay(100);

tone(12, 330);
delay(1000);
tone(12, 294);
delay(1000);
tone(12, 261);
delay(1500);

delay(5000);
}
