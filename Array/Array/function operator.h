/*
 * file function operator.h
 * created by Nightmare
 * on 14 Ïêô 2008
 */


inline StoredType &operator ()(unsigned int i) // operator ()
{
	return this->iData[i % iSize];
} // end function operator ()

inline const StoredType &operator ()(unsigned int i) const // operator ()
{
	return this->iData[i % iSize];
} // end function operator ()
