#include<stdio.h>
struct SV{
	int age;
	char name[20];
	char addr[20];
}s,s1;
void nhap(){
	printf("\nNhap thong tin cho SV:");
	printf("\n Nhap ten tuoi dia chi:");
	scanf("%s%d",&s.name,&s.age);
	fflush(stdin);
	gets(s.addr);
}
void ghi(FILE *f){
	fprintf(f,"%s\n%d\n",s.name,s.age);
	fputs(s.addr,f);

}
void doc(FILE *f){
	char tx[10];
	fscanf(f,"%s",&s1.name); // doc
	fscanf(f,"%d",&s1.age);
	fgets(tx,10,f);
	fgets(s1.addr,20,f);
}
void xuat(){
	printf("\nTen: %s\n Tuoi: %d\nDia chi:%s",s1.name,s1.age,s1.addr);
}
int main(){
	FILE *f=fopen("VD.TXT","r");
	while(!feof(f)){
	doc(f);
	xuat();
}
	fclose(f);
	return 0;
}
