#pragma once
#include "WhistleBehavior.h"
#include <iostream>

class Curled : public WhistleBehavior
{
public:

	Curled() = default;
	virtual ~Curled() = default;
	virtual void whistle() const override;
private:

};
