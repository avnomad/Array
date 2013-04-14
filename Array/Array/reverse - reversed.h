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

// file reverse - reversed.h
// created by Nightmare on 14 Ïêô 2008


Array<StoredType> &reverse()	// reverse
{
	register unsigned int c = iSize >> 1;
	register unsigned int i = c + (iSize & 01);

	while(c)
		swap(iData[--c],iData[i]) , ++i;

	return *this;	// return a reference to this array.
} // end function reverse


Array<StoredType> reversed() const	// reversed
{
	Array<StoredType> newArray(iSize);
	register const StoredType *const thisData = iData;
	register unsigned int c = iSize;
	register unsigned int i = 0;

	while(c)
		newArray.iData[--c] = thisData[i] , ++i;

	return newArray;	// return the new array.
} // end function reversed
