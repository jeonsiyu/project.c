#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

// �Ϸ� ���� Į�θ���ŭ ��Ż�� ���� Į�θ��� �޾ƿ���
//int totalKcal = 1230;		// �ӽ÷� �����س��� ����

int calculateExerciseTimeHour(int index) {
	int hour = TotalKcal() / exerciseList[index].burnKcal;
	return hour;
}

int calculateExerciseTimeMinute(int index) {
	int hour = calculateExerciseTimeHour(index);
	int restKcal = TotalKcal() - hour;
	int caloriesPerMinute = exerciseList[index].burnKcal / exerciseList[index].minute;
	int minute = (restKcal / caloriesPerMinute) % 60;
	return minute;
}

int random() {
	// 0~9 ���� ����
	srand(time(NULL));
	int random = 0;
	random = rand() % 9;
	return random + 1;
}

int printBar() {
	// ���� �ð��� ��� ���� �ð��� ����
	time_t startTime = time(NULL);
	time_t currentTime;
	int elapsedSeconds = 0;

	// ������ ����� '-'�� ����
	int prevCount = 0;

	// ����� �ð��� ������ ����
	do {
		currentTime = time(NULL);
		elapsedSeconds = difftime(currentTime, startTime);
		// ����� �ð��� 0.1�� �̻��̸� ���
		if (elapsedSeconds >= 0.1) {
			// �� ���� �߰��Ǵ� '-'�� ������ �ð��� ����ϵ��� ����
			int count = elapsedSeconds * 6;
			// '-'�� ������ ������ ����� �Ͱ� ���ٸ� ������� ����
			if (count != prevCount) {
				for (int i = 0; i < 4; i++)
				{
					if (i == 0) { 
						printf("�� ");
						Sleep(5);
					}
					else if (i == 1) {
						printf("�� ");
						Sleep(5);
					}
					else if (i == 2) {
						printf("�� ");
						Sleep(5);
					}
					else if (i == 3) {
						printf("�� ");
						Sleep(5);
					}
					Sleep(3);
				}
				prevCount = count;
			}
		}
	} while (elapsedSeconds < 6); // 6�� ������ ����� �ð��� ����

	printf("\n"); // ����� �������ϱ� ���� �߰�

	return 0;
}

int printExercise() {
	int randomNum = random();
	int randomIndexArr[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		int randomIndex;
		do
		{
			randomIndex = random() % numExercises;
		} while (randomIndexArr[0] == randomIndex || randomIndexArr[1] == randomIndex || randomIndexArr[2] == randomIndex);

		randomIndexArr[i] = randomIndex;
	}

	GotoXY(14, 23);
	printBar();
	GotoXY(25, 25);
	printf("������ŭ ���� ���ؼ���");

	for (int j = 0; j < 3; j++)
	{
		int hour = calculateExerciseTimeHour(randomIndexArr[j]);
		int minute = calculateExerciseTimeMinute(randomIndexArr[j]);
		
		GotoXY(21, 27 + j);
		printf("%s�� %d�ð� %d���� �ؾ���!", exerciseList[randomIndexArr[j]].sportsName, hour, minute);
	}

	GotoXY(27, 31);
	printf("ȭ�����̾ߤ���\n");

	return 0;
}