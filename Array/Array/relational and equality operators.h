/*
 * file relational and equality operators.h
 * created by Nightmare
 * on 21 Ïêô 2008
 */


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
