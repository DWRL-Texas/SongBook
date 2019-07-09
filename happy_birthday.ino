void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// phrase 1:
tone(12, 294); // D
delay(500);
noTone(12);
delay(100); // D
tone(12, 294);
delay(250);

tone(12, 330); // E
delay(750);
tone(12, 294); // D
delay(750);
tone(12, 392); // G
delay(750);

tone(12, 370); // F#
delay(1500);

//phrase 2:
tone(12, 294); // D
delay(500);
noTone(12);
delay(100); // D
tone(12, 294);
delay(250);

tone(12, 330); // E
delay(750);
tone(12, 294); // D
delay(750);
tone(12, 440); // A
delay (750);

tone(12, 392); // G
delay(1500);

// phrase 3:

tone(12, 294); // D
delay(500);
noTone(12);
delay(100); // D
tone(12, 294);
delay(250);

tone(12, 587); // High D
delay(750);
tone(12, 494); // B
delay(750);
tone(12, 392); // G
delay(750);
tone(12, 370); // F#
delay(750);
tone(12, 330); // E
delay(1000);

// phrase 4:

tone(12, 523); // High C
delay(500);
noTone(12);
delay(100);
tone(12, 523); // High C
delay(250);

tone(12, 494); // B
delay(750);
tone(12, 392); // G
delay(750);
tone(12, 440); // A
delay(750);

tone(12, 392); // G
delay(1500);

noTone(12);
delay(5000);
}
