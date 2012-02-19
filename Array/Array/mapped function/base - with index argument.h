/*
 * file mapped function base - with index argument.h
 * created by Nightmare
 * on 13 Ïêô 2008
 */


template<typename ValueType , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,IndexType1)) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],(IndexType1)c);	// set the corresponding element of newArray
																// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,IndexType1) , const ArgType1 arg1) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,arg3,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename IndexType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,ArgType4,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,arg3,arg4,(IndexType1)c);	// set the corresponding element of newArray
																	// to this array's element's image through f.
	return newArray;
} // end function mapped
