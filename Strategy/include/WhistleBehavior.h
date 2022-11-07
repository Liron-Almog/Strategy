#pragma once

class WhistleBehavior
{
public:

	WhistleBehavior() = default;
	virtual ~WhistleBehavior() = default;
	virtual void whistle() const = 0;

private:

};
