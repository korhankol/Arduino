//burası global değişkenler

int ledcikis = 13;
float sayi=1.9;

void setup() {     // burası enerjilenince sadece 1 kere çalışır,
                   // giriş çıkış pinlerini ayarla, seri haberleşmeyi başlat

  Serial.begin(9600);
  pinMode(ledcikis,OUTPUT);
}

void loop() {

  sayi=sayi-0.1;
  Serial.println(sayi);
  delay(100);
  if(sayi==0){
    
    Serial.println("sayi sıfıra eşit");
    }
  digitalWrite(ledcikis,HIGH);
  delay(1000);
  digitalWrite(ledcikis,LOW);
  delay(1000);
  //while(1);  programı kilitler. tek sefer çalışır loop
}
