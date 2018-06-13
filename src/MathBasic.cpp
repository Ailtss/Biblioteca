#include "MathBasic.h"


namespace mbasic
{
	int  MathBasic::add(int v1, int v2)
	{
		return (v1+v2);
	}

	int MathBasic::dif(int v1, int v2)
	{
		return (v1-v2);
	}

	int MathBasic::mux(int v1, int v2)
	{
		return (v1*v1);
	}

	int MathBasic::div(int v1, int v2)
	{
		if(v2 == 0)
		{
			return 0;
		}

		else
		{
			return (v1/v2);
		}
	}
}

