/* code_8.c
�������� �������� �� ������������
������������ ����� �� ���������� ���������
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");

	int dlina, shirina, visota;

	printf("������ ������ �����\n");

	printf("������� ����� ");
	scanf("%d", &dlina);

	printf("������� ������ ");
	scanf("%d", &shirina);

	printf("������� ������ ");
	scanf("%d", &visota);

	printf("����� = %d, ������ = %d  ������ = %d ����� = %d", dlina, shirina, visota, dlina * shirina * visota);

	return 0;
}
