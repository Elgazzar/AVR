# AVR Project README

This repository contains AVR microcontroller projects, including modules for ADC, DIO, LCD, UART, and more. The projects are designed for ATMEGA32A microcontrollers.

## Prerequisites

To build, compile, and flash the AVR projects, you need the following tools:

### 1. WINAVR
- **Description**: WINAVR is a suite of executable, open source software development tools for the Atmel AVR series of RISC microprocessors hosted on the Windows platform. It includes the AVR-GCC compiler, AVR-GDB debugger, and AVRDUDE for programming AVR microcontrollers.
- **Download**: Download WINAVR from the official source or a trusted mirror (e.g., version 20100110).
- **Installation**: Extract the files to a directory, e.g., `C:\WinAVR-20100110`. Add the `bin` directory to your system's PATH environment variable.

### 2. Microchip Studio
- **Description**: Microchip Studio is the integrated development environment (IDE) for developing and debugging AVR and SAM microcontroller applications. It provides a comprehensive development environment with advanced debugging capabilities.
- **Download**: Download Microchip Studio from the Microchip website (free version available).
- **Installation**: Follow the installation wizard. Ensure it integrates with WINAVR if needed.

## Setup

1. Install WINAVR and add it to your PATH.
2. Install Microchip Studio.
3. Open the project in Microchip Studio (e.g., open the `.atsln` files in the respective project folders).

## Configuring USBASP Programmer

The USBASP is a popular USB programmer for AVR microcontrollers. To use it with AVRDUDE on Windows, you need to install the libusb driver using Zadig:

1. **Download Zadig**: Visit https://zadig.akeo.ie/ and download the latest version of Zadig.
2. **Connect USBASP**: Plug in your USBASP programmer to a USB port on your computer.
3. **Run Zadig as Administrator**: Right-click Zadig.exe and select "Run as administrator".
4. **Select Device**: In Zadig, from the device dropdown, select the USBASP device (it may appear as "USBasp" or with a similar name and VID/PID like 16c0:05dc).
5. **Choose Driver**: Select "libusb-win32" from the driver dropdown.
6. **Install Driver**: Click the "Install Driver" or "Replace Driver" button. This will replace the default Windows driver with libusb-win32.
7. **Verify**: After installation, the USBASP should be ready for use with AVRDUDE. You may need to restart your computer if issues persist.

**Note**: Zadig helps install the correct driver for USB devices that require libusb. Ensure you select the correct device to avoid conflicts with other USB devices.

## Building the Project

- Use Microchip Studio to build the projects. The Makefiles and project files are configured for compilation.

## Flashing the Microcontroller

To flash the compiled hex file to the ATMEGA32A microcontroller using AVRDUDE via Microchip Studio's external tools:

1. In Microchip Studio, go to **Tools > External Tools**.
2. Add a new external tool with the following settings:
   - **Title**: Flash ATMEGA32A (or any descriptive name)
   - **Command**: `C:\WinAVR-20100110\bin\avrdude.exe`
   - **Arguments**: `-c usbasp -p m32 -U flash:w:"$(TargetDir)$(TargetName).hex":i`
   - **Initial Directory**: `$(TargetDir)`
   - Check **Use Output Window** if desired.
3. After building the project, select the external tool from the Tools menu to flash the microcontroller.

**Note**: Ensure your programmer (e.g., USBASP) is connected and configured correctly. Adjust paths if your WINAVR installation differs.

## Project Structure

- `ADC/`: Analog-to-Digital Converter module
- `AVR_GPIO/`: GPIO operations
- `Blinky/`: LED blinking example
- `Fast_PWM/`: Fast PWM using Timer1
- `Scheduler/`: Task scheduler implementation
- And more modules in their respective folders.

## Troubleshooting

- If AVRDUDE fails, check the COM port and programmer connections.
- Ensure the correct microcontroller model (m32 for ATMEGA32A) is specified.
- Refer to WINAVR and Microchip Studio documentation for advanced configurations.

For more details, refer to the individual project folders and their source files.