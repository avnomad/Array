/*
 * file mapped function step - with 0 index arguments.h
 * created by Nightmare
 * on 13 Ïêô 2008
 */


template<typename ValueType , typename ArgType>
Array<Array<ValueType> > mapped(ValueType (*const f)(ArgType)) const	// mapped
{
	Array<Array<ValueType> > newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = this->iData[c].mapped(f);	// set the corresponding element of newArray
														// to this array's element's image through f.
	return newArray;
} // end function mapped
