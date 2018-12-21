/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "../include/Commands/OperatorTankDrive.h"

#include "Robot.h"
#include "../include/Subsystems/DriveSubsystem.h"
#include "../include/OI.h"

OperatorTankDrive::OperatorTankDrive() {
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::Drive);
}

// Called just before this Command runs the first time
void OperatorTankDrive::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void OperatorTankDrive::Execute() {
  Robot::Drive.drive(-1*Robot::m_oi.LeftJ.GetY(), Robot::m_oi.RightJ.GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool OperatorTankDrive::IsFinished() { return false; }

// Called once after isFinished returns true
void OperatorTankDrive::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void OperatorTankDrive::Interrupted() {}
