# :radio: morse_coder (-- --- .-. ... . / -.-. --- -.. . .-.)
This is a simple sketch for arduino. Its purpose is to translate text messages into morse code, display each character and its morse code in .- notation through the serial port and use both a blinking led (by default on pin 13) and an active buzzer (by default on pin 11) to send the message. It may be simple, but with this I learned the basics of loops, functions, external files and declarations 😅

## Usage

There are five main parameter that can be changed, all of them within the main `morse_coder.ino` file:
- The message string. 
- The pin to which the led is connected to.
- The time _unit_ used for the standard dot duration.
- The pin to which the active buzzer is connected to.
- The frequency of the tone.

Just edit those to your heart's content and upload the sketch to your board (for best results use plain english). To repeat the message just press the restart button on your board.

This was written for an Arduino Uno board, but should be simple enough to be practically universal.