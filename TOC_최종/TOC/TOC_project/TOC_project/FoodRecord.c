#include <stdio.h>
#include <string.h>
#include <Windows.h>

#include "GOTOXY.h"
#include "Cursor.h"

#define SIZE 20

int x = 21;
int y = 5;

typedef struct {
	char FoodName[20];
	int Gram;
	int Kcal;
}Food;

Food FoodList[] = { // �迭�� ���� �Էµ� �����͵�
	{"���", 290, 53},
	{"�ٳ���", 110,  79},
	{"��", 375, 26},
	{"���", 100, 38},
	{"����", 215, 31},
	{"������ġ", 190, 421},
	{"������", 150, 229},
	{"�߰�����", 280, 170},
	{"ABC�ֽ�", 100, 32},
	{"�ø���", 55, 383},
	{"��", 210, 140},
	{"���", 290, 268},
	{"������", 430, 173},
	{"ī��", 200, 379},
	{"����¥��", 100, 90},
	{"ġŲ", 650, 1649},
	{"��Ʈ��", 45, 362},
	{"���", 550, 526}
};

char SaveName[SIZE][20]; // �Էµ� ���� �����ϴ� ���� 2���� �迭
int SaveGram[SIZE];
int SaveKcal[SIZE];


int TotalKcal() {

	int TotalKcal = 0;
	
	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < sizeof(FoodList)/sizeof(FoodList[0]); j++){
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) {	
				TotalKcal += FoodList[j].Kcal;
			}				
		}
	}
	return TotalKcal;
}

int printKcal() {


	for (int i = 0; i < SIZE; i++) { // size ���� ����� ���� 20���� �����س���
		for (int j = 0; j < sizeof(FoodList) / sizeof(FoodList[0]); j++) {
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) { // ���ڿ��� ����, ���ڵ� ���� ��
				GotoXY(x, y + 7);
				printf("%s %d g�� Į�θ��� %d kcal��.\n", FoodList[j].FoodName, FoodList[j].Gram, FoodList[j].Kcal);
				
				GotoXY(x, y + 20);
				KcalGraph(TotalKcal());						// �׷��� ���
			}
		}
	}
}

int RecordDiet() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < sizeof(FoodList) / sizeof(FoodList[0]); j++) {
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) {

				SaveKcal[i] = FoodList[j].Kcal;
				GotoXY(x+8, i + 10);
				printf("%s %d g %d kcal\n", SaveName[i], SaveGram[i], FoodList[j].Kcal);			// �Էµ� �Ĵ� ���� ���
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		GotoXY(x, i + 15);
		printf("----------------------------------\n");
		GotoXY(x+8, i + 16);
		printf("�� �հ� : %d kcal \n", TotalKcal(TotalKcal));
		break;
	}
	Sleep(3000);
	system("cls");
}

int FoodRecord() {
	CursorA();
	int i = 0;
	while(1){

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

		GotoXY(x, y);
		printf("����������������������������������������������������������������\n\n");
		GotoXY(x, y + 2);
		printf("     ���� ���� ���� :                      ");
		GotoXY(x, y + 4);
		printf("     ���� �� : ___ g                 ");
		GotoXY(x, y + 6);
		printf("����������������������������������������������������������������\n");
		
		GotoXY(x + 22, y + 2);
		scanf(" %s", SaveName[i]);
		GotoXY(x + 15, y + 4);
		scanf(" %d", &SaveGram[i]);
		i++;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		printKcal();
				
		if (menuChoice() == 20) {
			break;

		}

		system("cls");
		
	} 
	
	system("cls");
}