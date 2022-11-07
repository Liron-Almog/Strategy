#pragma once
#pragma once
#include "Bird.h"

class Penguin : public Bird
{
public:

	Penguin() = default;
	virtual ~Penguin() = default;
	virtual void display() const override;

private:

};
