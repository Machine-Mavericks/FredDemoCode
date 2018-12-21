/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/ElevatorSubsystem.h"
#include "RobotMap.h"

#include "RobotMap.h"

ElevatorSubsystem::ElevatorSubsystem() :
  frc::Subsystem("ElevatorSubsystem"),
  ElevatorPot(ELEVATOR_POTENTIOMETER, 1.0, 0.0),
  WristPot(WRIST_POTENTIOMETER),
  WristMotor(WRIST_MOTOR),
  ElevatorMotor(ELEVATOR_MOTOR)
 {
  ElevatorMotor.ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, 0, 10);
  ElevatorMotor.SetSensorPhase(true);//magic number. please verify.
  ElevatorMotor.SetInverted(false);//   "       "          "
  ElevatorMotor.Config_kP(0, 1, 0);
	ElevatorMotor.Config_kI(0, 0, 0);
	ElevatorMotor.Config_kD(0, 0, 0);
	ElevatorMotor.Config_kF(0, 0, 0);
 }

void ElevatorSubsystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void ElevatorSubsystem::Periodic(){


}
void ElevatorSubsystem::Prints(){
  
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
