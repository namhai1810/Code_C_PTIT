#include<stdio.h>
#include<math.h>
#include<stdbool.h>
 int NhapN(){
 int n;
 
 printf("Nhap so nguyen n:");
 scanf("%d",&n);	
 	return n;
	 
	 }
bool kiemTraSnt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
	if(n%i==0){return false;}}
	return true;
	}
void Insnt(int n){
int i=2;

printf("\n %d so nguyen to dau tien la ",n);
while(n>0){
if(kiemTraSnt(i)){
printf("%d, ",i);
n--; 
}i++;
 
}  
}
void Fibonacii(int n){
long long f0=0,f1=1,fn;
int i;
printf("\n");
printf(" \n%d so fibonacii dau tien la :\n",n);
for(i=0;i<n;i++){
	
if(i<=1){fn=i;}
else{
fn=f1+f0;
f0=f1;
f1=fn;
}printf("F%d=%lld\n	",i,fn)
;
}
}
void soChinhPhuong(int n){
int i;
printf("\n %d so chinh phuong la",n);

for(i=0;i<n;i++){
	printf("%d, ",i*i);
}

}
int main(){
	int n;
	n=NhapN();
	Insnt(n);
	Fibonacii(n);
	soChinhPhuong(n)
	return 0;
}


