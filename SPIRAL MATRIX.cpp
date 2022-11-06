#include<stdio.h>
int a[105][105];
void xoanoc(int N){
	int dem=0;
	int vt=0;
	int check=N*N;
	while(1){
		//ngang tren
		for(int i=vt;i<N-vt;i++){
			dem++;
			a[vt][i]=dem;
			if(dem== check) return;
		}
		//doc phai
		for(int i=vt+1;i<N-vt-1;i++){
			dem++;
			a[i][N-vt-1]=dem;
			if(dem==check) return;
		}
		
		//ngang duoi
		for(int i=N-vt-1;i>=vt;i--){
			dem++;
			a[N-vt-1][i]=dem;
			if(dem==check) return;
		}
			//doc trai
		for(int i=N-vt-2;i>vt;i--){
			dem++;
			a[i][vt]=dem;
			if(dem==check) return;
		}
		vt++;
	}
	
}
void in(int N){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int N;
	scanf("%d",&N);
	xoanoc(N);
	in(N);
	return 0;
}
