/* code5.c
Объявили и инициализировали переменные
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");

	int dlina = 10, shirina = 11, visota = 12;

	printf("Длина = %d, Ширина = %d  Высота = %d", dlina, shirina, visota);

	return 0;
}
