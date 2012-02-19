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

#include "Array/Array.h"
using namespace ASL::DataStructures;


int main()
{
	int a[6] = {1,2,3,4,5,6};
	int b[6] = {1,2,3,4,5,6};

	Array<int> A(a,6);
	Array<int> B(b,6);

	cout<<compare(A,B)<<endl;	// compare whole arrays
	cout<<compare(A,B,0,6)<<endl;	// compare A with the subarray of B containing the whole B
	cout<<compare(A,B,0,5)<<endl;	// compare A with the subarray of B containing the first 5 elements of B
	cout<<compare(A,B,1,5)<<endl;	// compare A with the subarray of B containing 5 elements starting at index 1

	system("PAUSE");
	return 0;
} // end function main
