/*
 * file mapped function base - without index argument.h
 * created by Nightmare
 * on 13 Ïêô 2008
 */


template<typename ValueType>
Array<ValueType> mapped(ValueType (*const f)(StoredType)) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c]);	// set the corresponding element of newArray
												// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1) , const ArgType1 arg1) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1);	// set the corresponding element of newArray
												// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2) , const ArgType1 arg1 , const ArgType2 arg2) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2);	// set the corresponding element of newArray
												// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename ArgType3>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,ArgType3) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,arg3);	// set the corresponding element of newArray
												// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,ArgType4) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,arg3,arg4);	// set the corresponding element of newArray
												// to this array's element's image through f.
	return newArray;
} // end function mapped


template<typename ValueType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename ArgType5>
Array<ValueType> mapped(ValueType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,ArgType4,ArgType5) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4 , const ArgType5 arg5) const	// mapped
{
	Array<ValueType> newArray(this->iSize);
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		newArray.iData[c] = f(this->iData[c],arg1,arg2,arg3,arg4,arg5);	// set the corresponding element of newArray
												// to this array's element's image through f.
	return newArray;
} // end function mapped

