//вычисление объема параллелепипеда
#include <stdio.h>
#include <conio.h>
main()
{
	float l,w,h;//длина,ширина,высота 
	float V;// объем 
	printf("Вычисление объема параллелепипеда.\n");
	printf("Введите исходные данные:\n");
	printf("Длина(см.) -> ");
	scanf("%f", &l);
	printf("Ширина(см.)-> ");
	scanf("%f", &w);
	printf("Высота(см.)->");
	scanf("%f", &h);
	V=l*w*h;
	printf("Объём:%10.2f куб.см.\n",V);
	
	printf("\n\nДля завершения нажмите <Enter>");
	getch();
}
