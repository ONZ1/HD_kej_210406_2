#include<stdio.h>

int main(void)
{
	/*���� ������ 10cm �϶� ���� ���̿� �ѷ� ���̸� ����ϴ� ���α׷��� ����������
	PI= 3.141592�̰�,   
	���� ���� = PI * ������ * ������  , ���� �ѷ� = PI * 2 * ������*/
	int diameter = 10;
	float radius = diameter / 2;
	float PI = 3.141592;
	float round = PI * diameter;
	float area = PI * radius * radius;

	printf("���� ���� = %f , ���� �ѷ� = %f\n", area, round);

	fgetc(stdin);
}