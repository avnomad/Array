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

// file relational and equality operators.h
// created by Nightmare on 21 Ïêô 2008


template<typename StoredType>
inline bool operator ==(const Array<StoredType> &x , const Array<StoredType> &y) // operator ==
{
	return compare(x,y) == 0;
} // end function template operator ==


template<typename StoredType>
inline bool operator !=(const Array<StoredType> &x , const Array<StoredType> &y) // operator !=
{
	return compare(x,y) != 0;
} // end function template operator !=


template<typename StoredType>
inline bool operator >=(const Array<StoredType> &x , const Array<StoredType> &y) // operator >=
{
	return compare(x,y) >= 0;
} // end function template operator >=


template<typename StoredType>
inline bool operator <=(const Array<StoredType> &x , const Array<StoredType> &y) // operator <=
{
	return compare(x,y) <= 0;
} // end function template operator <=


template<typename StoredType>
inline bool operator >(const Array<StoredType> &x , const Array<StoredType> &y) // operator >
{
	return compare(x,y) > 0;
} // end function template operator >


template<typename StoredType>
inline bool operator <(const Array<StoredType> &x , const Array<StoredType> &y) // operator <
{
	return compare(x,y) < 0;
} // end function template operator <
