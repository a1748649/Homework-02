#ifndef NEWTONIAN_REFLECTOR_H
#define NEWTONIAN_REFLECTOR_H

#include <string>
#include "Look.h"

//This class encapsulates the most powerful telescope, reflector will be able
//to look at more details of more planets 
class Newtonian_Reflector : public Look
{
protected:
	//Protected type, not accessible from outside the class except thru get method
	std::string tele_type;
public:
	//Constructor
	Newtonian_Reflector();

	//Behaviour
	virtual bool look(std::string planet, std::string time);

	//getters
	std::string getType();

	//Destructor
	~Newtonian_Reflector();

};

#endif