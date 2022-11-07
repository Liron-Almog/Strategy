#pragma once
#include <iostream>
class FlyBehavior
{
public:
	FlyBehavior() = default;
	virtual ~FlyBehavior() = default;
	virtual void fly() const = 0 ;
private:

};
