#ifndef GALILEAN_REFRACTOR_H
#define GALILEAN_REFRACTOR_H

#include <string>
#include "Look.h"

//This class encapsulates the least powerful telescope, refractor will be able
//to look at less details of a few planets 
class Galilean_Refractor : public Look
{
protected:
	//Protected type, not accessible from outside the class except thru get method
	std::string tele_type;
public:
	//Constructor
	Galilean_Refractor();

	//Behaviour
	virtual bool look(std::string planet, std::string time);

	//getters
	std::string getType();

	//Destructor
	~Galilean_Refractor();
};

#endif