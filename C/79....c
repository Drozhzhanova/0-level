#include <stdio.h>
#include <conio.h>

main()

{
    int minutes, seconds;
    int totalSeconds;

    printf("������� ����� (�����.������) -> ");
    scanf("%f.%f", &minutes,&seconds);

    if (seconds>=60)
	{
        printf("������! ���������� ������ �� ����� ���� ������ 60");
    }
	else 
    {
	   totalSeconds =(minutes*60)+seconds;
       printf("�������� ����� � ��������:%d\n", totalSeconds);
    }
    
    printf("\n ��� ���������� ������� <Enter>");
    getch();

}

