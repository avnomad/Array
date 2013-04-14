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

// file mapped function base - with index argument.h
// created by Nightmare on 13 ��� 2008


template<typename ValueType , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,IndexType1)) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],(IndexType1)c);	// set the corresponding element of newArray
																// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,IndexType1) , const ArgType1 arg1) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,arg3,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,ArgType4,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,arg3,arg4,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped
