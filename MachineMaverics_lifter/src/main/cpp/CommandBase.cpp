#include "CommandBase.h"

#include <Commands/Scheduler.h>
#include <Commands/Command.h>
#include <SmartDashboard/SmartDashboard.h>

#include "../include/Subsystems/DriveSubsystem.h"
#include "../include/Subsystems/ElevatorSubsystem.h"


CommandBase::CommandBase(const std::string& name) :
		frc::Command(name)
{

}

void CommandBase::Prints() {
	SmartDashboard::PutData(Scheduler::GetInstance());
	Elevator().Prints();
	Drive().Prints();
}


DriveSubsystem& CommandBase::Drive() {
	static DriveSubsystem subsystem;
	return subsystem;
}

OI& CommandBase::oi() {
	static OI oi;
	return oi;
}

ElevatorSubsystem& CommandBase::Elevator() {
	static ElevatorSubsystem subsystem;
	return subsystem;
}