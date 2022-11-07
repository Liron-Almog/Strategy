#pragma once
#include "WhistleBehavior.h"
#include "FlyBehavior.h"

class Bird
{
public:
	Bird();
	void fly() const;
	void whistle() const;
	virtual ~Bird() = default;
	void eat() const;
	virtual void display() const = 0;
	void sleep() const;
	void setWhistleBehavior(WhistleBehavior*);
	void setFlyBehavior(FlyBehavior*);


private:

	FlyBehavior* m_flyBehavior = nullptr;
	WhistleBehavior* m_whistleBehavior = nullptr;
	
};

