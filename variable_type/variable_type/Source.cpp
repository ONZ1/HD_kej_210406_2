#include<stdio.h>

int main(void)
{
	/*원의 지름이 10cm 일때 원의 넓이와 둘레 길이를 출력하는 프로그램을 만들으세요
	PI= 3.141592이고,   
	원의 넓이 = PI * 반지름 * 반지름  , 원의 둘레 = PI * 2 * 반지름*/
	int diameter = 10;
	float radius = diameter / 2;
	float PI = 3.141592;
	float round = PI * diameter;
	float area = PI * radius * radius;

	printf("원의 넓이 = %f , 원의 둘레 = %f\n", area, round);

	fgetc(stdin);
}