#include <MsTimer2.h>
#define var_resistor A0
int var_resistor_value ;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  MsTimer2::set(20,readVariableResistor);
  MsTimer2::start();
}

void loop() {
  // put your main code here, to run repeatedly:
  var_resistor_value = analogRead(var_resistor);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(var_resistor_value);
  digitalWrite(LED_BUILTIN,LOW);
  delay(var_resistor_value);
 
}

void readVariableResistor(){
  var_resistor_value = analogRead(var_resistor);
  Serial.println(var_resistor_value);
}
