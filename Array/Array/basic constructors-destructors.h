//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
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

// file basic constructors-destructors.h
// created by Nightmare on 08 Ïêô 2008


explicit Array(const unsigned int arraySize = 0) // default constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	// empty body
} // end Array default constructor


Array(Array<StoredType> &originalArray) // copy constructor
:iData(originalArray.iData) , iSize(originalArray.iSize)
{
	originalArray.iData = 0;	// prevent the originalArray's destructor from freeing the newly
							// created object's memory and render and render the originalArray
							// inoperable at the same time.
} // end Array copy constructor


Array(const Array<StoredType> &originalArray) // copy constructor (const)
:iData(new StoredType[originalArray.iSize]) , iSize(originalArray.iSize)
{
	register unsigned int c = originalArray.iSize;
	register const StoredType *const originalData = originalArray.iData;

	while(c--)
		iData[c] = originalData[c];
} // end Array copy constructor


~Array() // destructor
{
	delete[] iData;
} // end ~Array destructor
