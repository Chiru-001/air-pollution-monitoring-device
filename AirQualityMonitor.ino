#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD Configuration
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin Definitions
const int LED_FRESH = D5;
const int LED_AVERAGE = D6;
const int LED_DANGER = D7;
const int BUZZER = D8;
const int MQ_SENSOR = A0;

void setup()
{
    Serial.begin(9600);

    pinMode(LED_FRESH, OUTPUT);
    pinMode(LED_AVERAGE, OUTPUT);
    pinMode(LED_DANGER, OUTPUT);
    pinMode(BUZZER, OUTPUT);
    pinMode(MQ_SENSOR, INPUT);

    lcd.init();
    lcd.backlight();
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Air Monitor");
}

void loop()
{
    int sensorValue = analogRead(MQ_SENSOR);

    Serial.println(sensorValue);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Air:");
    lcd.print(sensorValue);

    if (sensorValue <= 350)
    {
        digitalWrite(LED_FRESH, HIGH);
        digitalWrite(LED_AVERAGE, LOW);
        digitalWrite(LED_DANGER, LOW);
        digitalWrite(BUZZER, LOW);

        lcd.setCursor(0, 1);
        lcd.print("Fresh Air");
    }
    else if (sensorValue <= 400)
    {
        digitalWrite(LED_FRESH, LOW);
        digitalWrite(LED_AVERAGE, HIGH);
        digitalWrite(LED_DANGER, LOW);
        digitalWrite(BUZZER, LOW);

        lcd.setCursor(0, 1);
        lcd.print("Average Air");
    }
    else if (sensorValue <= 600)
    {
        digitalWrite(LED_FRESH, LOW);
        digitalWrite(LED_AVERAGE, LOW);
        digitalWrite(LED_DANGER, HIGH);
        digitalWrite(BUZZER, HIGH);

        lcd.setCursor(0, 1);
        lcd.print("Danger");
    }

    delay(1000);
}
