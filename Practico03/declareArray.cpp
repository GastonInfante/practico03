#include "stdafx.h"
#include "declareArray.h"

int numbs[2];

void writeArray()
{
	int choice = 0;
	printf("\nIngrese un numero y presione ENTER:\n1_Ingresar valores en el array\n2_Mostrar valores del array\n");
	scanf_s("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("Luego de ingresar los valores presione enter\n");
			printf("Ingresa el primer valor entero:");
			scanf_s("%d", &numbs[0]);
			printf("Ingresa el segundo valor entero: ");
			scanf_s("%d", &numbs[1]);
			printf("Valores ingresados correctamente");
			writeArray();
			break;
		case 2:
			printf("Los valores ingresados son:\n");
			for (int i = 0;i < 2 ;i++)
			{
				printf("%d\n", numbs[i]);
			}
			break;
		default:
			printf("El valor ingresado no es correcto");
			break;
	}
}