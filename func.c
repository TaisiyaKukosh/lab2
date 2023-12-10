#include <stdio.h>
#include <stdlib.h>
#include "func.h"
void create(toursforJanuary ** arr, int * n){
	printf("Сколько туров запланировано на месяц?");
	scanf("%d", n);
	if (*n <= 0)
		return;
	*arr = (toursforJanuary *)calloc(*n, sizeof(toursforJanuary));
	for (int i = 0; i < * n; i++){
		printf("Название - ");
		scanf("%s", (*arr)[i].name);
		printf("На какое число - ");
		scanf("%i", &(*arr)[i].date);
		printf("Сколько человек - ");
		scanf("%i", &(*arr)[i].people);
		printf("Цена для одного человека - ");
		scanf("%i", &(*arr)[i].price);
	}
}
void read(toursforJanuary ** arr, int *n){
	FILE * fl = fopen("tuorsforjanuary.txt", "r");
	if (!fl)
		return;
	if(fscanf(fl, "%d", n) != 1){
		fclose(fl);
		return;
	}
	if(*n <= 0){
		fclose(fl);
		return;
	}
	*arr = (toursforJanuary *)calloc(*n, sizeof(toursforJanuary));
	for(int i = 0; i < *n; i++){
		if (fscanf(fl, "%s %i %i %i", (*arr)[i].name, &(*arr)[i].date, &(*arr)[i].people, &(*arr)[i].price) != 4)
			break;
	}
	fclose(fl);
}
void write(toursforJanuary * arr, int n){
	if(n <= 0)
		return;
	FILE * fl = fopen("tuorsforjanuary.txt", "w");
	if(!fl)
		return;
	fprintf(fl, "%d \n", n);
	for(int i = 0; i < n; i++)
		fprintf(fl, "%s %i %i %i", arr[i].name, arr[i].date, arr[i].people, arr[i].price);
fclose(fl);
}
void printt(toursforJanuary * arr, int n){
	for(int i = 0; i < n; i++)
		printf("Назвние тура: %s\n Дата проведения тура: %i\n Количество человек: %i \n Стоимость для одного человека: %i \n", arr[i].name, arr[i].date, arr[i].people, arr[i].price);
}
