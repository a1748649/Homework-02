#ifndef PLANET_H
#define PLANET_H

//#include "Galilean_Refractor.h"
//#include "Newtonian_Reflector.h"

#include <string>


//Below is an abstract class for our planet objects. Virtual behaviours will
//be defined here including getters that are type dependent, and a 
//printDetails function that prints different information based on the subclass
//that is calling that behaviour. This behaviour is activated through object 
//communication between the telescopes and the planet.
class Planet
{
protected:
	//All states are protected, so access is only possible thru well-defined getters
	std::string name;
	std::string type;
	std::string colour;
	std::string rise_time;
	std::string fall_time;

	


public:
	//Constructor	
	Planet();

	
	//Behaviours

	//getters
	std::string getName();
	std::string getType();
	std::string getColour();
	std::string getRT();
	std::string getFT();


	
	//Depending on the planet name, current time, and the planet type, certain 
	//returns may or may not be possible
	virtual void printDetails(std::string planet_name, std::string tele_type, std::string time)=0;

	//Destructor
	virtual ~Planet();


};
#endif