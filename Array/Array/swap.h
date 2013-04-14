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

// file swap.h
// created by Nightmare on 14 Ïêô 2008


namespace ASL
{
namespace DataStructures
{
template<typename StoredType> class Array;
} // end namespace DataStructures
} // end namespace ASL


namespace ASL
{
namespace Utility
{

template<typename StoredType>
inline void swap(ASL::DataStructures::Array<StoredType> &x , ASL::DataStructures::Array<StoredType> &y)	// swap
{
	union Temp
	{
		StoredType *tempData;
		unsigned int tempSize;
	} z;

	z.tempData = x.iData;
	x.iData = y.iData;
	y.iData = z.tempData;

	z.tempSize = x.iSize;
	x.iSize = y.iSize;
	y.iSize = z.tempSize;
} // end function template swap


} // end namespace Utility
} // end namespace ASL
