#include "DHT.h"

#define DHTPIN 2     
#define DHTTYPE DHT22   

DHT dht(DHTPIN, DHTTYPE);

const int buzzer = 9;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
  Serial.println(F("DHT22 example!"));

  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print(F("Humidity: "));
  Serial.print(humidity);
  Serial.print(F("%  Temperature: "));
  Serial.print(temperature);
  Serial.println(F("°C "));

  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.setCursor(10, 1);
  lcd.print(humidity);
  lcd.print(" *C ");

  lcd.setCursor(0,0);
  lcd.print("Temperature :");
  lcd.setCursor("15, 0");
  lcd.print(temperature);
  lcd.print(" *C ");

  if(temperature > 25) {
    digitalWrite(buzzer, HIGH);
    digitalWritr(0, HIGH);
    digitalWrite(1, LOW);
  }

  else {
    digitalWrite(buzzer, LOW);
    digitalWritr(0, LOW);
    digitalWrite(1, HIGH);
  }

  delay(2000);
}
