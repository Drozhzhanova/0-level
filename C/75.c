#include <stdio.h>
#include <conio.h>

int main() 
{
    float pounds, kilograms, grams;

    printf("\n�������� ���� �� ������ � ����������.\n");
    printf("������� ��� � ������ � ������� <Enter>. -> ");
    scanf("%f", &pounds);

    kilograms = pounds * 0.453592; //������� ����� � ����������
    grams = (kilograms - (int)kilograms)*1000; //�������� ������� � �������

    printf("%.1f ����(�/��) - ��� %.0f �� %.0f ��.\n", pounds, kilograms, grams);

    return 0;
}
