#include "stdafx.h"
#include <limits.h>
#include <float.h>

void compareSizes()
{
	printf("Bytes char: %d, min: %d, max: %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("Bytes short: %d, min: %d, max: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("Bytes int: %d, min: %d, max: %d\n", sizeof(int),INT_MIN, INT_MAX);
	printf("Bytes float: %d, min: %d, max: %d\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("Bytes double: %d, min: %d, max: %d\n", sizeof(double),DBL_MIN, DBL_MAX);
	printf("Bytes long: %d, min: %d, max: %d\n", sizeof(long),LONG_MIN, LONG_MAX);
	printf("Bytes long long: %d, min: %d, max: %d\n", sizeof(long long),LLONG_MIN, LLONG_MAX);
	printf("Bytes size_t: %d, min: completar, max: %d\n", sizeof(size_t), SIZE_MAX);
}