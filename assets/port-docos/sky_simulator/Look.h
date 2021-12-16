#ifndef LOOK_H
#define LOOK_H


class Look
{
public:
	
	//Interface look, used by both telescopes. Through using this interface, telescopes pass details
	//Onto planet classes
	virtual bool look(std::string key, std::string time) = 0;
};

#endif