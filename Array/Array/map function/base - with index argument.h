/*
 * file map function base - with index argument.h
 * created by Nightmare
 * on 11 Ïêô 2008
 */


template<typename IndexType1>
Array<StoredType> &map(StoredType (*const f)(StoredType,IndexType1))	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],(IndexType1)c);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename IndexType1>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,IndexType1) , const ArgType1 arg1)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,(IndexType1)c);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename ArgType2 , typename IndexType1>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,ArgType2,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,arg2,(IndexType1)c);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename IndexType1>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,arg2,arg3,(IndexType1)c);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename IndexType1>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,ArgType4,IndexType1) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,arg2,arg3,arg4,(IndexType1)c);	// set the element to it's image through f.

	return *this;
} // end function map
