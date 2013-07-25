#include <iostream>

using namespace std;

int main()
{
	int numb[7];
	int i, j;

	for(i=0; i<=6; i++)
	{
		cout << "Please enter number: ";
		cin >> numb[i];
	}

		cout << "Please enter number: ";
		cin >> numb[i];
	



	for (i=0; i<=6; i++)
	{
		for(j=0; j<=6; j++)
		{

			int temp;

			if(numb[j] > numb[j+1])
			{
				temp = numb[j];
				numb[j] = numb[j+1];
				numb[j+1] = temp;
			}
		}
	}

	for (i=0; i<=6; i++)
	{
		cout << endl << numb[i] << endl;
	}

	
				
				
				system("pause");

				
return 0;

}


