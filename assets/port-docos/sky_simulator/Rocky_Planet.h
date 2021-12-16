#ifndef ROCKY_PLANET_H
#define ROCKY_PLANET_H

#include <string>
#include "Planet.h"

class Rocky_Planet : public Planet
{
public:	
	//Constructor
	Rocky_Planet(std::string planet_name, std::string rise_time, std::string fall_time, std::string colour);


	//Behaviour
	//Depending on the planet name, current time, and the planet type, certain 
	//returns may or may not be possible
	virtual void printDetails(std::string planet_name, std::string tele_type, std::string time);


	//Destructor
	~Rocky_Planet();
};

#endif