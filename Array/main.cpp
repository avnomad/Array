/*
 * file main.cpp
 * created by Nightmare
 * on 8 Ïêô 2008
 */

#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#include <fstream>
using std::ofstream;

#include <cstdlib>
#include <math.h>
#include <time.h>

#include <vector>
using std::vector;

#include "Array/Array.h"
using namespace ASL::DataStructures;
#include "utility.h"
using namespace ASL::Utility;




int main()
{
	int a[6] = {1,2,3,4,5,6};
	int b[6] = {1,2,3,4,5,6};

	Array<int> A(a,6);
	Array<int> B(b,6);

	cout<<compare(A,B,0,5)<<endl;




	//system("PAUSE");
	return 0;
} // end function main


