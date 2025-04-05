#include <Arduino.h>
#include "i8080.h"
#include "altair_basic.h"

void setup() {
  Serial.begin(115200);
  Serial.println("Booting Altair BASIC...");

  i8080_init();                   // инициализация эмулятора
  i8080_load_rom(altair_basic, sizeof(altair_basic));  // загрузка ROM
  i8080_run();                    // запуск
}

void loop() {
  // Всё в i8080_run
}
