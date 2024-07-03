#include<stdio.h>
int main() {
	
    int x, y, z, largest;
    printf("Nhap vao x:");
    scanf("%d", &x);
    printf("Nhap vao y:");
    scanf("%d", &y);
    printf("Nhap vao z:");
    scanf("%d", &z);
    
    largest = x;
    if ( y > largest) {
       largest  = y;
	}
	if ( z > largest) {
		largest = z;
	}
	printf("Gia  lon nhat la: %d\n", largest);
	
	return 0;
}
