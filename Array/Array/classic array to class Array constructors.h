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

// file classic array to class Array constructors.h
// created by Nightmare on 14 Ïêô 2008


Array(const StoredType *const classicArray , unsigned int arraySize)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = classicArray[arraySize];
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1);
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1 , const unsigned int extraSize2)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1,extraSize2);
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1 , const unsigned int extraSize2 , const unsigned int extraSize3)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1,extraSize2,extraSize3);
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1 , const unsigned int extraSize2 , const unsigned int extraSize3 , const unsigned int extraSize4)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1,extraSize2,extraSize3,extraSize4);
} // end Array constructor
