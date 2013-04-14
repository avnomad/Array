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

// file resize - resized.h
// created by Nightmare on 14 Ïêô 2008


Array<StoredType> &resize(const unsigned int newSize)	// resize
{
	register StoredType *const newData = new StoredType[newSize];
	register unsigned int c = std::min(iSize,newSize);

	while(c--)	// for each element in the old block of memory that can fit in the new block of memory,
		newData[c] = iData[c];	// copy it to the new block of memory.

	delete[] iData;	// free the old block of memory.
	iData = newData;	// attach the new block of memory to this array.
	iSize = newSize;	// update the size of this array.
	return *this;	// return a reference to this array.
} // end function resize


Array<StoredType> resized(const unsigned int newSize) const	// resized
{
	Array<StoredType> newArray(newSize);
	register unsigned int c = std::min(iSize,newSize);


	while(c--)	// for each element in the old block of memory that can fit in the new block of memory,
		newArray.iData[c] = iData[c];	// copy it to the new block of memory.

	return newArray;	// return the new array.
} // end function resized
