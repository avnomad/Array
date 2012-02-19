/*
 * file reverse - reversed.h
 * created by Nightmare
 * on 14 Ïêô 2008
 */


Array<StoredType> &reverse()	// reverse
{
	register unsigned int c = iSize >> 1;
	register unsigned int i = c + (iSize & 01);

	while(c)
		swap(iData[--c],iData[i]) , ++i;

	return *this;	// return a reference to this array.
} // end function reverse


Array<StoredType> reversed() const	// reversed
{
	Array<StoredType> newArray(iSize);
	register const StoredType *const thisData = iData;
	register unsigned int c = iSize;
	register unsigned int i = 0;

	while(c)
		newArray.iData[--c] = thisData[i] , ++i;

	return newArray;	// return the new array.
} // end function reversed
