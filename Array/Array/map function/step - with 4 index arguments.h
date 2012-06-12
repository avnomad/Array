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

// file map function step - with 4 index arguments.h
// created by Nightmare on 12 Ïêô 2008


template<typename ArgType , typename IndexType1 , typename IndexType2 , typename IndexType3 , typename IndexType4>
Array<StoredType> &map(ArgType (*const f)(ArgType,IndexType1,IndexType2,IndexType3,IndexType4))	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->data[c].map(f,(IndexType1)c);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename IndexType1 , typename IndexType2 , typename IndexType3 , typename IndexType4>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,IndexType1,IndexType2,IndexType3,IndexType4) , const ArgType1 arg1)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,(IndexType1)c);	// invoke map for that element.

	return *this;
} // end function map
