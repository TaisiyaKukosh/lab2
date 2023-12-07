#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int main(){
	toursforJanuary * arr = NULL;
	int n = 0;
	int stop = 0;
	while(stop != 1){
		int key;
		printf("Что вам нужно? \n 1: Создать план туров на месяц \n 2: Загрузить план туров \n 3: Просмотреть туры на январь \n 4: Поиск по турам \n");
		scanf("%d", &key);
		switch(key){
			case 1:{
				create(&arr, &n);
				if(!arr)
					printf("Ошибка создания \n");
				else
					printf("Созданно %d элементов \n", n);
				write(arr, n);
			}
			case 2:{
				read(&arr, &n);
				if(!arr)
					printf("Ошибка чтения \n");
				else
					printf("Загруженно %d элементов \n", n);
			}
			case 3:{
				for(int i = 0; i < n; i++)
					printf("Назвние тура: %s\n Дата проведения тура: %i\n Количество человек: %i \n Стоимость для одного человека: %i \n", arr[i].name, arr[i].date, arr[i].people, arr[i].price);
				break;
			}
			case 4:	{
				search(arr, n);
				break;
			}
			default:
				stop = 1;
				break;
		}
	}
	if(arr)
		free(arr);
	return 0;
}
