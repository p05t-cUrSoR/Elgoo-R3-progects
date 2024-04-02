const int redPin = 9;    // Red pin of the RGB LED
const int greenPin = 10; // Green pin of the RGB LED
const int bluePin = 11;  // Blue pin of the RGB LED
const int red1 = 3;      // Pin for red1 LED (mapped from pin 3)
const int red2 = 5;      // Pin for red2 LED (mapped from pin 5)
const int red3 = 6;      // Pin for red3 LED (mapped from pin 6)

// Overall brightness level (adjustable)
int overallBrightness = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3, OUTPUT);
}

void loop() {
  // Generate random brightness levels for each LED
  int redBrightness = random(0, overallBrightness + 1);
  int greenBrightness = random(0, overallBrightness + 1);
  int blueBrightness = random(0, overallBrightness + 1);
  int red1Brightness = random(0, overallBrightness + 1);
  int red2Brightness = random(0, overallBrightness + 1);
  int red3Brightness = random(0, overallBrightness + 1);

  // Perform random brightness modulation for each LED
  analogWrite(redPin, redBrightness);
  analogWrite(greenPin, greenBrightness);
  analogWrite(bluePin, blueBrightness);
  analogWrite(red1, red1Brightness);
  analogWrite(red2, red2Brightness);
  analogWrite(red3, red3Brightness);

  delay(20); // Adjust delay as needed
}


