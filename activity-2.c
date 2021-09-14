void setup()
{
	pinMode(11, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(6, OUTPUT);
}

void loop() {
	long pins[4] = {11, 10, 9 ,6};
	for (int pin_num = 0; pin_num < 4; pin_num++) {
		for (int i = 0; i <= 255; i++) {
			analogWrite(pins[pin_num], i);
			delay(10);
		}
		digitalWrite(i, LOW);
	}
}
