#include<stdio.h>
int main()
{	
	int a, b, c, d, e, f;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	scanf("%d %d", &e, &f);
	if(b>a)
		{int aa=a;
		a=b;
		b=aa;
		}
	if(d>c)
		{int cc=c;
		c=d;
		d=cc;
		}
	if(f>e)
		{int ee=e;
		e=f;
		f=ee;
		}
	int h = a;
	if(h<c)
		h=c;
	if(h<e)
		h=e;	
	if((a==h && b+d==h && d==f && c+e==h)
	||(a==h && b+c==h && c==f && d+e==h)
	||(a==h && b+d==h && d==e && c+f==h)
	||(a==h && b+c==h && c==e && d+f==h)
	||(c==h && d+b==h && b==f && a+e==h)
	||(c==h && d+a==h && a==f && b+e==h)
	||(c==h && d+b==h && b==e && a+f==h)
	||(c==h && d+a==h && a==e && b+f==h)	
	||(e==h && f+d==h && d==b && c+a==h)
	||(e==h && f+d==h && d==a && c+b==h)
	||(e==h && f+c==h && c==b && d+a==h)
	||(e==h && f+c==h && c==a && d+b==h)	
	||(a==h && c==h && e==h && b+d+f==h))
		printf("YES");
	else
		printf("NO");
	return 0;
}

