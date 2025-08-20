/* code_8.c
Получаем значения от пользователя
Рассчитываем объем по полученным значениям
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");

	int dlina, shirina, visota;

	printf("Расчет объема ящика\n");

	printf("Введите длину ");
	scanf("%d", &dlina);

	printf("Введите ширину ");
	scanf("%d", &shirina);

	printf("Введите высоту ");
	scanf("%d", &visota);

	printf("Длина = %d, Ширина = %d  Высота = %d Объем = %d", dlina, shirina, visota, dlina * shirina * visota);

	return 0;
}
