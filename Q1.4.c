#include<stdio.h>

int main() {
	
	double a, b, average;
	printf("Nhap vao a:");
	scanf("%lf", &a);
	printf("Nhap vao b:");
	scanf("%lf", &b);
	
	average = (a + b) / 2;
	
	printf("Trung binh cong cua a va b la: %.2lf\n", a,b, average);
	
	return 0;
}