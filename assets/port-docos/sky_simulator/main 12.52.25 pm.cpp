#include "Galilean_Refractor.h"
#include "Newtonian_Reflector.h"

#include "Gas_Giant.h"
#include "Rocky_Planet.h"
#include "Dwarf_Planet.h"

//used for padding with spaces for interface
#include <iomanip>

#include <iostream>
using namespace std;

int main()

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

	
	//Interface and navigation. This section navigates through prompts based on logic.
	//First prompt asks if you want to look at the star map or go straight to looking.
	//Looking at the star map, will result in the next prompt, that would have occured
	//as the second option to your first prompt. This initialises the looking aspect.
	string input1;
	cout << "It is 9:30 pm, on October 20th, in Adelaide South Australia... Do you want to:"<<endl;
	cout << "1. Check visible planets" <<endl;
	cout << "2. Select a telescope" <<endl;
	cout << "Enter 1 or 2 to proceed" << endl;
	cin >> input1;

	cout << endl;

	if (input1 == "1")
	{
		cout << "Printing details..."<<endl<<endl;

		for (int i = 0; i < number_of_planets; ++i)
		{
			if (i == 0)
			{
				//This line ensures neat formatting of star map
				cout << std::setw(8) << " " << "  " <<std::setw(5) << "riseT" <<"  "<< std::setw(5) << "fallT" << endl;
			}

			//This line of code pads each string to be 8 chars total.
			cout << std::setw(8)<<Planets[i] -> getName() << "  " << Planets[i] -> getRT() << "  " << Planets[i] -> getFT();
			if (planet_names[i] == "Mercury")
			{
				cout << "    X not visible, wrong side of Solar system right now";
			}

			else if (planet_names[i] == "Mars")
			{
				cout << "    X not visible, wrong side of Solar system right now";
			}
			cout << endl;
		}

		cout << endl << endl;

		

		string input2;
		cout << "Do you want to use a Newtonian Reflector telescope, or a Galilean Refractor telescope. Type 1 or 2"<<endl;
		cin >> input2;

		if (input2 == "1")
		{
			string input3;
			cout << "What Planet do you want to look at in the solar system" <<endl;
			cin >> input3;
			Newtonian_Reflector NR;

		}

		else if(input2 == "2")
		{
			string input3;
			cout <<endl<< "What Planet do you want to look at in the solar system" <<endl;
			cin >> input3;
			Galilean_Refractor GR;
		}

		else
		{
			cout << "Error, invalid input. exiting program" <<endl;
		}
	}

	else if(input1 == "2")
	{
		string input2;
		cout << "Do you want to use a Newtonian Reflector telescope, or a Galilean Refractor telescope. Type 1 or 2"<<endl;
		cin >> input2;

		if (input2 == "1")
		{
			string input3;
			cout <<endl<< "What Planet do you want to look at in the solar system" <<endl;
			cin >> input3;
			Newtonian_Reflector NR;
		}

		else if(input2 == "2")
		{
			string input3;
			cout << "What Planet do you want to look at in the solar system" <<endl;
			cin >> input3;
			Galilean_Refractor GR;
		}
		else
		{
			cout << "Error, invalid input. exiting program" <<endl;
		}
	}

	else 
	{
		cout << "Error, invlaid input, exiting program" <<endl;
	}

	for (int i = 0; i < number_of_planets; ++i)
	{
		delete Planets[i];
	}


	return 0;
}