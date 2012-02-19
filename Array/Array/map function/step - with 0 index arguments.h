/*
 * file map function step - with 0 index arguments.h
 * created by Nightmare
 * on 12 Ïêô 2008
 */


template<typename ArgType>
Array<StoredType> &map(ArgType (*const f)(ArgType))	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1) , const ArgType1 arg1)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2) , const ArgType1 arg1 , const ArgType2 arg2)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2 , typename ArgType3>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2,ArgType3) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2,arg3);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2,ArgType3,ArgType4) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2,arg3,arg4);	// invoke map for that element.

	return *this;
} // end function map


template<typename ArgType , typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename ArgType5>
Array<StoredType> &map(ArgType (*const f)(ArgType,ArgType1,ArgType2,ArgType3,ArgType4,ArgType5) , const ArgType1 arg1 , const ArgType2 arg2 , const ArgType3 arg3 , const ArgType4 arg4 , const ArgType5 arg5)	// map
{
	register unsigned int c = this->iSize;

	while(c--)	// for each element in this Array.
		this->iData[c].map(f,arg1,arg2,arg3,arg4,arg5);	// invoke map for that element.

	return *this;
} // end function map
