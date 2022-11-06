#include<stdio.h>

int main()
{
	int a,i;
	long long c,d,e;
	scanf("%d",&a);
	long long s[a];
	for(i=0;i<a;i++)
	scanf("%lld",&s[i]);
	for(i=0;i<a;i++)
	{
		d=s[i];
		c=0;
		e=1;
		while(s[i]>0)
		{
			if(s[i]%10==1)
			{
				c=c+e;
				e*=10;
				s[i]/=10;
			};
			if(s[i]%10==0||s[i]%10==8||s[i]%10==9)
			{
				e*=10;
				s[i]/=10;
			};
			if(s[i]%10!=0&&s[i]%10!=1&&s[i]%10!=8&&s[i]%10!=9)
			{
				c=-1;
				break;
			}
		}
		if(c==-1||d==0||c==0) printf("INVALID\n");
		else printf("%lld\n",c);
	}
}
