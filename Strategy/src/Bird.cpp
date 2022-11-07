#include "Bird.h"
#include <iostream>

using namespace std;

void Bird::fly() const {

	if(m_flyBehavior != nullptr)
		m_flyBehavior->fly();

}
void Bird::whistle() const {

	if (m_whistleBehavior != nullptr)
		m_whistleBehavior->whistle();
}

Bird::Bird()
{
}
void Bird::setWhistleBehavior(WhistleBehavior* wistle)  {

	m_whistleBehavior = wistle;
}
void Bird::setFlyBehavior(FlyBehavior* fly) {

	m_flyBehavior = fly;
}

void Bird::eat() const {

	cout << "I am eating\n";
}
void Bird::sleep() const {

	cout << "I am sleeping\n";
}