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

// file convey constructors.h
// created by Nightmare on 08 Ïêô 2008


template<typename ArgType1>
Array(unsigned int arraySize , const ArgType1 &arg1) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1);
} // end Array constructor


template<typename ArgType1 , typename ArgType2>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2);
} // end Array constructor


template<typename ArgType1 , typename ArgType2 , typename ArgType3>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2 , const ArgType3 &arg3) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2,arg3);
} // end Array constructor


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2 , const ArgType3 &arg3 , const ArgType4 &arg4) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2,arg3,arg4);
} // end Array constructor


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename ArgType5>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2 , const ArgType3 &arg3 , const ArgType4 &arg4 , const ArgType5 &arg5) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2,arg3,arg4,arg5);
} // end Array constructor
