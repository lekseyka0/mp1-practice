#include<stdio.h>
#include<math.h>
int main(void) 
{
	float x1, x2, y1, y2, r1, r2, d;
	printf("input x1,x2,y1,y2,r1,r2\n");
	scanf("%f,%f,%f,%f,%f,%f",&x1,&x2,&y1,&y2,&r1,&r2);
	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if (r1 ==0 ||  r2 == 0) {
		printf("error");
	}
	if (d > r1 + r2 && r1 != 0 && r2 != 0) {
		printf("circles do not intersect");
	}
	if (d == r1 + r2 && r1 !=0 && r2 != 0) {
		printf("circles touch from the outside");
	}
	if (r1 < r2 && d < r2 && d != 0 && r1 != 0 && r2 != 0) {
		printf("circles touch from the inside");
	}
    if (r1 > r2 && d < r1 && d != 0 && r1 != 0 && r2 != 0) {
			printf("circles touch from the inside");
	}
	if (r1+r2 > d && d != 0 && r1 != 0 && r2 != 0) {
		printf("circles intersect");
	}
	if (d == 0 && r1 != 0 && r2 != 0) {
		printf("circles match");
	}
}

