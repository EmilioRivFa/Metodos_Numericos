#include <Rigol.h>

Rigol osciloscopio;

void setud () {
    Serial.begin(9600);
    osciloscopio.begin(Serial);

}

void loop() {
    for (int i = 0; i < 1000; i++) {
        osciloscopio.outputDigital(1);
        delayMicroseconds(500);
        osciloscopio.outputDigital(0);
        delayMicroseconds(500);
    }
    

}
