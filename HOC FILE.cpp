#include<stdio.h>
int main(){
		//FILE *fptr=fopen("ex1.txt","r");// ko tao file moi
	FILE *fptr=fopen("ex1.txt", "w");// mo cai moi
fprintf(fptr, "%d", 10);
fprintf(fptr, "%s", "cap ptit2");
//fgets(name, 20, fptr)
fclose(fptr);
int id;
char name[20];
fptr=fopen("ex1.txt", "r");
fscanf(fptr, "%d", &id);
fscanf(fptr, "%s", name);
printf("%d|%s", id, name);
	fclose(fptr);
	
	
	
}
