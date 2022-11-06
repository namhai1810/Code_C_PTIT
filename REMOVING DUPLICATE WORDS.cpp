#include<stdio.h>
#define max 100
#include<string.h>
#include<stdbool.h>
struct Node {
	char data[50];
};
 void inra(char *p, struct Node *cp,int *size){
 	int i;
int mark=0;
 	for(i=0;i<*(size);i++){
 		if(strcmp(cp[i].data,p)==0){
 			mark=1;
 			break;
	}
	 }
	 if(mark==0){
	 	strcpy(cp[*size].data,p);
	 	(*size)++;
	 }
 }
 void hienThi(struct Node* cp, int size) {
	int i;
	for(i = 0; i < size; i++) {
	printf("%s ",cp[i].data);
	}
}
int main(){
	char s[max];
	struct Node cp[max];
	fgets(s,max,stdin);
	int size=0;
	char *p;
const 	char *delim=" \t\n,.?!;:";
	for(p = strtok(s, delim); p != NULL; p = strtok(NULL, delim)) {
		inra(p, cp, &size);
	}
	hienThi(cp,size);

}
