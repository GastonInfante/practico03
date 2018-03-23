#include "stdafx.h"
#include <stdint.h>
#include "sizes.h"
#include "formats.h"
#include "declareArray.h"



void controller(uint32_t choice)
{
	switch (choice)
	{
		case 1:
			compareSizes();
			break;
		case 2:
			typeFormats();
			break;
		case 3:
			convert();
			break;
		case 4:
			writeArray();
			break;
		default:
			break;
	}
}