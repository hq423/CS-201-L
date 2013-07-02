#include <iostream>
#include <string>
#include <fstream>

using namespace std; 



class Animal
{
public: 
	Animal();	
	double getweight();
	double getlength();
	void setWeight(double wight);
	void setlength(double length);
	void Setup( double weight, double length);
	
private: 
		double m_weight;
		double m_length;



};