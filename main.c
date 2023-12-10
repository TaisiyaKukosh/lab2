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
				break;
			}
			case 2:{
				read(&arr, &n);
				if(!arr)
					printf("Ошибка чтения \n");
				else
					printf("Загруженно %d элементов \n", n);
				break;
			}
			case 3:{
				printt(arr, n);
				if(!arr)
					printf("Ошибка чтения \n");
				else
					printf("Запланировано туров: %d   \n", n);
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
