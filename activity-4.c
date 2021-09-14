void setup() {
	pinMode(11, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(6, OUTPUT);
       	Serial.begin(9600);
}

void loop() {
	long pins[4] = {11, 10, 9, 6};
	if (Serial.available() > 0) {
		char data = Serial.read();
		bool isFade = data === 1 ? true : false;
		for (int pin_num = 0; pin_num < 4; pin_num++) {
			if (isFade) {
				for (int i = 0; i <= 255; i++) {
					analogWrite(pins[pin_num], i);
					delay(10);
				}
			}
			digitalWrite(pins[pin_num], HIGH);
			delay(500);
			digitalWrite(pins[pin_num], LOW);
		}
	}
}
