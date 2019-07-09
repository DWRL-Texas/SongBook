void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// Mario
tone(12, 659); // E5 x 1
delay(250);
noTone(12);
delay(50);
tone(12, 659); // E5 x 2
delay(250);
noTone(12);
delay(250); 
tone(12, 659); // E5 x 3
delay(250);
noTone(12);
delay(250);
tone(12, 523); // C5
delay(250);
tone(12, 659); // E5
delay(250);
noTone(12);
delay(250);
tone(12, 783); // G5
delay(250);
noTone(12);
delay(750);
tone(12, 392); // G4
delay(250);
noTone(12);

delay(5000);
}
