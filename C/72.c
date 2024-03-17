//программа вычисления величины дохода по вкладу
#include <stdio.h>
#include <conio.h>

main()
{
	float vkl; //вклад
	float proc; //% годовых
	int day; //время хранения(дней)
	float dohod; //величина дохода
	printf("Вычисление дохода по вкладу.\n");
	printf("Введите исходные данные:");
	printf("Величина вклада(руб.)-> ");
	scanf("%f",&vkl);
	printf("Срок вклада(дней)-> ");
	scanf("%d",&day);
	printf("Процентная ставка(годовых)-> ");
	scanf("%f",&proc);
	dohod = vkl*proc/365/100*day;
	printf("----------------------------\n");
	printf("Доход:%9.2f руб.\n",dohod);
	printf("Сумма по оканчании срока вклада:%9.2f руб.\n",vkl);
	printf("\nДля завершения нажмите <Enter>");
	getch();    
}
