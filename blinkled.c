
void setup() {
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  delay(1000);
  digitalWrite(0,HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  delay(1000);
}


/*diagram.json

{
  "version": 1,
  "author": "muruganantham G",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-arduino-uno", "id": "uno", "top": 150.3, "left": -240.69, "attrs": {} },
    {
      "type": "wokwi-led",
      "id": "led1",
      "top": -0.65,
      "left": -54.97,
      "attrs": { "color": "green" }
    },
    {
      "type": "wokwi-led",
      "id": "led2",
      "top": 2.14,
      "left": -119.62,
      "attrs": { "color": "red" }
    },
    {
      "type": "wokwi-led",
      "id": "led3",
      "top": 1.38,
      "left": -187.89,
      "attrs": { "color": "blue" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": 86.78,
      "left": -175.58,
      "rotate": 90,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r2",
      "top": 89.08,
      "left": -103.47,
      "rotate": 90,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r3",
      "top": 85.25,
      "left": -21.38,
      "rotate": 90,
      "attrs": { "value": "1000" }
    }
  ],
  "connections": [
    [ "led2:C", "uno:GND.1", "red", [ "v83.45", "h-20.57" ] ],
    [ "led3:C", "uno:GND.1", "red", [ "v97.25", "h47.7" ] ],
    [ "led1:C", "uno:GND.1", "red", [ "v102.35", "h-85.22" ] ],
    [ "r1:2", "uno:13", "black", [ "h31.25", "v37.46" ] ],
    [ "led3:A", "r1:1", "black", [ "v19.77", "h14.92" ] ],
    [ "led2:A", "r2:1", "black", [ "v22.08", "h22.6" ] ],
    [ "r2:2", "uno:8", "black", [ "h6.7", "v33.63" ] ],
    [ "led1:A", "r3:1", "black", [ "v17.96", "h39.27" ] ],
    [ "r3:2", "uno:4", "black", [ "h-30.89", "v36.69" ] ]
  ],
  "dependencies": {}
}

*/
