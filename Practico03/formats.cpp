#include "stdafx.h"
#include <iostream>
#include <iomanip>

void typeFormats()
{
	system("cls");
	char a = 65;
	printf("printf:\nEl valor decimal es: %d\nEl valor hexadecimal es: %#08X\nEl valor octal es: %o\nEl caracter es: %c\n", a,a,a,a);
	std::cout << "cout:\nEl valor decimal es: " <<(int)a <<"\nEl valor hexadecimal es :" << std::hex << (int)a << "\nEl valor octal es: " << std::oct << (int)a << "\nEl caracter es: "<< a;
}

void convert()
{
	int a = 0xFFFFFFFF;
	unsigned int b = 0xFFFFFFFF;
	printf("printf\nint a:%d \nunasined int b: %u\ncout\n", a,b);
	std::cout << a << std::endl ;
	std::cout << b;

}