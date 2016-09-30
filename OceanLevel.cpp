//loop the water rise for 25 years
#include <iostream>
using namespace std;

int main ()
{	
	int number=1;
	float waterRise =1.5;
	float num = 25;
	int year;
	
	cout<<"The water rise for every 25 years will be:\n";
//	int rise=year*waterRise
	for (year = number; year<=num; year++)
	{
		cout << "Year "<<year<<": "<<(waterRise*year)<<" milimeters"<<endl;
	}
	return 0;
}
