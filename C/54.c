//вычисление объёма куба
#include <stdio.h>
#include <conio.h>

main()
{
	float l;//длина ребра
	float V;//объём куба
	printf("Вычислите объём куба.\n");
	printf("Введите длину ребра(см)и нажмите клавишу <Enter>\n");
	printf("->");
	scanf("%f",&l);
	V=l*l*l;
	printf("Объём куба:%10.2f куб.см.\n",V);
	printf("Для завершения нажмите <Enter>");
	getch();
	
}
