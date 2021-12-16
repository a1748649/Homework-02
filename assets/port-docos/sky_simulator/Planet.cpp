#include "Planet.h"
#include <iostream>
using namespace std;

//Constructor
Planet::Planet()
{
	name = "?";
	type = "?";
	colour = "?";
	rise_time = "??:??";
	fall_time = "??:??";
}

//getters
string Planet::getName()
{
	return name;
}

string Planet::getType()
{
	return type;
}


string Planet::getColour()
{
	return colour;
}

string Planet::getRT()
{
	return rise_time;
}

string Planet::getFT()
{
	return fall_time;
}

//Destructor
Planet::~Planet()
{
	//cout << "Destroying planet of type: " << type << " from planet destructor" <<endl;
}