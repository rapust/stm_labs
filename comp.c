#include <stdio.h>

typedef struct {
    double clck;
    int cores;
    long ram;
    long flashMem;
    long otpMem;
} stm_spec;

void modificate(int* ram, int* lat) {
    *ram = *ram - 1;
    *lat = *lat + 1;
}

void main() {
    int ram = 32;
    int latency = -64;
    
    modificate(&ram, &latency);
    printf("%i %i\n", ram, latency);
    printf("%i %i\n", &ram, &latency);
}
