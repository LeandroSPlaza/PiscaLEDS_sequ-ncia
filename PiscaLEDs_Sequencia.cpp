
// Definindo os pinos para cada LED
int ledVermelho = 2;
int ledAmarelo = 3;
int ledVerde = 4;

void setup() {
  // Configura todos os três pinos como saída de energia
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // 1. Acende o Vermelho, espera, apaga
  digitalWrite(ledVermelho, HIGH);
  delay(500); // Fica aceso por meio segundo (500ms)
  digitalWrite(ledVermelho, LOW);

  // 2. Acende o Amarelo, espera, apaga
  digitalWrite(ledAmarelo, HIGH);
  delay(500);
  digitalWrite(ledAmarelo, LOW);

  // 3. Acende o Verde, espera, apaga
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  
  // O loop recomeça do vermelho imediatamente
}