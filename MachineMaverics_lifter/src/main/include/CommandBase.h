#pragma once

#include <memory>
#include <string>

#include <Commands/Command.h>

#include "OI.h"

class DriveSubsystem;
class ElevatorSubsystem;


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase: public frc::Command {
public:
	explicit CommandBase(const std::string& name);
	static void Prints();

	// Create a single static instance of all of your subsystems
	static DriveSubsystem& Drive();
	static ElevatorSubsystem& Elevator();
	static OI& oi();
};
