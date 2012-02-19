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

#include "Array/Array.h"
using namespace ASL::DataStructures;


double dv(double x)
{
	return 2*x;
}


int main()
{
	ofstream outFile("print.txt");

	Array<double> v_5(5,0.1);
	Array<Array<double> > A_3x2(3,2,0.2);
	Array<Array<Array<double> > > B_4x3x2(4,3,2,0.3);
	Array<Array<Array<double> > > C_4x3x2(4,A_3x2);
	Array<Array<Array<double> > > C_4x4x5(4,4,v_5);



	// format output
	Array<Array<double> >::delimiter = "\n";
	Array<Array<Array<double> > >::delimiter = "\n\n";
	
	// print arrays.
	outFile<<"v_5\n\n"<<v_5<<"\n\n>dv\n\n";
	v_5.map(dv);
	outFile<<v_5<<"\n\nA_3x2.\n\n";

	outFile<<A_3x2<<"\n\n>dv\n\n";
	A_3x2.map(dv);
	outFile<<A_3x2<<"\n\nB_4x3x2.\n\n";

	outFile<<B_4x3x2<<"\n\n>dv\n\n";
	B_4x3x2.map(dv);
	outFile<<B_4x3x2<<"\n\n>C_4x3x2.\n\n";

	outFile<<C_4x3x2<<"\n\n>dv\n\n";
	C_4x3x2.map(dv);
	outFile<<C_4x3x2<<"\n\nC_4x4x5.\n\n";

	outFile<<C_4x4x5<<"\n\n>dv\n\n";
	C_4x4x5.map(dv);
	outFile<<C_4x4x5<<"\n\n";
	

	system("PAUSE");
	return 0;
} // end function main


