#include <iostream>
#include "Bird.h"
#include "Dror.h"
#include "Penguin.h"
#include "Silence.h"
#include "Slant.h"
#include "Curled.h"
#include "Vertical.h"

using namespace std;

int main()
{
	Bird* drorBird,
		*penguinBird;

	auto tempDror = Dror();
	auto tempPenguin = Penguin();
	auto attributeFly = Slant();
	auto attributeWhistle = Silence();

	drorBird = &tempDror;
	penguinBird = &tempPenguin;

	drorBird->setFlyBehavior(&attributeFly);
	drorBird->setWhistleBehavior(&attributeWhistle);

	auto attributeFly2 = Vertical();
	auto attributeWhistle2 = Curled();

	penguinBird->setFlyBehavior(&attributeFly2);
	penguinBird->setWhistleBehavior(&attributeWhistle2);

	drorBird->fly(); 
	drorBird->whistle();
	penguinBird->fly();
	penguinBird->whistle();




}
