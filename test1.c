#include<stdio.h>
int n;
void CheckNum(int n) {
	if (n % 2 == 0) {
		printf("  1");
	} 
	else {
		printf("  0");
	}
}
int main() {
int n;
printf("Nhap gia tri n :");
scanf("%d",&n);
CheckNum(n);
return 0;
}
