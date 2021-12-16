#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

Human::Human(string a_f_name, string a_l_name)
{
	f_name = a_f_name;
	l_name = a_l_name;
	time = "00:00";
}

// bool Human::see()
// {
// 	int input1;
// 	cout << "which telescope do you want to look at... GR or NR? 1 or 2"<<endl;
// 	cin >> input1;

// 	if (input1 == 1)
// 	{
// 		/* GR */
// 	}
// 	else
// 	{
// 		/* NR */
// 	}
// }

std::string Human::getTime()
{
	return time;
}
std::string Human::getfName()
{
	return f_name;
}
std::string Human::getlName()
{
	return l_name;
}

	//setters
void Human::setTime(string newtime)
{
	time = newtime;
}
void Human::setfName(std::string newfName)
{
	f_name = newfName;
}
void Human::setlName(std::string newlName)
{
	l_name = newlName;
}

int Human::convTime(string time)
{
	// const int testtime = time;
	// std::vector<int> digits;
	// for (unsigned int i = 0; i < testtime.length(); ++i)
	// {
 //  		if (isdigit(testtime[i]))
 //  		{
 //    		digits.push_back(testtime[i]);
 //  		}
	// }

	// for (unsigned int i = 0; i < test_data.length(); ++i)
	// {
	// 	std::cout << digits[i] << " ";
	// }


}


void Human::wait(int hours)
{
	if (time + 100*hours > 2400)
	{
		time =(time + hours)-2400;
	}
	else
	{
		time = time + 100*hours;
		cout << "time is now" <<getTime()<<endl;
	}
}

Human::~Human()
{
	cout << "Destroying Human of name "<<f_name<<endl;
}