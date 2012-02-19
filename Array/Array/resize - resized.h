/*
 * file resize - resized.h
 * created by Nightmare
 * on 14 Ïêô 2008
 */


Array<StoredType> &resize(const unsigned int newSize)	// resize
{
	register StoredType *const newData = new StoredType[newSize];
	register unsigned int c = ASL::Utility::min(iSize,newSize);

	while(c--)	// for each element in the old block of memory that can fit in the new block of memory,
		newData[c] = iData[c];	// copy it to the new block of memory.

	delete[] iData;	// free the old block of memory.
	iData = newData;	// attach the new block of memory to this array.
	iSize = newSize;	// update the size of this array.
	return *this;	// return a reference to this array.
} // end function resize


Array<StoredType> resized(const unsigned int newSize) const	// resized
{
	Array<StoredType> newArray(newSize);
	register unsigned int c = ASL::Utility::min(iSize,newSize);


	while(c--)	// for each element in the old block of memory that can fit in the new block of memory,
		newArray.iData[c] = iData[c];	// copy it to the new block of memory.

	return newArray;	// return the new array.
} // end function resized
