const int buttonPin = 8;  // The pin number for the push button
const int ledPin = 12;    // The pin number for the LED

// Variable to store the button status
int buttonState = 0;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (HIGH)
  if (buttonState == HIGH) {
    // Turn LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn LED off
    digitalWrite(ledPin, LOW);
  }
}
