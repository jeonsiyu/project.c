#include <stdio.h>
#include <string.h>

char sex[5];
double weight;

void getWeight() {
	printf("������ �Է�: ");
	scanf("%lf", &weight);
}

void getSex() {
	printf("���� �Է�: ");
	scanf("%s", sex);
}

int personalKcal() {
	int personalCalorie = 0;

	if (strcmp(sex, "��") == 0)
	{
		personalCalorie = (weight * 24) * 1.3;
	}
	else 
	{
		personalCalorie = (weight * 0.9 * 24) * 1.3;
	}
	return personalCalorie;
}