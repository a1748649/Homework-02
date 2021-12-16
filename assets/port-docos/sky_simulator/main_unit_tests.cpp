#include "Galilean_Refractor.h"
#include "Newtonian_Reflector.h"

#include "Gas_Giant.h"
#include "Rocky_Planet.h"
#include "Dwarf_Planet.h"

#include <iostream>
using namespace std;

int main()
//Abstract class, cannot unit test as of yet
// {
// 	Telescope generic_telescope;
// 	if(generic_telescope.getType()!="?")
// 	{
// 		cout << "Failed telescope unit test" <<endl;
// 	}

// }

{
	

	// Gas_Giant JPTR("Jupiter", "20:00" , "03:45" , "Orange");
	// assert(JPTR.getType() == "Gas Giant");
	// assert(JPTR.getColour() == "Orange");
	// assert(JPTR.getRT() == "20:00");
	// assert(JPTR.getFT() == "03:45");

	// Rocky_Planet MARS("Mars", "05:00", "14:00" , "Red");
	// assert(MARS.getType() == "Rocky Planet");
	// assert(MARS.getColour() == "Red");
	// assert(MARS.getRT() == "05:00");
	// assert(MARS.getFT() == "14:00");

	// Dwarf_Planet PLTO("Pluto", "15:00", "11:00" , "White");
	// assert(PLTO.getType() == "Dwarf Planet");
	// assert(PLTO.getColour() == "White");
	// assert(PLTO.getRT() == "15:00");
	// assert(PLTO.getFT() == "11:00");

	Galilean_Refractor GR;
	Newtonian_Reflector NR;
	//Telescopes unit testing
	assert(NR.getType() == "Reflector Telescope");
	assert(NR.look("Pluto", "20:45") == 1);
	assert(NR.look("Jupiter", "20:45") == 1);

	assert(GR.getType() == "Refractor Telescope");
	assert(GR.look("Jupiter", "20:45") == 1);
	assert(GR.look("Mars", "20:45") == 1);

	assert(NR.getType() == "Reflector Telescope");
	assert(NR.look("Saturn", "20:45")  == 1);
	assert(NR.look("Uranus", "20:45") == 1);

	assert(GR.getType() == "Refractor Telescope");
	assert(GR.look("Venus", "20:45") == 1);
	assert(GR.look("Neptune", "20:45") == 1);

	//Planets unit testing
	

	cout <<endl;
	cout << "ALL TESTS PASSED!"<<endl;
	cout <<endl;





}
// {
// 	Newtonian_Reflector NR;
// 	if (NR.getType() != "Reflector Telescope")
// 	{
// 		cout << "Failed Newtonian_Reflector type unit test" <<endl;
// 	}
// 	return 0;
// }

// {
// 	Newtonian_Reflector NR;
// 	if (NR.look() != 1)
// 	{
// 		cout << "Failed Newtonian_Reflector look unit test" <<endl;
// 	}
// 	return 0;

// }

// {
// 	Galilean_Refractor GR;
// 	if (GR.getType() != "Refracting Telescope")
// 	{
// 		cout << "Failed Galilean_Refractor type unit test" <<endl;
// 	}
// 	return 0;
// }

// {
// 	Galilean_Refractor GR;
// 	if (GR.look() != 1)
// 	{
// 		cout << "Failed Galilean_Refractor look unit test" <<endl;
// 	}
// 	return 0;
// }