#pragma once
#include <ICommand.h>
#include <Novice.h>

class InputHandler
{
public:
	ICommand* HandleInput();

	void AssignMoveLeft2PressKeyA();
	void AssignMoveRight2PressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
};

