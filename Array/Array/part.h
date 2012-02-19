/*
 * file part.h
 * created by Nightmare
 * on 14 Ïêô 2008
 */



Array<StoredType> part(unsigned int start = 0) const	// part
{
	register unsigned int c = iSize - start;
	Array<StoredType> newArray(c);
	register const StoredType *const partData = &iData[start];

	while(c--)
		newArray.iData[c] = partData[c];

	return newArray;
} // end function part


Array<StoredType> part(unsigned int start , unsigned int length) const	// part
{
	Array<StoredType> newArray(length);
	register const StoredType *const partData = &iData[start];

	while(length--)
		newArray.iData[length] = partData[length];

	return newArray;
} // end function part
