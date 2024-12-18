int a=13;
int b=12;
int c=11;
int d=10;
int e=9;
int f=8;
int g=7;

void setup() {
  // put your setup code here, to run once:
pinMode (a, OUTPUT);
pinMode (b, OUTPUT);
pinMode (c, OUTPUT);
pinMode (d, OUTPUT);
pinMode (e, OUTPUT);
pinMode (f, OUTPUT);
pinMode (g, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (a,0);
digitalWrite (b,0);
digitalWrite (c,0);
digitalWrite (d,0);
digitalWrite (e,0);
digitalWrite (f,0);
digitalWrite (g,1);
delay (500);

digitalWrite (a,1);
digitalWrite (b,0);
digitalWrite (c,0);
digitalWrite (d,1);
digitalWrite (e,1);
digitalWrite (f,1);
digitalWrite (g,1);
delay (500);

digitalWrite (a,0);
digitalWrite (b,0);
digitalWrite (c,1);
digitalWrite (d,0);
digitalWrite (e,0);
digitalWrite (f,1);
digitalWrite (g,0);
delay (500);

digitalWrite (a,0);
digitalWrite (b,0);
digitalWrite (c,0);
digitalWrite (d,0);
digitalWrite (e,1);
digitalWrite (f,1);
digitalWrite (g,0);
delay (1000);

digitalWrite (a,1);
digitalWrite (b,0);
digitalWrite (c,0);
digitalWrite (d,1);
digitalWrite (e,1);
digitalWrite (f,0);
digitalWrite (g,0);
delay (1000);

digitalWrite (a,0);
digitalWrite (b,1);
digitalWrite (c,0);
digitalWrite (d,0);
digitalWrite (e,1);
digitalWrite (f,0);
digitalWrite (g,0);
delay (1000);

digitalWrite (a,0);
digitalWrite (b,1);
digitalWrite (c,0);
digitalWrite (d,0);
digitalWrite (e,0);
digitalWrite (f,0);
digitalWrite (g,0);
delay (1000);

digitalWrite (a,0);
digitalWrite (b,0);
digitalWrite (c,0);
digitalWrite (d,1);
digitalWrite (e,1);
digitalWrite (f,1);
digitalWrite (g,1);
delay (1000);

digitalWrite (a,0);
digitalWrite (b,0);
digitalWrite (c,0);
digitalWrite (d,0);
digitalWrite (e,0);
digitalWrite (f,0);
digitalWrite (g,0);
delay (1000);

digitalWrite (a,0);
digitalWrite (b,0);
digitalWrite (c,0);
digitalWrite (d,0);
digitalWrite (e,1);
digitalWrite (f,0);
digitalWrite (g,0);
delay (1000);
}

/*digram.json

{
  "version": 1,
  "author": "Anonymous maker",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-arduino-uno", "id": "uno", "top": 96.6, "left": 57, "attrs": {} },
    { "type": "wokwi-7segment", "id": "sevseg1", "top": -23.82, "left": 197.08, "attrs": {} }
  ],
  "connections": [
    [ "sevseg1:G", "uno:7", "green", [ "v-37.56", "h67.2", "v144", "h-22.8" ] ],
    [ "sevseg1:F", "uno:8", "green", [ "v-27.96", "h48", "v124.8", "h-28.8", "v28.8" ] ],
    [ "sevseg1:A", "uno:13", "green", [ "v-18.36", "h19.2", "v96", "h-67.2" ] ],
    [ "sevseg1:B", "uno:12", "green", [ "v-47.16", "h-48", "v134.4" ] ],
    [ "sevseg1:C", "uno:11", "green", [ "v19.2", "h-28.8" ] ],
    [ "sevseg1:D", "uno:10", "green", [ "v0" ] ],
    [ "sevseg1:E", "uno:9", "green", [ "v0", "h-28.8", "v38.4", "h48" ] ],
    [ "sevseg1:COM.2", "uno:3.3V", "green", [ "h0", "v-66.36", "h115.2", "v393.6", "h-124.8" ] ]
  ],
  "dependencies": {}
}

*/
