/*
 * file compare.h
 * created by Nightmare
 * on 21 Ïêô 2008
 */


	// auxiliary function
template<typename StoredType>
static inline int comp(register const StoredType *const xData , register const StoredType *const yData , const unsigned int xSize , const unsigned int ySize)	// comp
{
	const register unsigned int mSize = std::min(xSize,ySize);	// m for "minimum"
	register unsigned int c;

	for(c = 0 ; c < mSize ; ++c)
		if(xData[c] != yData[c])
			if(xData[c] < yData[c])
				return -1;
			else
				return 1;

	if(c == xSize)
		if(c == ySize)
			return 0;
		else
			return -1;
	else
		return 1;
} // end auxiliary function comp


template<typename StoredType>
int compare(const Array<StoredType> &x , const Array<StoredType> &y) // compare
{
	return comp(x.iData,y.iData,x.iSize,y.iSize);
} // end function template compare


template<typename StoredType>
int compare(const Array<StoredType> &x , const unsigned int xStartingSubscript , const unsigned int xLength , const Array<StoredType> &y) // compare
{
	return comp(&x.iData[xStartingSubscript],y.iData,xLength,y.iSize);
} // end function template compare


template<typename StoredType>
int compare(const Array<StoredType> &x , const Array<StoredType> &y , const unsigned int yStartingSubscript , const unsigned int yLength) // compare
{
	return comp(x.iData,&y.iData[yStartingSubscript],x.iSize,yLength);
} // end function template compare


template<typename StoredType>
int compare(const Array<StoredType> &x , const unsigned int xStartingSubscript , const unsigned int xLength , const Array<StoredType> &y , const unsigned int yStartingSubscript , const unsigned int yLength) // compare
{
	return comp(&x.iData[xStartingSubscript],&y.iData[yStartingSubscript],xLength,yLength);
} // end function template compare
