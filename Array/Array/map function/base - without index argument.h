/*
 * file map function base - without index argument.h
 * created by Nightmare
 * on 12 Ïêô 2008
 */


Array<StoredType> &map(StoredType (*const f)(StoredType))	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c]);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1) , const ArgType1 arg1)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename ArgType2>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,ArgType2) , const ArgType1 arg1 , const ArgType2 arg2)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,arg2);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename ArgType2 , typename ArgType3>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,ArgType2,ArgType3) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,arg2,arg3);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,ArgType4) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,arg2,arg3,arg4);	// set the element to it's image through f.

	return *this;
} // end function map


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename ArgType5>
Array<StoredType> &map(StoredType (*const f)(StoredType,ArgType1,ArgType2,ArgType3,ArgType4,ArgType5) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4 , const ArgType5 arg5)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c] = f(this->iData[c],arg1,arg2,arg3,arg4,arg5);	// set the element to it's image through f.

	return *this;
} // end function map
