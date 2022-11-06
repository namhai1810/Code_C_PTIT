#include<stdio.h>
#include<string.h>
#define max 100
struct Node{
	char data[100];
};
void chovaop(char *p,struct Node *word2,int *size){
	int i;
	strcpy(word2[*size].data,p);
	(*size)++;
}
void sosanh(char *k,struct Node *word2,int *size,struct Node *word1,int *length,struct Node *word3,int *dai){
	int i,mark=0,sign=0;
	for(i=0;i<(*size);i++){
		if(strcmp(k,word2[i].data)==0){
			mark=1;
			break;
		}
	}
	for(i=0;i<(*length);i++){
		if(strcmp(k,word1[i].data)==0){
			sign=1;
			break;
		}
	}
		if(mark==0&&sign==0) {
			strcpy(word3[*dai].data,k);
			(*dai)++;
		}
	strcpy(word1[*length].data,k);
	(*length)++;
}
void inra(struct Node *word3,int *dai){
	int i,j=0;
	char t[max];
	for (i = 0; i < *dai; i++) {
      for (j = 0; j < *dai; j++) {
         if (strcmp(word3[j - 1].data, word3[j].data) > 0) {
            strcpy(t, word3[j - 1].data);
            strcpy(word3[j - 1].data, word3[j].data);
            strcpy(word3[j].data, t);
         }
      }
   }
	for(i=0;i<*dai;i++) printf("%s ",word3[i].data);
}
int main(){
	char str1[max];
	char str2[max];
	struct Node word1[max];
	struct Node word2[max];
	struct Node word3[max];
	fgets(str1,max,stdin);
	fgets(str2,max,stdin);
	int size=0;
	int length=0;
	int dai=0;
	char *p;
    const char *delim=" \t\n,.?!;:";
	for(p = strtok(str2, delim); p != NULL; p = strtok(NULL, delim)) {
	      chovaop(p,word2,&size);
	}
	char *k;
	for(k = strtok(str1, delim); k != NULL; k = strtok(NULL, delim)) {
		
	   sosanh(k,word2,&size,word1,&length,word3,&dai);
	}
	
	inra(word3,&dai);
}
