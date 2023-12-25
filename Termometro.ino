/*Biblotecas*/
#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#include <Adafruit_GFX.h> //INCLUSÃO DE BIBLIOTECA
#include <Adafruit_SSD1306.h> //INCLUSÃO DE BIBLIOTECA
/************************************************************************************************/
#define dadosTemperature 2 /*pino de entrada de dados do sensor*/ 
/************************************************************************************************/
OneWire oneWire(dadosTemperature);  /*Protocolo OneWire*/
/************************************************************************************************/
DallasTemperature sensors(&oneWire); /*encaminha referências OneWire para o sensor*/
Adafruit_SSD1306 display = Adafruit_SSD1306(); /*objeto de tipo adafruit_SSD1306*/
/************************************************************************************************/

void setup(){
  Serial.begin(115200);
  Serial.println("demonstracao do funcionamento do sensor");
  sensors.begin();
  Wire.begin(); //INICIALIZA A BIBLIOTECA WIRE
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //INICIALIZA O DISPLAY COM ENDEREÇO I2C 0x3C
  display.setTextColor(WHITE); //DEFINE A COR DO TEXTO
  display.setTextSize(1,1); //DEFINE O TAMANHO DA FONTE DO TEXTO
  display.clearDisplay(); //LIMPA AS INFORMAÇÕES DO DISPLAY
}
void loop() {
  /********************************************************************/
   sensors.requestTemperatures(); /* Envia o comando para leitura da temperatura */
  Serial.print("A temperatura é: "); /* Printa "A temperatura é:" */
  delay(1500);
  Serial.print(sensors.getTempCByIndex(0)); /* Endereço do sensor */
  display.setCursor(5,0); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
  display.print("Temperatura Atual:"); //ESCREVE O TEXTO NO DISPLAY
  display.display(); //EFETIVA A ESCRITA NO DISPLAY
  display.setCursor(45,20); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
  display.print(sensors.getTempCByIndex(0)); //ESCREVE O TEXTO NO DISPLAY
  delay(1500);
  display.display(); //EFETIVA A ESCRITA NO DISPLAY

}
