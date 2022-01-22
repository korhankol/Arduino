
float sicaklik;
float gerilim;
int sicpin=0;


void setup() {

Serial.begin(9600);

}

void loop() {

gerilim=analogRead(sicpin);
gerilim=(gerilim/1023)*5000;
sicaklik=gerilim/10.0;
Serial.print("Sıcaklık değeri=");
Serial.print(sicaklik);
Serial.println(" derece");
delay(6000);

}
