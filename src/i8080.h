#ifndef I8080_H
#define I8080_H

void i8080_init();
void i8080_load_rom(const uint8_t *rom, size_t size);
void i8080_run();

#endif
