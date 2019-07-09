void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
// HEART AND SOUL
tone(12, 261); // C x 1
delay(250);
noTone(12);
delay(250);
tone(12, 261); // C x 2
delay(250);
noTone(12);
delay(250); 
tone(12, 261); // C x 3
delay(250);
noTone(12);
delay(250);
tone(12, 261); // C x 4
delay(250);
tone(12, 493); // B
delay(250);
noTone(12);
delay(250);
tone(12, 440); // A
delay(250);
noTone(12);
delay(750);
tone(12, 493); // B
delay(250);
noTone(12);
tone(12, 261); // C
delay(250);
noTone(12);
tone(12, 293); // D
delay(250);
noTone(12);
tone(12, 329); // E
delay(250);
noTone(12);
tone(12, 329); // E
delay(250);
noTone(12);
tone(12, 329); // E
delay(250);
noTone(12);

delay(5000);
}
