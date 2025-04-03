#include <TFT.h>  // Arduino LCD library
#include <SPI.h>

// Definición de pines para Arduino Uno
#define cs   10
#define dc   9
#define rst  8

// Crear instancia de la librería
TFT TFTscreen = TFT(cs, dc, rst);

void setup() {
  // Iniciar pantalla TFT
  TFTscreen.begin();
  
  // Limpiar pantalla con fondo negro
  TFTscreen.background(0, 0, 0);
}

void loop() {
  // Valores fijos de ejemplo
  int temperatura = 25;  // °C
  int humedad = 60;      // %

  // Limpiar pantalla
  TFTscreen.background(0, 0, 0);

  // Mostrar "Temperatura" en rojo
  TFTscreen.stroke(255, 0, 0);
  TFTscreen.setTextSize(2);
  TFTscreen.text("Temp:", 10, 20);
  
  // Mostrar valor de temperatura en grande
  TFTscreen.setTextSize(4);
  TFTscreen.text(String(temperatura).c_str(), 110, 15);
  TFTscreen.text(" C", 140, 15);

  // Mostrar "Humedad" en azul
  TFTscreen.stroke(0, 0, 255);
  TFTscreen.setTextSize(2);
  TFTscreen.text("Humedad:", 10, 80);

  // Mostrar valor de humedad en grande
  TFTscreen.setTextSize(4);
  TFTscreen.text(String(humedad).c_str(), 110, 75);
  TFTscreen.text(" %", 170, 75);

  // Esperar 1 segundo antes de actualizar
  delay(1000);
}
