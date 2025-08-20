/* Программа с ошибкой
выводит неизвестные значения
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");
	int dlina;
	int shirina;
	int visota;
	printf("Длина = %d, Ширина = %d  Высота = %d", dlina, shirina, visota);
	return 0;
}
