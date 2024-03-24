#ifndef FLASHLIGHT
#define FLASHLIGHT
#include "AbstractItem.h"
#include "Multi.h"

class Flashlight : public AbstractItem
{
public:
	Flashlight(std::string newName = "Flashlight", int newPrice = 60); //default arguments
};

#endif