#ifndef HUMAN_H
#define HUMAN_H
#include <string>

class Human
{
public:
	//Constructor
	Human(std::string f_name, std::string l_name);

	//States
	std::string f_name;
	std::string l_name;
	std::string time;

	//Behaviour
	// bool see();
	void wait(int hours);
	std::string convTime(int time);

	//getters
	int getTime();
	std::string getfName();
	std::string getlName();

	//setters
	void setTime(int newtime);
	void setfName(std::string newfName);
	void setlName(std::string newlName);

	//Destructor
	~Human();
};

#endif