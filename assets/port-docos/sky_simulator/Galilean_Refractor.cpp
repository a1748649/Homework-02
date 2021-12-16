#include "Galilean_Refractor.h"
#include "Gas_Giant.h"
#include "Rocky_Planet.h"
#include "Dwarf_Planet.h"
#include "Planet.h"
#include <iostream>
using namespace std;

//Constructor
Galilean_Refractor::Galilean_Refractor()
{
	tele_type = "Refractor Telescope";
}

//Implementation of look interface
bool Galilean_Refractor::look(std::string planet, std::string time)
{
	//Making system

	//Planet pointer array
	Planet* Planets[8];
	int number_of_planets = 8;

	//Planet details...
	string planet_names[] = {
		"Mercury",
		"Venus",
		"Mars",
		"Jupiter",
		"Saturn",
		"Uranus",
		"Neptune",
		"Pluto"
	};

	string rise_times[] = {
		"05:48",
		"08:44",
		"06:20",
		"14:14",
		"12:57",
		"20:47",
		"16:33",
		"14:11"
	};

	string fall_times[] = {
		"18:10",
		"23:26",
		"19:11",
		"03:48",
		"02:57",
		"07:24",
		"05:05",
		"23:28"
	};

	string colour[] = {
		"Dark Orange",
		"Orange/Brown",
		"Red",
		"Orange",
		"Cream",
		"Blue",
		"Blue",
		"White"
	};

	//Construction of the solar system, as a collection of different planet objects
	for (int i = 0; i < number_of_planets; ++i)
	{
		if(planet_names[i] == "Mercury" || planet_names[i] == "Venus" || planet_names[i] == "Mars")
		{
			Planets[i] = new Rocky_Planet(planet_names[i], rise_times[i], fall_times[i], colour[i]);
		}

		else if(planet_names[i] == "Jupiter" || planet_names[i] =="Saturn" || planet_names[i] =="Uranus" || planet_names[i] =="Neptune")
		{
			Planets[i] = new Gas_Giant(planet_names[i], rise_times[i], fall_times[i], colour[i]);
		}

		else
		{
			Planets[i] = new Dwarf_Planet(planet_names[i], rise_times[i], fall_times[i], colour[i]);
		}
	}

	cout << endl;
	cout << endl;
	cout << "looking for "<< planet<<"...."<<endl;

	//Looks through planets to see if the one the user is after is a valid name, if so, passes details onto planet subclass
	for (int i = 0; i < number_of_planets; ++i)
	{
		
		if (planet == planet_names[i])
		{

			Planets[i] -> printDetails(planet_names[i], tele_type, time);
			
			for (int i = 0; i < number_of_planets; ++i)
			{
				delete Planets[i];
			}
			return true;
		}
	}

	//If planet name is not found in list, planets still need to be deleted
	cout << "planet name is incorrect" <<endl;
	for (int i = 0; i < number_of_planets; ++i)
	{
		delete Planets[i];
	}
	
	return false;

	
}

//getter
std::string Galilean_Refractor::getType()
{
	return tele_type;
}

//Destuctor
Galilean_Refractor::~Galilean_Refractor()
{
	//cout << "Destroyed telecope... It was a " << tele_type << endl;
}
