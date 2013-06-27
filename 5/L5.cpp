#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>


using namespace std;

int sum(int *number1, int *number2);

int main()
{
	int *number1, *number2;
	
	number1 = new int;
	number2 = new int;



	cout << "Please enter a number: " << endl;
	cin >> *number1;
	
	
	
	cout << "Please enter another number: " << endl;
	cin >> *number2;
	


	sum(number1, number2);

	

	



}

	

int sum(int *number1, int *number2) {

	cout << "The sum of the two numbers you entered is:"  << *number1 + *number2 << endl;

	system("pause");
	return *number1 + *number2;

}