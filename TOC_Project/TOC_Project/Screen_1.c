#include<stdio.h>
#include <Windows.h>
#define UP 1
#define DOWN 2
#define SPADE 3


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
		return SPADE;
	}
}

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
			if (y > 24) {
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
		case SPADE: {	// 스페이드가 입력 된 경우
			return y - 17;
			break;
		}
		}
	}
}

int main() {
	char name[100];
	gotoxy(28, 12);
	printf("나의 이름을 지어줄래?\n\n");
	gotoxy(35, 14);
	scanf("%s",name);	// 사용자의 이름 입력
	system("cls");

	// 캐릭터와의 대화 
	gotoxy(24, 25);
	printf("안녕? 나는 %s(이)라고 해!\n", name);
	Sleep(3000);
	system("cls");
	gotoxy(25, 25);
	printf("만나서 반가워!!\n");
	Sleep(3000);
	system("cls");
	gotoxy(22, 25);
	printf("요새 내가 살이 많이 찐거 같아ㅠ.ㅠ\n");
	Sleep(3000);
	system("cls");
	gotoxy(24, 25);
	printf("식단관리가 필요할거 같아!!\n");
	Sleep(3000);
	system("cls");
	gotoxy(24, 25);
	printf("식단관리 좀 도와줄래?\n");
	Sleep(3000);
	system("cls");


	// 선택지 제시
	choice();

}