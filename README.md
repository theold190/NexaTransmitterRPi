## Nexa remote control from Raspberry Pi

Example for communicating with Nexa (or Arctech, KuKu, etc) 433MHz RF remote from a Raspberry Pi.

# Requirements
* wiringPi, http://wiringpi.com/download-and-install/

# Quickstart
An example, NexaExample.cpp, will turn off a unit, wait 3 seconds and turn it back on again.
$ git clone https://github.com/henrikjonhed/NexaTransmitter.git
$ cd NexaTransmitter
$ make
$ sudo ./NexaExample

Forked from https://github.com/erix/NexaTransmitter