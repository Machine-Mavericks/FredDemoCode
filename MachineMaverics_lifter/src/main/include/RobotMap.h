/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;

//PWM
//THIS IS HOW WE MAP THE PORTS IN THE CODE. IF YOU NEED TO CHANGE ANY OF THE PORTS
//THEY ARE ALL CLEARLY DEFINED AND SEGMENTED INTO WHAT TYPE OF PORT IT IS.
//THIS MAKE THE CODE MUCH MORE READABLE. 
//I'VE COPPIED ALL NUMBERS FROM THE PREGNERATED CODE YOU INCLUDED.
//DRIVE
constexpr int DRIVE_RIGHT_FRONT = 1;//SPX
constexpr int DRIVE_RIGHT_BACK = 2;//SPX
constexpr int DRIVE_LEFT_FRONT = 3;//SPX
constexpr int DRIVE_LEFT_BACK = 4;//SPX
//MECHANISM
constexpr int WRIST_MOTOR = 6;//SPARK
constexpr int ELEVATOR_MOTOR = 5;//SPARK


//CAN

//PCM

//Digital Input

//Analog Input
constexpr int WRIST_POTENTIOMETER = 0;//FOR COMPATIBILITY CONSIDERING THIS DNE
constexpr int ELEVATOR_POTENTIOMETER = 1;
// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;
