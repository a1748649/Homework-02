#include "Galilean_Refractor.h"
#include "Newtonian_Reflector.h"
#include "Look.h"

#include "Gas_Giant.h"
#include "Rocky_Planet.h"
#include "Dwarf_Planet.h"

//used for padding with spaces for interface
#include <iomanip>

#include <iostream>
using namespace std;
//using namespace std::chrono;

int main()

{
	//flag if next day starts
	int flag = 0;

	//Timing feature
	//auto start = high_resolution_clock::now();

	//Current time as integer initialised
	int resultct=0;

	int number_of_planets=8;

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

	cout << endl;
	cout << endl;

	
	//Interface and navigation. This section navigates through prompts based on logic.
	//First prompt asks if you want to look at the star map or go straight to looking.
	//Looking at the star map, will result in the next prompt, that would have occured
	//as the second option to your first prompt. This initialises the looking aspect.
	string input1;
	
	cout << endl;

	//This is used to stay within the while loop. At the end, a query is put up whether or not the
	//user wants to exit the program. This will be turned to 0, if they want to exit, which will break
	//the while loop
	int exit_input = 1;

	//Default time
	string time = "21:30";


	while (exit_input == 1)
	{
		//Initial interface
		cout << "It is "<<time<<", on October 20th, in Adelaide South Australia... Do you want to:"<<endl;
		cout << "1. Check visible planets" <<endl;
		cout << "2. Select a telescope" <<endl;
		cout << "Enter 1 or 2 to proceed" << endl;
		cin >> input1;


		//If 1 is entered into interface
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
				cout << std::setw(8)<<planet_names[i] << "  " << rise_times[i] << "  " << fall_times[i];
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
			//If 1 is entered into second loop of interface, regarding telescope
			if (input2 == "1")
			{
				string input3;
				cout << "What Planet do you want to look at in the solar system" <<endl;
				cin >> input3;
				Newtonian_Reflector NR;
				for (int i = 0; i < number_of_planets; ++i)
				{
					if (planet_names[i] == input3)
					{
						NR.look(input3, time);
					}
				}	

			}

			//If 2 is entered into second loop of interface, regarding telescope
			else if(input2 == "2")
			{
				string input3;
				cout <<endl<< "What Planet do you want to look at in the solar system" <<endl;
				cin >> input3;
				Galilean_Refractor GR;
				for (int i = 0; i < number_of_planets; ++i)
				{
					if (planet_names[i] == input3)
					{
						GR.look(input3, time);
					}
				}
			}

			else
			{
				cout << "Error, invalid input." <<endl;
			}
		}



		//If 2 is entered into interface
		else if(input1 == "2")
		{
			string input2;
			cout << "Do you want to use a Newtonian Reflector telescope, or a Galilean Refractor telescope. Type 1 or 2"<<endl;
			cin >> input2;
			//If 1 is entered into second loop of interface, regarding telescope
			if (input2 == "1")
			{
				string input3;
				cout <<endl<< "What Planet do you want to look at in the solar system" <<endl;
				cin >> input3;
				Newtonian_Reflector NR;
				for (int i = 0; i < number_of_planets; ++i)
				{
					if (planet_names[i] == input3)
					{
						NR.look(input3, time);
					}
				}
			}

			//If 2 is entered into second loop of interface, regarding telescope
			else if(input2 == "2")
			{
				string input3;
				cout << "What Planet do you want to look at in the solar system" <<endl;
				cin >> input3;
				Galilean_Refractor GR;
				for (int i = 0; i < number_of_planets; ++i)
				{
					if (planet_names[i] == input3)
					{
						GR.look(input3, time);
					}
				}
			}
			else
			{
				cout << "Error, invalid input" <<endl;
			}
		}

		else 
		{
			cout << "Error, invlaid input" <<endl;
		}

		
		//Timing
		// auto stop = high_resolution_clock::now();
		// auto duration = duration_cast<microseconds>(stop - start);
		// cout << "Program took "<<duration.count() <<" microseconds to run"<< endl;

	

		cout << "Do you want to look at another object? Press 1 for yes, 0 for no" <<endl;
		cin >> exit_input;

		if (exit_input == 1)
		{
			int time_input = 0;
			cout << "Do you want to change the time? Press 1 for yes and 0 for no" <<endl;
			cin >> time_input;

			if (time_input==1)
			{
				//Reads in time as a string, passed to planet subclasses for handling
				string new_time;
				cout << "Enter a new time to observe from, if a morning time, enter as 24 hour time e.g. 01:30" << endl;
				cin >> new_time;

				time = new_time;
			}
		}
		else if (exit_input == 0)
		{
			cout << "exiting program..." <<endl;
		}
		else if (exit_input != 0)
		{
			cout << "Error invalid entry, exiting program" <<endl;
		}
		else
		{
			cout << "Error invalid entry, exiting program" <<endl;
		}
	}
	return 0;
}