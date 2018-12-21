/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/DriveSubsystem.h"
//used for outputting data
#include <SmartDashboard/SmartDashboard.h>
//holds all variables
#include "RobotMap.h"
#include "../include/Commands/OperatorTankDrive.h"

DriveSubsystem::DriveSubsystem() ://constructor
  frc::Subsystem("ExampleSubsystem"),
  //these act as a predeclaration of the objects that are the motors. they assign the ports.
  LeftFront(DRIVE_LEFT_FRONT),
  LeftBack(DRIVE_LEFT_BACK),
  RightFront(DRIVE_RIGHT_FRONT),
  RightBack(DRIVE_RIGHT_BACK)
{
  LeftFront.ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, 0, 10);
	RightFront.ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, 0, 10);

	LeftBack.Follow(LeftFront);
	RightBack.Follow(RightFront);
 }
//predefined and user created functions
void DriveSubsystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  SetDefaultCommand(new OperatorTankDrive());
}

void DriveSubsystem::drive(float left, float right){
  LeftFront.Set(ControlMode::PercentOutput, left);
  RightFront.Set(ControlMode::PercentOutput, right);
}

void DriveSubsystem::Prints(){
  SmartDashboard::PutNumber("drive/drive encoder", 0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.<<<<<<<<<<<<<<<<<<<<this
