#include <SevSeg.h>

const int buttonIncrementPin = 9;  // Pin for the increment button
const int buttonStopPin = 10;       // Pin for the stop button
const int ledGreenPin = 11;         // Pin for the green LED
const int ledRedPin = 12;           // Pin for the red LED

const int delayInterval = 50;

SevSeg sevSeg; // Declare a seven-segment display object

int count = 0; // Variable to store the count value
bool countingEnabled = true; // Flag to control counting

void setup() {
  byte digitPins[] = {};
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8};
  // cathode,A,B,C,D,E,F,G
  sevSeg.begin(COMMON_ANODE, 1, digitPins, segmentPins, true, false, false, true); // Initialize seven-segment display
  sevSeg.setBrightness(90); // Set brightness of the display

  pinMode(buttonIncrementPin, INPUT_PULLUP); // Set increment button pin as input with internal pull-up resistor
  pinMode(buttonStopPin, INPUT_PULLUP);      // Set stop button pin as input with internal pull-up resistor
  pinMode(ledGreenPin, OUTPUT);              // Set green LED pin as output
  pinMode(ledRedPin, OUTPUT);                // Set red LED pin as output
  sevSeg.setNumber(0);
  sevSeg.refreshDisplay();
}

int calculate(int num) {
  // return num/0;
  return num;
}

int lastButtonIncrementPin = HIGH;
unsigned long long lastButtonIncrementPinTime = millis();
int lastButtonStopPin = HIGH;
unsigned long long lastButtonStopPinTime = millis();

void loop() {
  int buttonIncrementPinState = digitalRead(buttonIncrementPin);
  if(buttonIncrementPinState != lastButtonIncrementPin
    && millis() - lastButtonIncrementPinTime < delayInterval)
  {
    buttonIncrementPinState = lastButtonIncrementPin;
  } else {
    lastButtonIncrementPinTime = millis();
  }
  if (buttonIncrementPinState == LOW && lastButtonIncrementPin == HIGH) { // If increment button is pressed
    if (countingEnabled) {
      count++; // Increment count
      if (count > 9) count = 0; // Reset count if it exceeds 9
      sevSeg.setNumber(count);
      sevSeg.refreshDisplay();
    }
  }
  lastButtonIncrementPin = buttonIncrementPinState;

  int buttonStopPinState = digitalRead(buttonStopPin);
  if (buttonStopPinState == LOW
    && millis() - lastButtonStopPinTime < delayInterval)
  {
    buttonStopPinState = lastButtonStopPin;
  } else {
    lastButtonStopPinTime = millis();
  }

  if (buttonStopPinState == LOW && lastButtonStopPin == HIGH) { // if stop btn is pressed
    countingEnabled = !countingEnabled; // Toggle counting flag
    if (!countingEnabled) {
      // Turn on green LED if count is odd, red LED if count is even
      int result = calculate(count) % 2;
      digitalWrite(ledGreenPin, result!=0);
      digitalWrite(ledRedPin, result==0);
    } else {
      // Turn off LEDs
      digitalWrite(ledGreenPin, LOW);
      digitalWrite(ledRedPin, LOW);
      sevSeg.setNumber(0);
      count = 0;
    }
  }
  sevSeg.refreshDisplay();
}

