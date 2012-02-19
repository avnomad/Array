/*
 * file convey constructors.h
 * created by Nightmare
 * on 08 Ïêô 2008
 */


template<typename ArgType1>
Array(unsigned int arraySize , const ArgType1 &arg1) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1);
} // end Array constructor


template<typename ArgType1 , typename ArgType2>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2);
} // end Array constructor


template<typename ArgType1 , typename ArgType2 , typename ArgType3>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2 , const ArgType3 &arg3) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2,arg3);
} // end Array constructor


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2 , const ArgType3 &arg3 , const ArgType4 &arg4) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2,arg3,arg4);
} // end Array constructor


template<typename ArgType1 , typename ArgType2 , typename ArgType3 , typename ArgType4 , typename ArgType5>
Array(unsigned int arraySize , const ArgType1 &arg1 , const ArgType2 &arg2 , const ArgType3 &arg3 , const ArgType4 &arg4 , const ArgType5 &arg5) // constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(arg1,arg2,arg3,arg4,arg5);
} // end Array constructor
