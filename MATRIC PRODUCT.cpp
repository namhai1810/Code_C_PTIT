#include<stdio.h>

int main(){
	int m,n,p,i,j,k;
	scanf("%d%d%d",&m,&n,&p);
	int s[m][n], q[n][p], r[m][p];
	
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&s[i][j]); 
	
	for(i=0;i<n;i++)
	for(j=0;j<p;j++)
	scanf("%d",&q[i][j]);
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		r[i][j]=0; 
		for(k=0;k<n;k++)
	    r[i][j]+=s[i][k]*q[k][j]; 
	};
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		printf("%d ",r[i][j]);
		printf("\n"); 
	}
	
}
