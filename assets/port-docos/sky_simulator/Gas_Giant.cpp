#include "Gas_Giant.h"
#include "Planet.h"
#include <iostream>
#include "Galilean_Refractor.h"
#include "Newtonian_Reflector.h"
#include <math.h>
using namespace std;

//Constructor
Gas_Giant::Gas_Giant(std::string planet_name, std::string a_rise_time, std::string a_fall_time, std::string a_colour)
{
	name = planet_name;
	type = "Gas Giant";
	colour = a_colour;
	rise_time = a_rise_time;
	fall_time = a_fall_time;

}

//Behaviour
void Gas_Giant::printDetails(std::string planet_name, string tele_type, std::string time)
{
	//Details
	string arrplanet_names[] = {
		"Mercury",
		"Venus",
		"Mars",
		"Jupiter",
		"Saturn",
		"Uranus",
		"Neptune",
		"Pluto"
	};

	string arrrise_times[] = {
		"05:48",
		"08:44",
		"06:20",
		"14:14",
		"12:57",
		"20:47",
		"16:33",
		"14:11"
	};

	string arrfall_times[] = {
		"18:10",
		"23:26",
		"19:11",
		"03:48",
		"02:57",
		"07:24",
		"05:05",
		"23:28"
	};

	string arrcolour[] = {
		"dark orange",
		"orange/brown",
		"red",
		"orange",
		"cream",
		"blue",
		"blue",
		"white"
	};

	
	int number_of_planets = 8;
	for (int i = 0; i < number_of_planets; ++i)
	{
		//If the passed in name matches a planet in the
		//solar system, enters this if statement
		if (arrplanet_names[i]==planet_name)
		{
			//Rise and fall time of particular planet 
			//selected from set.
			string Frise_time=arrrise_times[i];
			string Ffall_time=arrfall_times[i];
			string Fcurrent_time=time;

			//Integer arrays used to copy time into
			//such that they can be evaluated
			int num_array1[Frise_time.length() - 1];
			int num_array2[Ffall_time.length() - 1];
			int num_array3[Fcurrent_time.length() - 1];

			//counters for side by side simultaneous
			//manipulation
			int counter1 = 0;
			int counter2 = 0;
			int counter3 = 0;
			//int numbers = 0;
			
			//copying times into ineger array
			for (int i = 0; i < 5; ++i)
			{
				if (Frise_time.at(i) != ':') {
					num_array1[counter1] = Frise_time.at(i);
					counter1 ++;
				}
				if (Ffall_time.at(i) != ':')
				{
					num_array2[counter2] = Ffall_time.at(i);
					counter2 ++;
				}
				if (Fcurrent_time.at(i) != ':')
				{
					num_array3[counter3] = Fcurrent_time.at(i);
					counter3 ++;
				}

			}
			//integers used to progressively create time from array
			int resultrt=0;
			int resultft=0;
			int resultct=0;

			//Conversion from array of integers, to single integers that quantitatively represent the time
			for (int i = 0; i < 4 ; ++i)
			{
				resultrt = resultrt + (num_array1[i] - 48)*(1000/pow(10,(i)));
				resultft = resultft + (num_array2[i] - 48)*(1000/pow(10,(i)));
				resultct = resultct + (num_array3[i] - 48)*(1000/pow(10,(i)));
			}

			//This covers the possibility of the fall time being in the morning, e.g larger than 24:00
			if (resultft<resultrt)
			{
				resultft = resultft + 2400;
			}
			if (resultct<resultft && resultct>resultrt)
			{
				//Covers case where you can see planet colour, and if its Saturn, for reflector telescope
				if (tele_type == "Reflector Telescope")
				{
					if (arrplanet_names[i] == "Saturn")
					{
						cout << "Wow! Saturn's rings shine an amazing white arched over the planet." <<endl;
						cout << arrplanet_names[i] << " is a beautiful " << arrcolour[i] << " tonight." <<endl;
						cout << endl <<endl;
					}

					else
					{
						cout << "The Celestial object is visible!" << endl <<endl;
						cout << arrplanet_names[i] << " is a beautiful " << arrcolour[i] << " tonight." <<endl;
						cout << endl <<endl;
					}
					
				}
				//Covers case where you cant see planet colour, and if its Saturn, for refractor telescope
				else
				{
					if (arrplanet_names[i] == "Saturn")
					{
						cout << "Wow! Saturn's rings shine an amazing white arched over the planet." <<endl;
						cout << arrplanet_names[i] << "'s colour seems a bit washed out, but is still a beautiful white." <<endl;
						cout << endl <<endl;
					}

					else
					{
						cout << "The Celestial object is visible!" << endl <<endl;
						cout << arrplanet_names[i] << "'s colour seems a bit washed out, but is still a beautiful white." <<endl;
						cout << endl <<endl;
					}
				}
			}
			//Covers case where rise time and fall time dont match
			else 
			{
				cout << "Cant find planet anywhere, it must be below the horizon!" <<endl;
			}
		}
	}
	//cout << "Error, name could not be found. exiting program"<<endl;
	
}

//Destructor
Gas_Giant::~Gas_Giant()
{
	//cout << "Destroying Gas_Giant from child class"<<endl;
}