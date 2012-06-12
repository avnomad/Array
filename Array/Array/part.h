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

// file part.h
// created by Nightmare on 14 Ïêô 2008


Array<StoredType> part(unsigned int start = 0) const	// part
{
	register unsigned int c = iSize - start;
	Array<StoredType> newArray(c);
	register const StoredType *const partData = &iData[start];

	while(c--)
		newArray.iData[c] = partData[c];

	return newArray;
} // end function part


Array<StoredType> part(unsigned int start , unsigned int length) const	// part
{
	Array<StoredType> newArray(length);
	register const StoredType *const partData = &iData[start];

	while(length--)
		newArray.iData[length] = partData[length];

	return newArray;
} // end function part
