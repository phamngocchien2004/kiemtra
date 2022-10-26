#include<stdio.h>
int m,n;
void CheckNum(int n,int m) {
	int i;
	if (n>m) {
		for (i=m+1;i<n;i++) {
			if (i % 2 == 0)
			printf("\n%d ",i);
		}
	} 
	else 
		if (m>n) {
			for (i=n+1;i<m;i++) {
				if (i % 2 == 0)
				printf("\n%d ",i);
			}
		}
	}
int main () {
	int m,n;
	printf("Nhap m,n: ");
	scanf("%d %d",&m,&n);
	CheckNum(n,m);
	return 0;
}
