#pragma once
#define MAX_EXERCISES 100

struct Exercise
{
	char *sportsName;		// ���
	int minute;		// ��ð� (�д���)
	int burnKcal;		// �ð��� �¿� �� �ִ� Į�θ�
};

extern struct Exercise exerciseList[];
extern int numExercises;		// �迭�� ���� ũ�� ����