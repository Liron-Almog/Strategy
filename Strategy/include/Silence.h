#pragma once
#include "WhistleBehavior.h"
#include <iostream>
class Silence : public WhistleBehavior
{
public:

	Silence() = default;
	virtual ~Silence() = default;
	virtual void whistle() const override;
private:

};
