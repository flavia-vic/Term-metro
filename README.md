# Projeto de Leitura de Temperatura com Sensor e Display OLED
Este projeto utiliza um sensor de temperatura DS18B20 para medir a temperatura ambiente e exibi-la em um display OLED. O código é escrito em C++ e foi desenvolvido para ser utilizado com a plataforma Arduino.

### Bibliotecas Utilizadas
- OneWire: Biblioteca para comunicação com dispositivos que utilizam o protocolo OneWire, como o sensor de temperatura DS18B20.
- DallasTemperature: Biblioteca para facilitar a leitura de dados do sensor de temperatura DS18B20.
- Wire: Biblioteca para comunicação I2C.
- Adafruit_GFX: Biblioteca gráfica usada para desenhar no display OLED.
- Adafruit_SSD1306: Biblioteca específica para controlar displays OLED baseados no controlador SSD1306.

### Descrição do Código
1-  Configuração das Bibliotecas e Pinos
- Inclui as bibliotecas necessárias.
- Define o pino de entrada de dados do sensor de temperatura (dadosTemperature).
- Configura a comunicação com o sensor usando o protocolo OneWire.

2- Inicialização
- Configura a comunicação serial.
- Inicializa o sensor de temperatura e o display OLED.
- Configura o display para exibir texto em branco e limpa quaisquer informações prévias.

3- Loop Principal

- O código solicita a leitura da temperatura ao sensor.
- A temperatura é impressa no console serial e exibida no display OLED.
- O cursor do display é posicionado para mostrar a temperatura na tela.
- Requisitos de Hardware
- Arduino (ou qualquer microcontrolador compatível)
- Sensor de Temperatura DS18B20
- Display OLED SSD1306
- Jumpers e Protoboard

### Instalação
1- Instale as bibliotecas necessárias:

- OneWire
- DallasTemperature
- Wire
- Adafruit_GFX
- Adafruit_SSD1306
  
2- Conecte os componentes conforme o esquema de ligação:

- O sensor de temperatura DS18B20 deve estar conectado ao pino definido no código.
- O display OLED deve estar conectado aos pinos I2C do microcontrolador.

3- Faça o upload do código para o Arduino.

## Funcionamento
O projeto irá:

1- Ler a temperatura ambiente utilizando o sensor DS18B20.0
2- Exibir a temperatura atual no console serial.
3- Mostrar a temperatura no display OLED SSD1306.

### Notas
- O endereço I2C do display é definido como 0x3C no código. Certifique-se de que o seu display utiliza o mesmo endereço.
- O código inclui um delay de 1,5 segundos (delay(1500)) para evitar atualizações muito rápidas na leitura da temperatura.
