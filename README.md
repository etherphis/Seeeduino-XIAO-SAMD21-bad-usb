# Seeeduino-XIAO-SAMD21-bad-usb

# (🚨MORE SCRIPTS SOON!🚨)

Bad USB Firmware for Seeeduino XIAO SAMD21 (FIRMWARE ONLY EMULATES EN_US KEYBOARD LAYOUT FOR NOW)

## Overview

This project provides Bad USB firmware for the Seeeduino XIAO SAMD21 development board. Bad USB refers to a USB device that is designed to act maliciously when plugged into a computer, often emulating a keyboard to execute predefined keystrokes.

## Table of Contents

- [Seeeduino-XIAO-SAMD21-bad-usb](#seeeduino-xiao-samd21-bad-usb)
- [(🚨MORE SCRIPTS SOON!🚨)](#more-scripts-soon)
  - [Overview](#overview)
  - [Table of Contents](#table-of-contents)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
  - [Usage](#usage)
    - [Uploading the Firmware](#uploading-the-firmware)
  - [Contributing](#contributing)
  - [Acknowledgments](#acknowledgments)

## Getting Started

### Prerequisites

Before using this Bad USB firmware, ensure you have the following:

- Seeeduino XIAO SAMD21 development board
- Arduino IDE or Visual Studio Code with Arduino extension installed
- USB cable for connecting the Seeeduino XIAO to your computer

### Installation

1. Clone this repository to your local machine:

```bash
   git clone https://github.com/etherphis/Seeeduino-XIAO-SAMD21-bad-usb-firmware.git
```

2. Open the Arduino IDE or Visual Studio Code
3. Install the necessary libraries:
   - Keyboard
4. Connect your Seeeduino XIAO to your computer using the USB cable.

## Usage
### Uploading the Firmware
1. Open the main sketch file (Firmware/Firmware.ino) in the Arduino IDE or Visual Studio Code. (Modify the setup void as you like. We have pre-coded scripts ready to be imported and used!)
2. Select the correct board model in the IDE (Tools -> Board) and set the port (Tools -> Port) to the one your Seeeduino XIAO is connected to.
3. Click the "Upload" button in the IDE to compile and upload the firmware to the Seeeduino XIAO.
   
## Contributing
Contributions to this project are welcome. Fork the repository, make your changes, and submit a pull request.

## Acknowledgments
- Inspired by the Bad USB concept and related projects.