#pragma once
#include "FlyBehavior.h"
class Vertical : public FlyBehavior
{
public:

	Vertical() = default;
	virtual ~Vertical() = default;
	virtual void fly() const override;

private:

};
