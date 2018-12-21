/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <AnalogPotentiometer.h>
#include <ctre/phoenix/MotorControl/CAN/WPI_VictorSPX.h>//ctre
#include <ctre/phoenix/MotorControl/CAN/WPI_TalonSRX.h>//ctre
#include <ctre/phoenix/MotorControl/CAN/TalonSRX.h>//ctre
#include <ctre/Phoenix.h>//ctre

class ElevatorSubsystem : public frc::Subsystem {
 public:
  ElevatorSubsystem();
  void InitDefaultCommand() override;
  void Periodic(double target);
  void Prints();

 private:
  AnalogPotentiometer ElevatorPot;
  AnalogPotentiometer WristPot;

  WPI_TalonSRX WristMotor;
  WPI_TalonSRX ElevatorMotor;
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
};
