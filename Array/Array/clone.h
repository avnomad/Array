/*
 * file clone.h
 * created by Nightmare
 * on 08 Οκτ 2008
 */


Array<StoredType> clone() const	// clone
{
	Array<StoredType> newArray(this->iSize);
	register unsigned int c = this->iSize;
	register const StoredType *const thisData = this->iData;

	while(c--)	// copy all the elements of the original array into the newArray.
		newArray.iData[c] = thisData[c];

	return newArray;
} // end function clone

