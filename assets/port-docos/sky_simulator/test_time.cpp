#include <string>
#include <iostream>
#include <vector>
using namespace std;


std::string timeConv(int time)
{
	const std::string test_data = "12345";
	std::vector<char> digits;
	for (unsigned int i = 0; i < test_data.length(); ++i)
	{
  		if (isdigit(test_data[i]))
  		{
    		digits.push_back(test_data[i]);
  		}
	}

	for (unsigned int i = 0; i < test_data.length(); ++i)
	{
		cout << digits[i] << " ";
	}
}