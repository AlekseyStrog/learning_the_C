/* code_7.c
������� ����� ��� ������ � printf
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");

	int dlina = 10, shirina = 11, visota = 12;

	printf("����� = %d, ������ = %d  ������ = %d ����� = %d", dlina, shirina, visota, dlina * shirina * visota);

	return 0;
}
