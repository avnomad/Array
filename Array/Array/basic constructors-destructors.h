/*
 * file basic constructors-destructors.h
 * created by Nightmare
 * on 08 Ïêô 2008
 */



explicit Array(const unsigned int arraySize = 0) // default constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	// empty body
} // end Array default constructor


Array(Array<StoredType> &originalArray) // copy constructor
:iData(originalArray.iData) , iSize(originalArray.iSize)
{
	originalArray.iData = 0;	// prevent the originalArray's destructor from freeing the newly
							// created object's memory and render and render the originalArray
							// inoperable at the same time.
} // end Array copy constructor


Array(const Array<StoredType> &originalArray) // copy constructor (const)
:iData(new StoredType[originalArray.iSize]) , iSize(originalArray.iSize)
{
	register unsigned int c = originalArray.iSize;
	register const StoredType *const originalData = originalArray.iData;

	while(c--)
		iData[c] = originalData[c];
} // end Array copy constructor


~Array() // destructor
{
	delete[] iData;
} // end ~Array destructor
