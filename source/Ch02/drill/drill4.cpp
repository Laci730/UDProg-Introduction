#include "std_lib_facilities.h"

int main()
{	
	vector <double> allNumbers; 
	double smallest = 10000;
	double largest = -10000;
	double sum = 0;
	double number = 0;
	string unit = "";

	while(cin >> number >> unit)
	{
		if(unit == "m")
			number *= 100;
		else if(unit == "in")
			number *= 2.54;
		else if(unit == "ft")
			number *= 12 * 2.54;
		else if(unit == "cm")
			number *= 1;
		else
			error("Wrong unit");

		allNumbers.push_back(number);
		sum += number;

		for(double num : allNumbers)
		{
			if(num < smallest)
			{
				smallest = num;
				cout << "The smallest so far\n";
			}
			if(num > largest)
			{
				largest = num;
				cout << "The largest so far\n";
			}
		}
	}

	sort(allNumbers);
	for(double num : allNumbers)
	{
		cout << num << " cm\n";
	}
	cout << "Sum: " << sum << " cm\n";
	
	return 0;
}