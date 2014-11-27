#include <stdio.h>
#include <stdlib.h>
#include "NexaTransmitter.h"

const short TRANSMITTER_PIN = 0; // See http://wiringpi.com/pins/
const unsigned long REMOTE_ID = 15213038;
const short UNIT = 1;
const int PRIO = 55;

bool setup() {
    if(wiringPiSetup() == -1) {
        return false;
    }

    // Set a custom priority of the program in order to increase timing
    (void)piHiPri(PRIO);
    return true;
}

int main() {
    if(!setup()) {
        return EXIT_FAILURE;
    }

    NexaTransmitter remote(TRANSMITTER_PIN, REMOTE_ID);
    printf("Turning off unit %d\n", UNIT);
    remote.setSwitch(false, UNIT);

    delay(3000);

    printf("Turning on unit %d\n", UNIT);
    remote.setSwitch(true, UNIT);
    return EXIT_SUCCESS;
}
