/*
 * file swap.h
 * created by Nightmare
 * on 14 Ïêô 2008
 */


namespace ASL
{
namespace DataStructures
{
template<typename StoredType> class Array;
} // end namespace DataStructures
} // end namespace ASL


namespace ASL
{
namespace Utility
{

template<typename StoredType>
inline void swap(ASL::DataStructures::Array<StoredType> &x , ASL::DataStructures::Array<StoredType> &y)	// swap
{
	union Temp
	{
		StoredType *tempData;
		unsigned int tempSize;
	} z;

	z.tempData = x.iData;
	x.iData = y.iData;
	y.iData = z.tempData;

	z.tempSize = x.iSize;
	x.iSize = y.iSize;
	y.iSize = z.tempSize;
} // end function template swap


} // end namespace Utility
} // end namespace ASL
