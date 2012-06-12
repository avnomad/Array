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

// file filter - filtered.h
// created by Nightmare on 15 Ïêô 2008


template<typename ValueType>
Array<StoredType> &filter(ValueType (*const f)(StoredType)) // filter
{
	register unsigned int c = iSize;
	register unsigned int approved = 0;
	register StoredType **const refData = new StoredType *[iSize];
	StoredType *tempData;

	while(c--)	// for each element of this array,
		if(f(iData[c]))	// if it's image through f is true,
			refData[approved++] = &iData[c];	// store it's address in refData.

	tempData = iData;	// store the address of the old memory to deallocate later,
	iData = new StoredType[approved];	// and allocate new one.
	iSize = approved;	// update the size of this array.

	while(approved--)	// for each element in refData,
		iData[++c] = *refData[approved];	// copy it to the newly allocated memory.

	delete[] tempData;	// deallocate the old memory,
	delete[] refData;	// deallocate the memory used by refData.
	return *this;	// return a reference to this array.
} // end function template filter


template<typename ValueType , typename ArgType>
Array<StoredType> &filter(ValueType (*const f)(ArgType)) // filter
{
	register unsigned int c = iSize;
	register unsigned int approved = 0;
	register StoredType **const refData = new StoredType *[iSize];
	StoredType *tempData;

	while(c--)	// for each element of this array,
		if(iData[c].filter(f).size())	// if it is not empty after the filter is applied,
			refData[approved++] = &iData[c];	// store it's address in refData.

	tempData = iData;	// store the address of the old memory to deallocate later,
	iData = new StoredType[approved];	// and allocate new one.
	iSize = approved;	// update the size of this array.

	while(approved--)	// for each element in refData,
		iData[++c] = *refData[approved];	// copy it to the newly allocated memory.

	delete[] tempData;	// deallocate the old memory.
	delete[] refData;	// deallocate the memory used by refData.
	return *this;	// return a reference to this array.
} // end function template filter
