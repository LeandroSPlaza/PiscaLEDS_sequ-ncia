# PiscaLEDs Sequência de Advertência

Este projeto simula uma **luz de advertência com três LEDs** usando Arduino.  
Os LEDs piscam sequencialmente: vermelho → amarelo → verde, repetindo continuamente.

## Componentes necessários

- 1 Arduino Uno (ou compatível)  
- 3 LEDs (vermelho, amarelo e verde)  
- 3 resistores de 220Ω  
- Protoboard e fios de conexão  

## Conexões

- LED Vermelho → pino digital 2  
- LED Amarelo → pino digital 3  
- LED Verde → pino digital 4  
- Cada LED deve ter um resistor de 220Ω conectado em série  

## Como usar

1. Abra o Arduino IDE ou VS Code com a extensão Arduino.  
2. Carregue o arquivo `PiscaLEDs_Sequencia.ino`.  
3. Selecione a placa correta (ex.: Arduino Uno) e a porta serial.  
4. Clique em **Upload**.  
5. Observe os LEDs piscando na sequência: vermelho → amarelo → verde.  

## Código principal

O código é simples e utiliza as funções padrão do Arduino:

```cpp
pinMode(pino, OUTPUT);        // Configura o pino como saída
digitalWrite(pino, HIGH/LOW); // Acende ou apaga o LED
delay(500);                   // Pausa de 500ms entre os LEDs