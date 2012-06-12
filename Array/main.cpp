//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <el05208@mail.ntua.gr>
/*
 *	This file is part of Array.
 *
 *	Array is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	Array is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with Array.  If not, see <http://www.gnu.org/licenses/>.
 */

// file main.cpp
// created by Nightmare on 8 Ïêô 2008

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
