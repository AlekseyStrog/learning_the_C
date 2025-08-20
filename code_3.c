/* для работа обязательно меняем
кодировку файла с UTF-8 на ANSI
меняем через верхнее меню файл 
-> сохранить как
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");
	printf("Привет");
	return 0;
}
