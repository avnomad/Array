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

// file stream insertion operator.h
// created by Nightmare on 08 Ïêô 2008


template<typename StoredType>
std::ostream &operator <<(std::ostream &outStream , const Array<StoredType> &arrayToOutput)	// operator <<
{
	register unsigned int c;

	for(c = 0 ; c < arrayToOutput.iSize ; ++c)
		outStream<<arrayToOutput.iData[c]<<Array<StoredType>::delimiter;

	return outStream;
} // end function template operator <<


