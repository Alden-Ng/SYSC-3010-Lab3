#define var_resistor A0
int var_resistor_value ;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  var_resistor_value = analogRead(var_resistor);
  delay(var_resistor_value);
  digitalWrite(LED_BUILTIN,LOW);
  delay(var_resistor_value);
 
}