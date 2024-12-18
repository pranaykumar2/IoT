#include "DHT.h"

#define DHTPIN 2     
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println(F("DHT22 example!"));

  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check if any reads failed and exit early (to try again).
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(humidity);
  Serial.print(F("%  Temperature: "));
  Serial.print(temperature);
  Serial.println(F("°C "));

  // Wait a few seconds between measurements.
  delay(2000);
}

/*digram.json
{
  "version": 1,
  "author": "Uri Shaked",
  "editor": "wokwi",
  "parts": [
    {
      "id": "uno",
      "type": "wokwi-arduino-uno",
      "top": 160,
      "left": 20
    },
    {
      "id": "dht",
      "type": "wokwi-dht22",
      "top": 0,
      "left": 70
    }
  ],
  "connections": [
    ["uno:GND.1", "dht:GND", "black", ["v-20", "*", "v5"]],
    ["uno:2", "dht:SDA", "green", ["v-16", "*", "h0"]],
    ["uno:5V", "dht:VCC", "red", ["v20", "*", "h0"]]
  ]
}

*/
