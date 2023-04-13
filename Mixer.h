#pragma once
#include "Apple.h"
#include "Orange.h"
#include "PineApple.h"

class FMixer
{
public:
	FMixer();
	~FMixer();

	void MakeJuice();

protected:
	FApple Apple;
	FOrange Orange;
	FPineApple PineApple;

};

