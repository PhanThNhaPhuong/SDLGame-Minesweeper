#pragma once
#include "Var.h"

class Clock
{
private:
	Texture gTime;
	int timer;
	Uint32 start, current_time;

public:
	Clock();
	~Clock();
	void showTime ();
};
