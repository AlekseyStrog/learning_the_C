/* code_6.c
Считаем объем в отдельной переменной
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");

	int dlina = 10, shirina = 11, visota = 12;
	int obem = 0;

	obem = dlina * shirina * visota;

	printf("Длина = %d, Ширина = %d  Высота = %d Объем = %d", dlina, shirina, visota, obem);

	return 0;
}
