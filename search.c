#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void search(toursforJanuary *arr, int n)
{
	int key;
	printf("Поиск:\n 1.Название тура\n 2.Дата тура\n 3.Кол-во человек\n 4.Стоимость на человека\n");
	scanf("%d", &key);
	switch(key)
	{
		case 1:{
			char key1[40];
			int found = 0;
			printf("Введите название: ");
			scanf("%s",key1);
			for(int i = 0; i<n; i++)
			{
				if(!strcmp(arr[i].name,key1))
				{
					printf("Совпадение найдено: \n Назвние тура: %s \n Дата проведения тура: %i \n Количество человек: %i \n Стоимость для одного человека: %i \n", arr[i].name, arr[i].date, arr[i].people, arr[i].price);
					found = 1;
				}

			}
			if (!found) printf("Совпадений не найдено\n");
			break;
		}
		case 2:{
			double key2;
			int found = 0;
			printf("Введите дату тура: ");
			scanf("%lf",&key2);
			for(int i = 0; i<n; i++)
			{
				if(arr[i].date == key2)
				{
					printf("Назвние тура: %s\n Дата проведения тура: %i\n Количество человек: %i \n Стоимость для одного человека: %i \n", arr[i].name, arr[i].date, arr[i].people, arr[i].price);
					found = 1;
				}
			}
			if (!found) printf("Совпадений не найдено\n");
			break;
		}
		case 3:{
			double key3;
			int found = 0;
			printf("Введите количество человек: ");
			scanf("%lf",&key3);
			for(int i = 0; i<n; i++)
			{
				if(arr[i].people == key3)
				{
					printf("Назвние тура: %s\n Дата проведения тура: %i\n Количество человек: %i \n Стоимость для одного человека: %i \n", arr[i].name, arr[i].date, arr[i].people, arr[i].price);
					found = 1;
				}
			}
			if (!found) printf("Совпадений не найдено\n");
			break;
		}
		case 4:{
			double key4;
			int found = 0;
			printf("Введите стоимость тура: ");
			scanf("%lf",&key4);
			for(int i = 0; i<n; i++)
			{
				if(arr[i].price == key4)
				{
					printf("Назвние тура: %s\n Дата проведения тура: %i\n Количество человек: %i \n Стоимость для одного человека: %i \n", arr[i].name, arr[i].date, arr[i].people, arr[i].price);
					found = 1;
				}
			}
			if (!found) printf("Совпадений не найдено\n");
			break;
		}
		default:
			break;
	}
	printf("\n");
}