#include <Arduino.h>

// Pinos conectados no CI 7447 (Codificação do display de 7 segmentos)
#define CI_DISPB PB1
#define CI_DISPC PB0
#define CI_DISPD PA7
#define CI_DISPA PA6

#define VEL_DISP1 PA8 //dezenas
#define VEL_DISP2 PA9 //unidades

void setup() {
  pinMode(CI_DISPA, OUTPUT); //MSB
  pinMode(CI_DISPB, OUTPUT); //LSB
  pinMode(CI_DISPC, OUTPUT);
  pinMode(CI_DISPD, OUTPUT);
  pinMode(VEL_DISP1, OUTPUT); //dezenas

  digitalWrite(VEL_DISP2, HIGH);  //desativa o transistor que fecha o circuito do display da unidade
  digitalWrite(VEL_DISP1, LOW); //ativa o transistor que fecha o circuito do display da dezena
  digitalWrite(CI_DISPA, LOW);
  digitalWrite(CI_DISPB, LOW);
  digitalWrite(CI_DISPC, LOW);
  digitalWrite(CI_DISPD, LOW);
}

void loop(){

}