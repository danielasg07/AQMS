int counter = 1;
int counter2 = 0;
int counter3= 0;
int counter4 = 0;
int incomingByte =0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (counter2 > 40){
    counter2=0;
    }
  Serial.print(++counter,DEC);
  Serial.print(",");
  Serial.print(++counter2,DEC);
  Serial.print(",");
  Serial.print(++counter3,DEC);
  Serial.print(",");
  Serial.println(++counter4,DEC);
  delay(5000);

}
