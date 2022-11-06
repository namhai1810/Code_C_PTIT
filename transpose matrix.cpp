#include<stdio.h>
#define N 25
void nhapmang(int m,int n, int a[][N]){

	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	scanf("%d", &a[i][j]);
}
void xuatmang(int m,int n, int a[][N]){
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	printf("%d ", a[i][j]);}
void transpose(int m,int n, int a[][N]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ", a[j][i]);
		} printf("\n");
	}
}
int main(){
	int a[N][N],n,m;
	scanf("%d%d", &m, &n);
	nhapmang(m,n,a);
	transpose(m,n,a);
}
