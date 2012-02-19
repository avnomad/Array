/*
 * file filter - filtered.h
 * created by Nightmare
 * on 15 Ïêô 2008
 */


template<typename ValueType>
Array<StoredType> &filter(ValueType (*const f)(StoredType)) // filter
{
	register unsigned int c = iSize;
	register unsigned int approved = 0;
	register StoredType **const refData = new StoredType *[iSize];
	StoredType *tempData;

	while(c--)	// for each element of this array,
		if(f(iData[c]))	// if it's image through f is true,
			refData[approved++] = &iData[c];	// store it's address in refData.

	tempData = iData;	// store the address of the old memory to deallocate later,
	iData = new StoredType[approved];	// and allocate new one.
	iSize = approved;	// update the size of this array.

	while(approved--)	// for each element in refData,
		iData[++c] = *refData[approved];	// copy it to the newly allocated memory.

	delete[] tempData;	// deallocate the old memory,
	delete[] refData;	// deallocate the memory used by refData.
	return *this;	// return a reference to this array.
} // end function template filter


template<typename ValueType , typename ArgType>
Array<StoredType> &filter(ValueType (*const f)(ArgType)) // filter
{
	register unsigned int c = iSize;
	register unsigned int approved = 0;
	register StoredType **const refData = new StoredType *[iSize];
	StoredType *tempData;

	while(c--)	// for each element of this array,
		if(iData[c].filter(f).size())	// if it is not empty after the filter is applied,
			refData[approved++] = &iData[c];	// store it's address in refData.

	tempData = iData;	// store the address of the old memory to deallocate later,
	iData = new StoredType[approved];	// and allocate new one.
	iSize = approved;	// update the size of this array.

	while(approved--)	// for each element in refData,
		iData[++c] = *refData[approved];	// copy it to the newly allocated memory.

	delete[] tempData;	// deallocate the old memory.
	delete[] refData;	// deallocate the memory used by refData.
	return *this;	// return a reference to this array.
} // end function template filter
