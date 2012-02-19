/*
 * file assignment operator.h
 * created by Nightmare
 * on 08 Ïêô 2008
 */


const Array<StoredType> &operator =(Array<StoredType> &originalArray)	// operator =
{
	delete[] iData;
	iData = originalArray.iData;
	iSize = originalArray.iSize;
	originalArray.iData = 0;	// prevent the originalArray's destructor from freeing the newly
							// created object's memory and render and render the originalArray
							// inoperable at the same time.
	return *this;
} // end function operator =


const Array<StoredType> &operator =(const Array<StoredType> &originalArray)	// operator = (const)
{
	register unsigned int c = originalArray.iSize;
	register const StoredType *const originalData = originalArray.iData;

	delete[] iData;
	iData = new StoredType[c];

	iSize = c;	// change the iSize of this array to the iSize of the originalArray.
	while(c--)	// for each element of originalArray,
		iData[c] = originalData[c];	// set the corresponding element of this array to the element.

	return *this;
} // end function operator =


// base and step!
template<typename FillType>
const Array<StoredType> &operator =(const FillType &fillElement)	// operator =
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element of this array,
		iData[c] = fillElement;	// call it's operator = member function on fillElement.

	return *this;
} // end function template operator =


// base
const Array<StoredType> &operator =(StoredType (*const f)())	// operator =
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element of this array,
		iData[c] = f();	// set it to the value of f.

	return *this;
} // end function operator =


// step
template<typename ValueType>
const Array<StoredType> &operator =(ValueType (*const f)())	// operator =
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element of this array,
		iData[c] = f;	// call it's operator = member function on f.

	return *this;
} // end function template operator =


// base
template<typename ArgType>
const Array<StoredType> &operator =(StoredType (*const f)(ArgType))	// operator =
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element of this array,
		iData[c] = f(c);	// set it to the image of c through f.

	return *this;
} // end function template operator =


// step
template<typename ValueType , typename ArgType>
const Array<StoredType> &operator =(ValueType (*const f)(ArgType))	// operator =
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element of this array,
		iData[c] = f;	// call it's operator = member function on f.

	return *this;
} // end function template operator =
