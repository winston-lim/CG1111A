void setup()
{
	pinMode(11, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(6, OUTPUT);
}

void loop() {
	long pins[4] = {11, 10, 9 ,6};
	for (int i = 0; i < 4; i++) {
		digitalWrite(pins[i], HIGH);
		delay(500);
		digitalWrite(pins[i], LOW);
		delay(500);
	}
}
