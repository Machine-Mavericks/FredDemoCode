/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once//included in the project only once
#include <VictorSP.h>//wpilib
#include <SpeedControllerGroup.h>//wpilib
#include <ctre/phoenix/MotorControl/CAN/WPI_VictorSPX.h>//ctre
#include <ctre/phoenix/MotorControl/CAN/WPI_TalonSRX.h>//ctre
#include <ctre/phoenix/MotorControl/CAN/TalonSRX.h>//ctre
#include <ctre/Phoenix.h>//ctre


#include <Commands/Subsystem.h>//wpilib
//class-> user defined   namespace or commandgroup-> predefined eg. commandbase, subsystem, commandgroup
class DriveSubsystem : public frc::Subsystem {
 public://accessible by calling the name of the class
  DriveSubsystem();//constructor
  void InitDefaultCommand() override; //special names inside of classes in a namespace or command group do special things
  void drive(float left, float right);
  void Prints();
 private://only accessible from inside the class(aka drivesubsystem.h/cpp)	
 	//for PWM
	//class   name    -------class is predefined, name is not.
 	// VictorSP LeftFront;
	// VictorSP LeftBack;
	// VictorSP RightFront;
	// VictorSP RightBack;
	//for can
	WPI_VictorSPX LeftFront;
	WPI_VictorSPX LeftBack;
	WPI_VictorSPX RightFront;
	WPI_VictorSPX RightBack;
  
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
};
