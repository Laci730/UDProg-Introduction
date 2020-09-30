#include "std_lib_facilities.h"

int main()
{
	string first_name = "";

	cout << "Írd be a címzett nevét ";
	cin >> first_name;
	cout << "Hello " << first_name << ",\n";

	string friend_name = "";

	cout << "What is your friend's name? ";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;
	cout << "What is your friend's sex? (m/f) ";
	cin >> friend_sex;

	if(friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}

	else if(friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}

	int age = 0;

	cout << "How old are you? ";
	cin >> age;
	
	if(age < 0 || age > 110) error("Annyi biztos nem.");
	
	cout << "I hear you just had a bad birthday and you are " << age << " years old.\n";
	
	
	if(age < 12)
	{
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	else if(age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	else if(age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}

	return 0; 
}