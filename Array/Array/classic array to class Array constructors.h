/*
 * file classic array to class Array constructors.h
 * created by Nightmare
 * on 14 Ïêô 2008
 */


Array(const StoredType *const classicArray , unsigned int arraySize)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = classicArray[arraySize];
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1);
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1 , const unsigned int extraSize2)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1,extraSize2);
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1 , const unsigned int extraSize2 , const unsigned int extraSize3)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1,extraSize2,extraSize3);
} // end Array constructor


template<typename ClassicType>
Array(const ClassicType *const classicArray , unsigned int arraySize , const unsigned int extraSize1 , const unsigned int extraSize2 , const unsigned int extraSize3 , const unsigned int extraSize4)	// constructor
:iData(new StoredType[arraySize]) , iSize(arraySize)
{
	while(arraySize--)
		iData[arraySize] = StoredType(classicArray[arraySize],extraSize1,extraSize2,extraSize3,extraSize4);
} // end Array constructor
