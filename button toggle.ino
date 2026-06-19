int buttonState = 0;
int lastButtonState = 0;
int ledState = LOW;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {

  buttonState = digitalRead(2);

  if (buttonState == HIGH && lastButtonState == LOW) {
    ledState = !ledState;
    digitalWrite(12, ledState);
    delay(200);
  }

  lastButtonState = buttonState;
}
