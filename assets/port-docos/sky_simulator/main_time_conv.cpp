#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int number = 2130;
	int digits[4];


	for (int i = 0; i < 4; i++)
	{
		cout << "number is: "<<number<<endl;
		digits[3-i]=number % 10;
		number = number/10;
		cout << "Number is now: "<< number<< " digits["<<3-i<<"] is "<<digits[3-i]<<endl;
	}
	for (int i = 0; i < 4; ++i)
	{
		cout << digits[i] << " ";
	}

	string time="";
	int counter_final=0;
	cout << "Enter a time as a string"<<endl;
	cin >> time;

	cout << "time is "<<time<<endl;


	// for (int i = 0; i < 5; ++i)
	// {
	// 	if (i != 2)
	// 	{
	// 		time.at(i) += to_string(digits[counter_final]);
	// 		counter_final++;
	// 	}
	// 	else
	// 	{
	// 		time.at(i) = ':';
	// 	}
	// }

	// cout << "time is "<<time<<endl;

	

	return 0;
}