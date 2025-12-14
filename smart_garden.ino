#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin definitions (FINAL, CONSISTENT)
#define SOIL_PIN   34
#define PUMP_PIN   23
#define RED_LED    25
#define GREEN_LED  26
#define BUTTON_PIN 19

int moistureValue = 0;

void setup() {
  Serial.begin(115200);

  pinMode(PUMP_PIN, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Smart Garden");
  lcd.setCursor(0, 1);
  lcd.print("System Ready");

  delay(2000);
  lcd.clear();
}

void loop() {
  moistureValue = analogRead(SOIL_PIN);

  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.print(moistureValue);
  lcd.print("   ");

  if (moistureValue < 2000) {
    digitalWrite(PUMP_PIN, HIGH);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  } else {
    digitalWrite(PUMP_PIN, LOW);
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }

  if (digitalRead(BUTTON_PIN) == LOW) {
    lcd.setCursor(0, 1);
    lcd.print("Button Pressed ");
    delay(300);
  }

  delay(500);
}
