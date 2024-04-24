#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
// #include "Cursor.h"
#define UP 0
#define DOWN 1
#define SPACE 2

void init(void) {
	system("mode con:cols=185 lines=100 | title take off calories"); // 콘솔창 크기 변경
}

void gotoxy(int x, int y) {
	HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consolehandle, pos);
}

//표정별 캐릭터 출력함수
void prints_ch1() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(25, 18);	printf("        ■■■■■■■           \n");
	gotoxy(25, 19);	printf("      ■■■■■■■■■■       \n");
	gotoxy(25, 20);	printf("    ■■■■■■  ■■■■■■   \n");
	gotoxy(25, 21);	printf("   ■■■■■■    ■■■■■■  \n");
	gotoxy(26, 22);	printf(" ■■              ■■          \n");
	gotoxy(26, 23);	printf(" ■     ■    ■     ■          \n");
	gotoxy(26, 24);	printf(" ■       ∇        ■           \n");
	gotoxy(26, 25);	printf("  ■■            ■■           \n");
	gotoxy(26, 26);	printf("    ■    ♥    ■               \n");
	gotoxy(26, 27);	printf("   ■     ♥     ■              \n");
	gotoxy(26, 28);	printf("   ■■■■■■■■■■■■■    \n");
	gotoxy(26, 29);	printf("    ■         ■                \n");

}
void prints_ch2() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ■■■■■■■■         \n");
	gotoxy(23, 6);	printf("        ■■■■■■■■■■      \n");
	gotoxy(23, 7);	printf("      ■■■■■■■■■■■■■  \n");
	gotoxy(23, 8);	printf("     ■■■■■     ■■■■■    \n");
	gotoxy(23, 9);	printf("    ■■■■         ■■■■     \n");
	gotoxy(23, 10);	printf("   ■■               ■■        \n");
	gotoxy(23, 11);	printf("   ■    ■■     ■■    ■      \n");
	gotoxy(23, 12);	printf("   ■   ■  ■   ■  ■   ■      \n");
	gotoxy(23, 13);	printf("■   ■       ∇       ■  ■     \n");
	gotoxy(23, 14);	printf(" ■   ■            ■   ■       \n");
	gotoxy(23, 15);	printf("   ■  ■          ■  ■         \n");
	gotoxy(23, 16);	printf("     ■      ♥     ■            \n");
	gotoxy(23, 17);	printf("    ■       ♥      ■           \n");
	gotoxy(23, 18);	printf("     ■            ■             \n");
	gotoxy(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	gotoxy(23, 20);	printf("       ■        ■               \n");
	gotoxy(23, 21);	printf("      ■          ■              \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch3() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ■■■■■■■■         \n");
	gotoxy(23, 6);	printf("       ■■■■■■■■■■■■   \n");
	gotoxy(23, 7);	printf("      ■■■■■■■■■■■■■■\n");
	gotoxy(23, 8);	printf("     ■■■■■■    ■■■■■■ \n");
	gotoxy(23, 9);	printf("    ■■■■          ■■■■    \n");
	gotoxy(23, 10);	printf("   ■■               ■■        \n");
	gotoxy(23, 11);	printf("   ■    ■■■■  ■■■■   ■  \n");
	gotoxy(23, 12);	printf("   ■     ●     ●     ■        \n");
	gotoxy(23, 13);	printf("    ■     _____     ■           \n");
	gotoxy(23, 14);	printf("     ■            ■             \n");
	gotoxy(23, 15);	printf("      ■          ■              \n");
	gotoxy(23, 16);	printf("     ■      ♥     ■            \n");
	gotoxy(23, 17);	printf("    ■       ♥      ■           \n");
	gotoxy(23, 18);	printf("  ■  ■            ■  ■        \n");
	gotoxy(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	gotoxy(23, 20);	printf("       ■        ■               \n");
	gotoxy(23, 21);	printf("       ■        ■               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch4() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ■■■■■■■■         \n");
	gotoxy(23, 6);	printf("       ■■■■■■■■■■■■   \n");
	gotoxy(23, 7);	printf("      ■■■■■■■■■■■■■■\n");
	gotoxy(23, 8);	printf("     ■■■■■■    ■■■■■■ \n");
	gotoxy(23, 9);	printf("    ■■■■          ■■■■    \n");
	gotoxy(23, 10);	printf("   ■■               ■■        \n");
	gotoxy(23, 11);	printf("   ■   _____  _____  ■  \n");
	gotoxy(23, 12);	printf("   ■    | |    | |   ■        \n");
	gotoxy(23, 13);	printf("    ■       ■       ■           \n");
	gotoxy(23, 14);	printf("     ■            ■             \n");
	gotoxy(23, 15);	printf("      ■          ■              \n");
	gotoxy(23, 16);	printf("     ■      ♥     ■            \n");
	gotoxy(23, 17);	printf("    ■       ♥      ■           \n");
	gotoxy(23, 18);	printf("  ■  ■            ■  ■        \n");
	gotoxy(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	gotoxy(23, 20);	printf("       ■        ■               \n");
	gotoxy(23, 21);	printf("       ■        ■               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch5() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ■■■■■■■■         \n");
	gotoxy(23, 6);	printf("       ■■■■■■■■■■■■   \n");
	gotoxy(23, 7);	printf("      ■■■■■■■■■■■■■■\n");
	gotoxy(23, 8);	printf("     ■■■■■■    ■■■■■■ \n");
	gotoxy(23, 9);	printf("    ■■■■          ■■■■    \n");
	gotoxy(23, 10);	printf("   ■■               ■■        \n");
	gotoxy(23, 11);	printf("   ■                 ■  \n");
	gotoxy(23, 12);	printf("   ■     ■     ■     ■        \n");
	gotoxy(23, 13);	printf("    ■       ▽       ■           \n");
	gotoxy(23, 14);	printf("     ■            ■             \n");
	gotoxy(23, 15);	printf("      ■          ■              \n");
	gotoxy(23, 16);	printf("     ■      ♥     ■            \n");
	gotoxy(23, 17);	printf("    ■       ♥      ■           \n");
	gotoxy(23, 18);	printf("  ■  ■            ■  ■        \n");
	gotoxy(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	gotoxy(23, 20);	printf("       ■        ■               \n");
	gotoxy(23, 21);	printf("       ■        ■               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch6() {
	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(23, 5);	printf("         ■■■■■■■■         \n");
	gotoxy(23, 6);	printf("       ■■■■■■■■■■■■   \n");
	gotoxy(23, 7);	printf("      ■■■■■■■■■■■■■■\n");
	gotoxy(23, 8);	printf("     ■■■■■■    ■■■■■■ \n");
	gotoxy(23, 9);	printf("    ■■■■          ■■■■    \n");
	gotoxy(23, 10);	printf("   ■■               ■■        \n");
	gotoxy(23, 11);	printf("   ■   ■■■■   ■■■■   ■  \n");
	gotoxy(23, 12);	printf("   ■     ■     ■     ■        \n");
	gotoxy(23, 13);	printf("    ■     _____     ■           \n");
	gotoxy(23, 14);	printf("     ■            ■             \n");
	gotoxy(23, 15);	printf("      ■          ■              \n");
	gotoxy(23, 16);	printf("     ■     ♥      ■            \n");
	gotoxy(23, 17);	printf("    ■      ♥       ■           \n");
	gotoxy(23, 18);	printf("  ■  ■            ■  ■        \n");
	gotoxy(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	gotoxy(23, 20);	printf("       ■        ■               \n");
	gotoxy(23, 21);	printf("       ■        ■               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}
// 방향키 설정
int keycontrol() {
	char getch();
	char temp = getch();

	if (temp == 'w' || temp == 'W') {
		return UP;
	}
	else if (temp == 's' || temp == 'S') {
		return DOWN;
	}
	else if (temp == ' ') {
		return SPACE;
	}
}

// 식단시작 선택지
int choice() {
	int x = 25;
	int y = 24;
	gotoxy(x - 2, y); // -2는">"를 출력하기 위해 사용
	printf("> 좋아~ 도와줄게! (＾▽＾)/(24번줄)\n");
	gotoxy(x, y + 2);
	printf("싫어! 안 도와줄래（-_-)(26번줄)\n");

	while (1) { // 무한 반복문 사용
		int n = keycontrol();
		switch (n) {
		case UP: {	// UP(W)이 입력 된 경우
			if (y < 25) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y + 2);
				printf(">");

				y += 2;
			}
			else {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y - 2);
				printf(">");

				y -= 2;
			}
			break;
		}
		case DOWN: {	// DOWN(s)이 입력 된 경우
			if (y > 25) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y - 2);
				printf(">");

				y -= 2;
			}

			else {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, y + 2);
				printf(">");

				y += 2;

			}
			break;
		}
		case SPACE: {	// 스페이드가 입력 된 경우
			return y - 24;
			break;
		}
		}
	}
}

int choice_code() {
	int choice_code = choice();
	if (choice_code == 0) {
		system("cls");
		prints_ch2();
		gotoxy(19, 25);
		printf("야호~ 고마워! 그럼 바로 시작하자ㅎ_ㅎ\n");
		Sleep(4000);
		system("cls");

	}
	else {
		system("cls");
		prints_ch4();
		gotoxy(22, 25);
		printf("알았어.. 그럼 다음에 다시 와줘ㅠ\n");
		return 0;

	}
}

int main() {
	char name[100];
	gotoxy(23, 12);
	printf("나의 이름을 지어줄래?\n\n");
	gotoxy(28, 14);
	scanf("%s",name);	// 사용자의 이름 입력
	system("cls");

	// Cursor() 커서 없애는 함수 필요

	// 캐릭터와의 대화 
	prints_ch5();
	gotoxy(22, 25);
	printf("안녕? 나는 %s(이)라고 해!\n", name);
	Sleep(3000);
	system("cls");

	prints_ch2();
	gotoxy(28, 25);
	printf("만나서 반가워!!\n");
	Sleep(3000);
	system("cls");

	prints_ch4();
	gotoxy(20, 25);
	printf("요새 내가 살이 많이 찐거 같아ㅠ.ㅠ\n");
	Sleep(3000);
	system("cls");

	prints_ch4();
	gotoxy(22, 25);
	printf("식단관리가 필요할 것 같아!!\n");
	Sleep(3000);
	system("cls");

	prints_ch5();
	gotoxy(23, 25);
	printf("식단관리 좀 도와줄래?\n");
	Sleep(3000);
	system("cls");

	// 선택지 제시
	choice_code();

}