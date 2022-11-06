#include<stdio.h>
#define N 1000
#include<string.h>
void xoaxuongdong(char s[N]){
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='\n') s[i]='\0';
	}
}
void daonguoc(char s[],char s1[]){
	int len=strlen(s);
	for(int i=0;s[i]!='\0';i++){
		s1[i]=s[len-1-i];
	}
}
void themkitu(char a[],int vt){
	int n=strlen(a);
	for(int i=n;i>=vt;i--){
		a[i+1]=a[i];
	}
	a[vt]='0';
	a[n+1]='\0';
}
int main(){
	char a[N],b[N];
	int test;
	scanf("%d\n",&test);
	for(int x=0;x<test;x++){
		fgets(a,sizeof(a),stdin);
		fgets(b,sizeof(b),stdin);
	    xoaxuongdong(a);
	    xoaxuongdong(b);
	    char s[N]={0},s1[N]={0};
	    int kq=0,nho=0,index=0;
        if(strlen(a)>strlen(b)){
        	for(;strlen(a)!=strlen(b);){
		    themkitu(b,0);}}
        else if(strlen(a)<strlen(b)){
        	for(;strlen(a)!=strlen(b);){
        	themkitu(a,0);}
		}
        for(int i=strlen(a)-1;i>=0;i--){
        	kq=(a[i]-48)+(b[i]-48)+nho;
        	nho=kq/10;
        	s[index]=(kq%10)+48;
        	index++;
		}
		if(nho!=0){
			s[index]=nho+48;
		}
		daonguoc(s,s1);
		puts(s1);
	}
}
