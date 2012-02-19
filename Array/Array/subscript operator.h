/*
 * file subscript operator.h
 * created by Nightmare
 * on 12 Ïêô 2008
 */


inline StoredType &operator [](unsigned int i) // operator []
{
	return this->iData[i];
} // end function operator []

inline const StoredType &operator [](unsigned int i) const // operator []
{
	return this->iData[i];
} // end function operator []
