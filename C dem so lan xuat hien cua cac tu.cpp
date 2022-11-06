#include <stdio.h>
#include<stdbool.h>
#include<string.h>
struct Node{
	char data[100];
	int counter;
};
void Tinh(char *word,struct Node*words,int *size){
	int i;
	bool TonTai=false;
	for(i=0;i<(*size);i++){
		if(strcmp(words[i].data,word)==0){
			words[i].counter++;
			TonTai=true;
			break;
		}
	}
	if(!TonTai){
		strcpy(words[*size].data,word);
		words[*size].counter=1;
		(*size)++;
	}	
}


void TachTuVaDem(char *s,struct Node*words, int *size){
	int i;
	char *p;
	const char *delima=" \t\n,.;";
	for(p=strtok(s,delima);p!=NULL;p=strtok(NULL,delima)){
		Tinh(p,words,size);
	}
	
	
}
void hienThi(struct Node *words,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%s:%d\n",words[i].data,words[i].counter);
	}
}




int main(){
	char x[1000];
	fgets(x,999,stdin);
	struct Node words[99];
    int size =0;
	TachTuVaDem(x,words,&size);
	hienThi(words,size);
	
}
