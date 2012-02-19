#ifndef ARRAY_H
#define	ARRAY_H

#include <iostream>

namespace ASL
{
namespace DataStructures
{




template<typename StoredType>
class Array
{
	//friend std::ostream &operator << (std::ostream &,);		// operator <<
	//friend std::istream &operator >> (std::istream &inStream , Array<StoredType> &arrayToRead);		// operator >>		// to do
public:
	explicit Array(unsigned int size = 0)								// default constractor
	{
		this->size = size;
		this->data = new StoredType[size];
	} // end Array default constractor

	Array(Array<StoredType> &originalArray)								// copy constractor
		:data(originalArray.data) , size(originalArray.size)
	{
		originalArray.data = 0;	// make the originalArray viable for a destractor call and only for a destractor call.
	}

	template<typename ValueType,typename ArgType>
	Array(unsigned int size , ValueType (*const f)(ArgType))			// constractor
	{
		this->size = size;
		this->data = new StoredType[size];

		while(size--)
			*(this->data + size) = f(size);
	} // end Array constractor

	template<typename ValueType,typename ArgType1,typename ArgType2>
	Array(unsigned int size , ValueType (*const f)(ArgType1,ArgType2) , const ArgType2 additionalArgument)	// constractor
	{
		this->size = size;
		this->data = new StoredType[size];

		while(size--)
			*(this->data + size) = f(size,additionalArgument);
	} // end Array constractor

	template<typename ArgType>
	Array(unsigned int size , ArgType fillElement)						//		>>
	{
		this->size = size;
		this->data = new StoredType[size];

		while(size--)
			*(this->data + size) = fillElement;
	} // end Array constractor

	~Array()															// destractor
	{
		delete[] data;
	} // end Array destractor

	Array<StoredType> &operator = (Array<StoredType> &originalArray)	// operator =
	{
		this->data = originalArray.data;
		this->size = originalArray.size;
		originalArray.data = 0;	// make the originalArray viable for a destractor call and only for a destractor call.
		return *this;
	}

	Array<StoredType> clone();											// clone					// to do
//private:
	static char delimiter;
	StoredType *data;
	unsigned int size;
}; // end class Array

template<typename StoredType>
char Array<StoredType>::delimiter = '\t';


template<typename StoredType>
std::ostream &operator<< (std::ostream &outStream , const Array<StoredType> &arrayToWrite)			// operator <<
{
	register unsigned int c;

	for(c = 0 ; c < arrayToWrite.size ; ++c)
		outStream<<*(arrayToWrite.data + c)<<Array<StoredType>::delimiter;

	return outStream;
} // end function operator <<


} // end namespace DataStructures
} // end namespace ASL



#endif // ARRAY_H