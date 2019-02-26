
int i = 0;
int ldr = 0;
int btn = 0;


void setup() {
  // put your setup code here, to run once:
  
  //Initiate Serial communication.
  Serial.begin(9600);

  pinMode(4, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);//not working
  
 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  i++;
  
  ldr = analogRead(17); //not working
  btn = digitalRead(4);
  Serial.print(i);
  Serial.print(", ");
  Serial.print(ldr);
  Serial.print(", ");
  Serial.print(btn);
  Serial.println();
  delay(100);
}
