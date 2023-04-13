#pragma once
#include "Ingredient.h"
#include <iostream>

class FApple : public FIngredient
{
public:
	FApple();
	~FApple();

protected:
	void NameRender() override;
};

