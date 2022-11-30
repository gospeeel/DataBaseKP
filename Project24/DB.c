#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct str {
	char manufacturer[50];
	char formfactor[50];
	char typesize[50];
	char height[50];
	char color[50];
	char availability[50];

};
typedef struct str pc;

pc struckture(pc so);
pc table(pc so);

int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "RUS");
	int n, p = 0, k = 0;
	pc okok;
	okok = (pc){ ' ', ' ',' ',' ' };
	while (1) {
		printf("Выберите действие:\n1)Ввод значений:\n2)Напечатать поля структур\n3)Выход из программы\n");
		scanf("%d", &n);
		switch (n) {
		case 1:
			okok = struckture(okok);
			break;
		case 2:
			table(okok);
			break;
		case 3:
			return 0;
		}
	}
}

pc table(pc so) {
	printf("\n___________________________________________");
	printf("\n|Производитель: %s\n", so.manufacturer);
	printf("|Форм-фактор: %s\n", so.formfactor);
	printf("|Типоразмер: %s\n", so.typesize);
	printf("|Высота: %s\t \n", so.height);
	printf("|Цвет: %s\t \n", so.color);
	printf("|Наличие подсветки/окна: %s\t \n", so.availability);
	printf("|___________________________________________\n");
	return so;
}
pc struckture(pc so) {
	printf("1)Производитель:");
	scanf("%s", so.manufacturer);
	printf("\n2)Форм-фактор:");
	scanf("%s", so.formfactor);
	printf("\n3)Типоразмер:");
	scanf("%s", so.typesize);
	printf("\n4)Высота:");
	scanf("%s", so.height);
	printf("\n5)Цвет:");
	scanf("%s", so.color);
	printf("\n6)Наличие подсветки/окна:");
	scanf("%s", so.availability);
	return so;
}