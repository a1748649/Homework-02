#include "Newtonian_Reflector.h"
#include "Galilean_Refractor.h"

#include <iostream>
using namespace std;

int main()
{
	Galilean_Refractor GR;
	Newtonian_Reflector NR;

	string planet_names[] = {
		"Mercury",
		"Venus",
		"Earth",
		"Mars",
		"Jupiter",
		"Saturn",
		"Uranus",
		"Neptune",
		"Pluto"
	};

	//Planet *Planets[9];

	for (int i = 0; i < 9; ++i)
	{
		/* making planets and adding pointers to array */
		//e.g. Planets[i] = new Planet(planet_names[i])

		//This will need to be inside an if statement hierarchy
		/*if(planet_names[i] == "Mercury" || "Venus" || "Earth" || "Mars")
		{
	
		}

		elseif(planet_names[i] == "Jupiter" || "Saturn" || "Uranus" || "Neptune")
		{
	
		}

		else
		{
		//if pluto
		}
		*/
	}

	return 0;
}