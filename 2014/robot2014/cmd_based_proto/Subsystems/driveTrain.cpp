// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "driveTrain.h"
#include "../Commands/drive_command.h"
#include "../Robotmap.h"
driveTrain::driveTrain() : Subsystem("driveTrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	left_Front = RobotMap::driveTrainLeft_Front;
	left_Rear = RobotMap::driveTrainLeft_Rear;
	right_Front = RobotMap::driveTrainRight_Front;
	right_Rear = RobotMap::driveTrainRight_Rear;
	robotDrive41 = RobotMap::driveTrainRobotDrive41;
//    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void driveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new drive_command());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void driveTrain::MechDrive(float axis1, float axis2, float axis3) {
	// do stuff
	robotDrive41->MecanumDrive_Cartesian(axis1,axis2,axis3,0.0);
}
