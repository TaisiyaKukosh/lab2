typedef struct{
	char name[40];
	int date;
	int people;
	int price;
}toursforJanuary;

void create(toursforJanuary **arr, int *n);
void write(toursforJanuary *arr, int n);
void read(toursforJanuary **arr, int *n);
void search(toursforJanuary *arr, int n);