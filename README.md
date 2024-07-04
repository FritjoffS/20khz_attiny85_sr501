# Deer Hunter

## Description
Making a Deer repellant device which uses 20 kHz sound.
The device consists of an ATtiny85, one HC SR501 Pir sensor and a LM2596 buck converter.

My connection goes as follows:
From 12V battery to input of LM2596, this steps down to 5.5V.
From LM2596 to vcc and ground on attiny85. Speaker is connected to PB0 and ground on attiny and SR501 to A3 and ground.

        + ---     ---          PB1 --- Speaker
Battery      LM2596  Attiny85  A3  --- SR501
        - ---     ---          GND ---/
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

## Installation
Instructions on how to install the project.

## Usage
Instructions on how to use the project.

## Contributing
Guidelines for contributing to the project.

## License
Information about the project's license.
