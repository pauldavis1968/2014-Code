// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef _ROBOT_H
#define _ROBOT_H
#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/AutonomousCommand.h"
#include "Commands/IdleCatapultGroup.h"
#include "Commands/ALauncher_Command.h"
#include "Commands/Compressor_Command.h"
#include "Commands/DriveForwardcommand.h"
#include "Commands/Close_Latch_Command.h"
#include "Commands/Open_Latch_Command.h"
//#include "Commands/AutonomousCommandN.h"
#include "Subsystems/driveTrain.h"
#include "Subsystems/Pneumatics.h"
#include "Subsystems/FeederArm.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"
class Robot : public IterativeRobot {
public:
	Command *autonomousCommand;
	Command *compressor_Command;
	CommandGroup *fireCatapultGroup;
	
	Timer *rTimer;
	static OI *oi;
	LiveWindow *lw;
	static NetworkTable *nTable;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static driveTrain* driveTrain1;
	static Pneumatics* pneumatics;
	static FeederArm* feederArm;
	static Relay* LightRingRelay;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	virtual void RobotInit();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();

};
#endif
