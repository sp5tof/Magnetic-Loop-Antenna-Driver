# Magnetic-Loop-Antenna-Driver
Controller is based on Arduino-mini and the multi-turn (1k, 10 rounds) potentiometer connected to it.  There is also servo controlled with three standard lines (power + steering).
LCD HD44780 2×16 is connected to standard Arduino PINs (12, 11, 5, 4, 3, 2). You can use I2C line by modyfing the arduino code. Potentiometer is connected to Arduino pin (A0).
The servo driving is done with pin 9.

This code was originally written by Michal Rinott
