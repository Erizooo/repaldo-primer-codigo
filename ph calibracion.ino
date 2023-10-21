// pHRead.ino

// Constants:-
const byte pHpin = A0;// conectar el sensor en analogo 0

// Variables:-
float Po;

void setup()
{
Serial.begin(9600);
}

void loop()
{
Po = (1023 - analogRead(pHpin)) / 73.07; //invierta el valor de entrada analógica del sensor de pH y luego escale 0-14
Serial.println(Po, 2);// imprimir resultados
delay(1000);// esperar un segundo

if po < 8;

}
