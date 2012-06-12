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

// file map function step - with 0 index arguments.h
// created by Nightmare on 12 Ïêô 2008


template<typename ArgType>
Array<StoredType> &map(ArgType (*const f)(ArgType))	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1) , const ArgType1 arg1)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2) , const ArgType1 arg1 , const ArgType2 arg2)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2 , typename ArgType3>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2,ArgType3) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2,arg3);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2,ArgType3,ArgType4) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2,arg3,arg4);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename ArgType5>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2,ArgType3,ArgType4,ArgType5) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4 , const ArgType5 arg5)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2,arg3,arg4,arg5);	// invoke map for that element.

	return *this;
} // end function map
