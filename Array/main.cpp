#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Array.h"
using ASL::DataStructures::Array;
using ASL::DataStructures::operator <<;

#include "../../General Purpose/utility.h"
using ASL::Utility::identity;

class Test
{
public:
	static double f(unsigned int i)
	{
		return 1.5*i;
	}
};

double inv(unsigned int i,unsigned int j)
{
	return 1.0/(i+j+1);
}

Array<double> f(unsigned int i, unsigned int size)
{
	Array<double> v(size,inv,i);
	return v;
}

int main()
{
	//Array<Array<double>> A(10,f,5.0);
	Array<double> v(10,inv,5);

	cout<<v<<endl;
	//Array<Array<double>>::delimiter = '\n';
	//cout<<A<<endl;

	

	system("PAUSE");
	return 0;
}