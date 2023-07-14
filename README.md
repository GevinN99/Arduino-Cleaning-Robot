# Arduino Cleaning Robot

This repository contains the code for an Arduino-based cleaning robot that can vacuum floors and sanitize them autonomously. The robot utilizes three ultrasonic sensors for obstacle detection, ensuring it navigates safely while performing its cleaning tasks.

## Features

- Autonomous cleaning: The robot can vacuum floors and sanitize them without human intervention.
- Obstacle detection: Three ultrasonic sensors enable the robot to detect obstacles and navigate around them.
- Customizable cleaning behavior: The code can be modified to adapt the robot's movement and cleaning patterns.
- Expandable and hackable: The Arduino platform allows for easy integration of additional sensors and functionalities.

## Prerequisites

To run the code, you'll need the following components:

- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensors (3x)
- Motor driver module (e.g., L298N)
- Vacuum motor
- Sanitizing mechanism (e.g., UV light, disinfectant spray)
- Power supply

## Installation

1. Clone this repository to your local machine using the following command:
   git clone https://github.com/your-username/arduino-cleaning-robot.git

2. Connect the Arduino board to your computer.

3. Install the Arduino IDE or any other compatible development environment.

4. Connect the ultrasonic sensors to the appropriate pins on the Arduino board. Update the pin assignments in the code if necessary.

5. Connect the motor driver module and configure the input pins (in1, in2, in3, in4) according to your setup. Update the pin assignments in the code if necessary.

6. Connect the vacuum motor and the sanitizing mechanism to the appropriate power outputs.

7. Upload the code to the Arduino board.

8. Power on the cleaning robot and ensure all components are functioning correctly.

## Usage

The cleaning robot operates in two modes: vacuuming mode and sanitizing mode. By sending specific commands via the Serial Monitor or a Bluetooth connection, you can control the robot's behavior:

- 's': Start the cleaning process.
- 'v': Activate the vacuuming mode.
- 'o': Activate the sanitizing mode.

Adjust the delay times and control logic in the code to fine-tune the robot's movements and cleaning patterns.

## Contributing

Contributions to this project are welcome. If you have any suggestions, improvements, or bug fixes, please create a pull request with your changes.



![image](https://github.com/GevinN99/Arduino-Cleaning-Robot/assets/74089748/301d9f9e-2f2d-4c4f-b052-8a3b41f4f31b)


![image](https://github.com/GevinN99/Arduino-Cleaning-Robot/assets/74089748/26cee592-60e6-440d-93d3-3134b93feca8)


![image](https://github.com/GevinN99/Arduino-Cleaning-Robot/assets/74089748/857049e1-6af4-408c-81ac-9a199a5229ca)


