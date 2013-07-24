#include <iostream>
#include <cmath>


using namespace std;

double n(int x)
{
	int i;
	if (x ==1)
	{
		cout <<x;
		return x;
	}
	else
	{
		i = x * n(x-1);
		cout << " * " << x;
		return (i);
	}

}

int main()
{
	int t, factorial;

	cout << "Enter a number:" ;
	cin >> t;
	cout << " * " << n(t) << endl;

	system("pause");
}

