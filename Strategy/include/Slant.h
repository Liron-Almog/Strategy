#pragma once
#include "FlyBehavior.h"

class Slant :public FlyBehavior
{
public:

	Slant() = default;
	virtual ~Slant() = default;
    void fly() const override;

private:

};

