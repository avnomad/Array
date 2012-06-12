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

// file mapped function step - with 0 index arguments.h
// created by Nightmare on 13 Ïêô 2008


template<typename ValueType , typename ArgType>
Array<Array<ValueType> > mapped(ValueType (*const f)(ArgType)) const	// mapped
{
	Array<Array<ValueType> > newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = this->iData[c].mapped(f);	// set the corresponding element of newArray
														// to this array's element's image through f.
	return newArray;
} // end function mapped
