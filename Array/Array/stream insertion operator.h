/*
 * file stream insertion operator.h
 * created by Nightmare
 * on 08 Ïêô 2008
 */


template<typename StoredType>
std::ostream &operator <<(std::ostream &outStream , const Array<StoredType> &arrayToOutput)	// operator <<
{
	register unsigned int c;

	for(c = 0 ; c < arrayToOutput.iSize ; ++c)
		outStream<<arrayToOutput.iData[c]<<Array<StoredType>::delimiter;

	return outStream;
} // end function template operator <<


