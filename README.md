# Wokwi Playground Repository

This repository hosts the code playgrounds on [wokwi.com](https://wokwi.com), e.g.:

* [Blink](https://wokwi.com/playground/blink?utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)
* [Blink (without delay)](https://wokwi.com/playground/blink-without-delay-3-leds?utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)
* [Dice Roller](https://wokwi.com/playground/dice-roller?utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)
* [LCD1602 I2C](https://wokwi.com/playground/lcd1602-i2c?utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)
* [Neopixel strip (beta)](https://wokwi.com/playground/neopixel-strip?utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)
* [Serial Playground](https://wokwi.com/playground/serial?utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)
* [TaskScheduler](https://wokwi.com/playground/task-scheduler?utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)

## Directory structure

Each subdirectory is a different playground, and contains the following files:

* `lesson.md` - A markdown file with text explaining about the background and HTML code that defines the hardware. A full list of supported hardware components can be found in the [Wokwi Elements Storybook page](https://elements.wokwi.com), and new components can be contributed [through github](https://github.com/wokwi/wokwi-elements).
* `sketch.ino` - The arduino code for the playground
* `lesson.json` - File that describes the lesson. You can add your name there, e.g.: `{"author": "Ariella Eliassaf"}`. This file must be present for the lesson to be recognized by Wokwi.

## Live editing

If you wish to tinker with the markdown / hardware of any of the playgrounds, you can do so by going to
the live playground on wokwi.com and adding `?beta-editor=yeah` at the end of the playground URL. For instance:

[https://wokwi.com/playground/blink?beta-editor=yeah](https://wokwi.com/playground/blink?beta-editor=yeah&utm_source=github&utm_medium=social&utm_campaign=wokwi-playgrounds)

This will open the [blink](blink/lesson.md) playground in live editing mode.

# License

The content of this repo is released under the [CC-BY-SA 4.0](https://creativecommons.org/licenses/by-sa/4.0/) license.
