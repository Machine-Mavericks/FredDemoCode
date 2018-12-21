/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/ElevatorFudge.h"
#include "../include/OI.h"
#include "../include/Subsystems/ElevatorSubsystem.h"
#include "../include/OI.h"

#include "Robot.h"

ElevatorFudge::ElevatorFudge() {
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::Elevator);
}

// Called just before this Command runs the first time
void ElevatorFudge::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ElevatorFudge::Execute() {
  Robot::Elevator.Periodic();
}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorFudge::IsFinished() { return false; }

// Called once after isFinished returns true
void ElevatorFudge::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorFudge::Interrupted() {}
