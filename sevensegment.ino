int a=13;
int b=12;
int c=11;
int d=10;
int e=9;
int f=8;
int g=7;

void setup() {
  pinMode (a, OUTPUT);
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);

}

void loop() {
  
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
