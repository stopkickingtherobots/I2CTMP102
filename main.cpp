#include "mbed.h"
#include "TMP102.h"

Serial pc(USBTX, USBRX);

TMP102 temperature(p9, p10, 0x90); //A0 pin is connected to ground

int main()
{
    pc.printf("Begin.\n");

    while(1) {
        // pc.printf("Hello World!\n");
        pc.printf("Temperature: %f\n", temperature.read());
        wait(5.0);
    }
}
