#pragma once
#include "Ingredient.h"

class FOrange : public FIngredient
{
public:
	FOrange();
	~FOrange();

protected:
	void NameRender() override;
};

