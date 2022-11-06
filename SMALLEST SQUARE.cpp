#include"stdio.h"
#include"math.h"
int max(int n1, int n2, int n3, int n4){
  int mx=n1;
    if(mx<n2) mx=n2;
    if(mx<n3) mx=n3;
    if(mx<n4) mx=n4;
    return mx;
}
int min(int n1, int n2, int n3, int n4){
  int mn=n1;
    if(mn>n2) mn=n2;
    if(mn>n3) mn=n3;
    if(mn>n4) mn=n4;
    return mn;
}
int main(){
	int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	int x,y;
	scanf("%d%d%d%d", &a1, &b1, &c1, &d1);
	scanf("%d%d%d%d", &a2, &b2, &c2, &d2);
		x=abs(max(a1,a2,c1,c2)-min(a1,a2,c1,c2));
		y=abs(max(b1,b2,d1,d2)-min(b1,b2,d1,d2));
		if(x>y) printf("%d", x*x);
		else printf("%d", y*y);
}]
