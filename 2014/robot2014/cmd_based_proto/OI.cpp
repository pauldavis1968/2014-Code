// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
//#include "Commands/AutonomousCommand.h"
//#include "Commands/FireCommand.h"
#include "Commands/drive_command.h"
#include "Commands/MoveFeeder.h"
#include "Commands/FeederMotorCommand.h"
//#include "Commands/FireCatapultGroup.h"
#include "Commands/ArmCatapultGroup.h"
#include "Commands/PassCommand.h"
#include "Commands/LightOnOffCommands.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	joystick1 = new Joystick(1);
	joystick2 = new Joystick(2);
	
	for(int i = 0;i<14;i++)
	{
		Buttons1[i+1] = new JoystickButton(joystick1,i+1);
		Buttons2[i+1] = new JoystickButton(joystick2,i+1);	
	}
    //Associating commands to buttons
	//Joystick 1 controls \/ \/ \/ \/
	//Lower Feeder when Button 1 is pressed(A on 360 controler)
	Buttons1[1]->WhenPressed(new MoveFeeder(3));
	Buttons1[1]->WhenReleased(new MoveFeeder(4));
	//Raise Feeder when Button 3 is pressed(Y on 360 controler)
	Buttons1[3]->WhenPressed(new MoveFeeder(2));
	Buttons1[3]->WhenReleased(new MoveFeeder(4));
	Buttons1[4]->WhenPressed(new PassCommand(1.0));
	Buttons1[5]->WhenPressed(new PassCommand(55.0));
	Buttons1[6]->WhenPressed(new LightOnOffCommands());
	Buttons1[7]->WhenPressed(new FeederMotorCommand(-1));
	Buttons1[7]->WhenReleased(new FeederMotorCommand(0));
	Buttons1[8]->WhenPressed(new FeederMotorCommand(1));
	Buttons1[8]->WhenReleased(new FeederMotorCommand(0));
	//Joystick 2 controls \/ \/ \/ \/
	Buttons2[1]->WhenPressed(new MoveFeeder(3));
	Buttons2[1]->WhenReleased(new MoveFeeder(4));
	//Raise Feeder when Button 3 is pressed(Y on 360 controler)
	Buttons2[3]->WhenPressed(new MoveFeeder(2));
	Buttons2[3]->WhenReleased(new MoveFeeder(4));
	Buttons2[4]->WhenPressed(new PassCommand(1.0));
	Buttons2[5]->WhenPressed(new PassCommand(55.0));
	Buttons2[6]->WhenPressed(new LightOnOffCommands());
	Buttons2[7]->WhenPressed(new FeederMotorCommand(-1));
	Buttons2[7]->WhenReleased(new FeederMotorCommand(0));
	Buttons2[8]->WhenPressed(new FeederMotorCommand(1));
	Buttons2[8]->WhenReleased(new FeederMotorCommand(0));

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	SmartDashboard::PutData("Fire!",new Close_Latch_Command());
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getJoystick1() {
	return joystick1;
}
Joystick* OI::getJoystick2() {
	return joystick2;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
