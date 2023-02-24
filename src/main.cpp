#include <Arduino.h>
#include <Wifi.h>
/**
 *
 * JAIME EDUARDO DIAZ TOBON
 *
 */

const char * ssid = "virus";
const char * password = "password";

/**
 * @brief Esta es la funcion de configuracion del dispositivo
 * 
 */
void setup() {
  pinMode(2, OUTPUT);  //Coloco el pin 2 como salida
  Serial.begin(115200);
  Serial.println("Inicializando dispositivo");
  Wifi.begin(ssid, password);

  Serial.println("Estableciendo vinculo con el AP");
  while(Wifi.status() != WL_CONNECTTED) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println("\r\nConeccion establecida");
}


/**
 * @brief Esta funcion es un bucle infinito que corresponde al main()
 * 
 */
void loop() {
  digitalWrite(2,HIGH);  //Enciende el LED
  delay(500);  //Espero 500ms
  digitalWrite(2,LOW); //Apaga el Led
  delay(500);  //Espero 500ms
}
