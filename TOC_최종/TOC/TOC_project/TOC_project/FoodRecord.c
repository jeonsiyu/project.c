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

Food FoodList[] = { // 배열을 통해 입력된 데이터들
	{"사과", 290, 53},
	{"바나나", 110,  79},
	{"배", 375, 26},
	{"멜론", 100, 38},
	{"수박", 215, 31},
	{"샌드위치", 190, 421},
	{"샐러드", 150, 229},
	{"닭가슴살", 280, 170},
	{"ABC주스", 100, 32},
	{"시리얼", 55, 383},
	{"밥", 210, 140},
	{"돈까스", 290, 268},
	{"떡볶이", 430, 173},
	{"카레", 200, 379},
	{"저당짜장", 100, 90},
	{"치킨", 650, 1649},
	{"오트밀", 45, 362},
	{"라면", 550, 526}
};

char SaveName[SIZE][20]; // 입력된 값을 저장하는 공간 2차원 배열
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


	for (int i = 0; i < SIZE; i++) { // size 값을 상수로 위에 20으로 선언해놨음
		for (int j = 0; j < sizeof(FoodList) / sizeof(FoodList[0]); j++) {
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) { // 문자열이 같고, 숫자도 같을 때
				GotoXY(x, y + 7);
				printf("%s %d g의 칼로리는 %d kcal야.\n", FoodList[j].FoodName, FoodList[j].Gram, FoodList[j].Kcal);
				
				GotoXY(x, y + 20);
				KcalGraph(TotalKcal());						// 그래프 출력
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
				printf("%s %d g %d kcal\n", SaveName[i], SaveGram[i], FoodList[j].Kcal);			// 입력된 식단 누적 기록
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		GotoXY(x, i + 15);
		printf("----------------------------------\n");
		GotoXY(x+8, i + 16);
		printf("총 합계 : %d kcal \n", TotalKcal(TotalKcal));
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
		printf("┌──────────────────────────────┐\n\n");
		GotoXY(x, y + 2);
		printf("     오늘 먹은 음식 :                      ");
		GotoXY(x, y + 4);
		printf("     음식 양 : ___ g                 ");
		GotoXY(x, y + 6);
		printf("└──────────────────────────────┘\n");
		
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