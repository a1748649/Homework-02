#ifndef GAS_GIANT_H
#define GAS_GIANT_H

#include <string>
#include "Planet.h"

class Gas_Giant : public Planet
{
public:
	//Constructor
	Gas_Giant(std::string planet_name, std::string rise_time, std::string fall_time, std::string colour);

	//Behaviour
	
	//Depending on the planet name, current time, telescope type, and the planet type, certain 
	//returns may or may not be possible
	virtual void printDetails(std::string planet_name, std::string tele_type, std::string time);

	//Destructor
	~Gas_Giant();
};

#endif