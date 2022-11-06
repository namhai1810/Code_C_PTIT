#include<stdio.h>
int main(){
	int i,j,l,n,m,k,h,g=1;
	scanf("%d",&h);
	for(k=0;k<h;k++){
	scanf("%d%d",&n,&m);
 int a[100][100], b[100][100] = {0}, c[100][100] = {0};
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		b[j][i]=a[i][j];
		}
	}
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(l=0;l<m;l++){
				c[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
	printf("Test %d:\n",g++);
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
	printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}
return 0;
}
