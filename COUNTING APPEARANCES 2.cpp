#include <stdio.h>

void hienThi(int*, int*, int);

void nhap(int *arr, int *n) {
	scanf("%d",n);
	int i;
	for(i = 0; i < *n; i++) {
		scanf("%d", &arr[i]);
	}
}

int chiSo(int *b, int n, int x) {
	int i;
	for(i = 0; i < n; i++) {
		if(b[i] == x) {
			return i;
		}
	}
	return -1;
}

void dem(int *arr, int n) {
	int b[100]; //  [1, 2, 5]
	int dem[100]; //[5, 6, 7]
	int i;
	int size = 0;
	for(i = 0; i < n; i++) {
		dem[i] = 0;
	}
	
	for(i = 0; i < n; i++) {
		int index = chiSo(b, size, arr[i]);
		if(index == -1) {
			b[size] = arr[i];
			dem[size] = 1;
			size++;
		} else {
			dem[index]++;
		}
	}
	
	hienThi(b, dem, size);
}

void hienThi(int *b, int *dem, int n) {
	
	int i;
	for(i = 0; i < n; i++) {
 printf("%d appears %d times\n", b[i], dem[i]);
	}
}

int main() {
	int k=1,i,h;
	scanf("%d",&h);
	for(i=0;i<h;i++){
int n;
	int arr[100];	nhap(arr, &n);
	printf("Test %d:\n",k++);
	dem(arr,n);
	printf("\n");
}
return 0;

}
