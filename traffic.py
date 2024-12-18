import machine
import time

RED_LED_PIN = 1   # GP0
YELLOW_LED_PIN = 5  # GP1
GREEN_LED_PIN = 9  # GP2

red_led = machine.Pin(RED_LED_PIN, machine.Pin.OUT)
yellow_led = machine.Pin(YELLOW_LED_PIN, machine.Pin.OUT)
green_led = machine.Pin(GREEN_LED_PIN, machine.Pin.OUT)

def traffic_light(red, yellow, green, delay):
    red_led.value(red)
    yellow_led.value(yellow)
    green_led.value(green)
    time.sleep(delay)

while True:
    traffic_light(1, 0, 0, 5)  # Red light for 5 seconds
    traffic_light(1, 1, 0, 2)  # Red and yellow for 2 seconds
    traffic_light(0, 0, 1, 5)  # Green light for 5 seconds
    traffic_light(0, 1, 0, 2)  # Yellow light for 2 seconds


#DIAGRAM.json
''' {
  "version": 1,
  "author": "Kavita Mishra",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-pi-pico",
      "id": "pico",
      "top": 0,
      "left": 0,
      "attrs": { "env": "micropython-20230426-v1.20.0" }
    },
    {
      "type": "wokwi-led",
      "id": "led1",
      "top": -22.8,
      "left": -53.8,
      "attrs": { "color": "red" }
    },
    {
      "type": "wokwi-led",
      "id": "led2",
      "top": 25.2,
      "left": -53.8,
      "attrs": { "color": "yellow" }
    },
    {
      "type": "wokwi-led",
      "id": "led3",
      "top": 73.2,
      "left": -53.8,
      "attrs": { "color": "green" }
    }
  ],
  "connections": [
    [ "led1:A", "pico:GP1", "green", [ "v0", "h38.4" ] ],
    [ "led1:C", "pico:GND.1", "green", [ "v9.6", "h48.4" ] ],
    [ "led2:A", "pico:GP5", "green", [ "v0", "h28.8" ] ],
    [ "led2:C", "pico:GND.2", "green", [ "v9.6", "h48.4" ] ],
    [ "led3:A", "pico:GP9", "green", [ "v0", "h38.4" ] ],
    [ "led3:C", "pico:GND.3", "green", [ "v9.6", "h38.8" ] ]
  ],
  "dependencies": {}
}'''
