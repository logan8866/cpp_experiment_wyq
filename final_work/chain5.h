#ifndef CHAIN
#define CHAIN
#include"chain.h"
#endif

template<class T>
class Chain5 : public Chain<T>
{
	public:
		Chain5(int i);
		void delete_many(int index_start, int index_end);
};
