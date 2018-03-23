#include "stdafx.h"
#include <stdint.h>
#include "generalController.h"

void start()
{
	uint32_t choice = 0;
	printf("seleccione una opcion y presione enter\n1_ sizeof y valores min &max\n2_ imprimir valor de 65 en decimal, hexa, octal y caracter\n3_ valor de 0xffffffff\n4_ array\n");
	scanf_s("%d", &choice);
	controller(choice);
}