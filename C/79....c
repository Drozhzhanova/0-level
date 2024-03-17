#include <stdio.h>
#include <conio.h>

main()

{
    int minutes, seconds;
    int totalSeconds;

    printf("Введите время (минут.секунд) -> ");
    scanf("%f.%f", &minutes,&seconds);

    if (seconds>=60)
	{
        printf("Ошибка! Количество секунд не может быть больше 60");
    }
	else 
    {
	   totalSeconds =(minutes*60)+seconds;
       printf("Введённое время в секундах:%d\n", totalSeconds);
    }
    
    printf("\n Для завершения нажмите <Enter>");
    getch();

}

