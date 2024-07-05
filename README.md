[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# Deer Hunter

## Description
This repository contains the source code for a Deer repellant device which uses 20 kHz sound.
The device consists of an ATtiny85, one HC SR501 Pir sensor and a LM2596 buck converter.

My connection goes as follows:
From 12V battery to input of LM2596, this steps down to 5.5V.
From LM2596 to vcc and ground on attiny85. Speaker is connected to PB1 and ground on attiny and SR501 to A3, vcc and ground.

```
        + ---     ---          PB1 --- Speaker
Battery      LM2596  Attiny85  A3  --- SR501
        - ---     ---          GND ---/
```
```
                +-----------+
        Reset --| 1   U   8 |-- VCC
   A3 / PB3   --| 2       7 |-- PB2 / A2
   A2 / PB4   --| 3       6 |-- PB1 / PWM
        GND   --| 4       5 |-- PB0 / PWM
                +-----------+
```

## Requirements
- Requirement 1
- Requirement 2
- Requirement 3

## Setup and Configuration

1. Connect all components as per the wiring instructions above.
2. Open the `main.cpp` file in your Arduino IDE.
3. Modify the `speakerPin` and `pirPin` variables in the code to match your wiring.
4. Upload the code to your Arduino board.

## Operation

Once powered, the system continuously monitors for motion. Upon detecting motion, it generates a 20 kHz tone through the speaker for 5 seconds. This serves as an audible alert for the presence of motion.

## Customization

You can adjust the frequency of the tone and the duration of the alert by modifying the `frequency` and `delay` values in the `loop` function.

## Safety and Usage Notes

- Ensure the speaker's volume is set at a safe level to avoid hearing damage.
- Test the system in various locations to optimize motion detection.

## Contributing
Contributions to improve the code or suggestions for enhancements are welcome. Please follow the standard GitHub pull request process to submit your changes.

## License
This project is open source and available under the [MIT License](LICENSE.md).
