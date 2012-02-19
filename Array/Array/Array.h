/*
 * file Array.h
 * created by Nightmare
 * on 8 Ïêô 2008
 */

#ifndef ARRAY_H
#define ARRAY_H

// includes:
#include <string>
#include <iostream>

#include "../utility.h"
#include "swap.h"

namespace ASL
{

namespace DataStructures
{

// forward class declarations:
template<typename StoredType> class Array;

// global functions:
#include "stream insertion operator.h"
#include "compare.h"
#include "relational and equality operators.h"




template<typename StoredType>
class Array
{
	template<typename FriendStoredType>
	friend class Array;
	friend std::ostream &operator <<<>(std::ostream &outStream , const Array<StoredType> &arrayToOutput);
	friend int compare<>(const Array<StoredType> &x , const Array<StoredType> &y);
	friend int compare<>(const Array<StoredType> &x , const unsigned int xStartingSubscript , const unsigned int xLength , const Array<StoredType> &y);
	friend int compare<>(const Array<StoredType> &x , const Array<StoredType> &y , const unsigned int yStartingSubscript , const unsigned int yLength);
	friend int compare<>(const Array<StoredType> &x , const unsigned int xStartingSubscript , const unsigned int xLength , const Array<StoredType> &y , const unsigned int yStartingSubscript , const unsigned int yLength);
	//friend void ASL::Utility::swap<>(Array<StoredType> &x , Array<StoredType> &y);
public:
	#include "basic constructors-destructors.h"
	#include "convey constructors.h"							// scalable
	#include "map constructors.h"								// scalable			// TODO
	#include "classic array to class Array constructors.h"

	#include "assignment operator.h"
	#include "subscript operator.h"
	#include "function operator.h"

	#include "size - length - capacity - empty.h"
	#include "clone.h"
	#include "part.h"

	#include "map function/base - without index argument.h"		// scalable
	#include "map function/base - with index argument.h"		// scalable
	#include "map function/step - with 0 index arguments.h"		// scalable
	#include "map function/step - with 1 index arguments.h"		// scalable
	#include "map function/step - with 2 index arguments.h"		// scalable
	#include "map function/step - with 3 index arguments.h"		// scalable
	#include "map function/step - with 4 index arguments.h"		// scalable

	#include "mapped function/base - without index argument.h"	// scalable
	#include "mapped function/base - with index argument.h"		// scalable
	#include "mapped function/step - with 0 index arguments.h"	// scalable			// TODO
	#include "mapped function/step - with 1 index arguments.h"	// scalable			// TODO
	#include "mapped function/step - with 2 index arguments.h"	// scalable			// TODO
	#include "mapped function/step - with 3 index arguments.h"	// scalable			// TODO
	#include "mapped function/step - with 4 index arguments.h"	// scalable			// TODO

	#include "map method base.h"													// TODO
	#include "map method step.h"													// TODO

	#include "maped method.h"														// TODO

	#include "reduce function.h"													// TODO
	#include "reduce functon with base.h"											// TODO
	#include "reduced function.h"													// TODO
	#include "reduced function with base.h"											// TODO


	#include "sort.h"																// TODO
	#include "sorted.h"																// TODO

	#include "resize - resized.h"
	#include "reverse - reversed.h"
	#include "filter - filtered.h"


	// TODO: add more methods here.


public:
	static std::string delimiter;
private:
	StoredType *iData;			//  'i' for "internal".
	unsigned int iSize;
}; // end class template Array


// static member definition:
template<typename StoredType>
std::string Array<StoredType>::delimiter("\t");

} // end namespace DataStructures

} // end namespace ASL

#endif // end ARRAY_H
