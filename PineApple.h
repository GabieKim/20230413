#pragma once
#include "Ingredient.h"

class FPineApple : public FIngredient
{
public:
	FPineApple();
	~FPineApple();

protected:
	void NameRender() override;
};

