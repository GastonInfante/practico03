#include "stdafx.h"
#include <limits.h>
#include <float.h>

void compareSizes()
{
	int c = 0;
	printf("Bytes char: %d, min: %d, max: %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("Bytes short: %d, min: %d, max: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("Bytes int: %d, min: %d, max: %d\n", sizeof(int),INT_MIN, INT_MAX);
	printf("Bytes float: %d, min: %d, max: %d\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("Bytes double: %d, min: %d, max: %d\n", sizeof(double),DBL_MIN, DBL_MAX);
	printf("Bytes long: %d, min: %d, max: %d\n", sizeof(long),LONG_MIN, LONG_MAX);
	printf("Bytes long long: %d, min: %d, max: %d\n", sizeof(long long),LLONG_MIN, LLONG_MAX);
	printf("Bytes size_t: %d, min: completar, max: %d\n", sizeof(size_t), SIZE_MAX);
	


	/* x86
	Bytes char: 1, min : -128, max : 127
	Bytes short : 2, min : -32768, max : 32767
	Bytes int : 4, min : -2147483648, max : 2147483647
	Bytes float : 4, min : 0, max : 940572672
	Bytes double : 8, min : 0, max : 1048576
	Bytes long : 4, min : -2147483648, max : 2147483647
	Bytes long long : 8, min : 0, max : -2147483648
	Bytes size_t : 4, min : completar, max : -1*/

	//x64
	//	Bytes char: 1, min : -128, max : 127
	//	Bytes short : 2, min : -32768, max : 32767
	//	Bytes int : 4, min : -2147483648, max : 2147483647
	//	Bytes float : 4, min : 0, max : -536870912
	//	Bytes double : 8, min : 0, max : -1
	//	Bytes long : 4, min : -2147483648, max : 2147483647
	//	Bytes long long : 8, min : 0, max : -1
	//	Bytes size_t : 8, min : completar, max : -1
}