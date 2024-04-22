#include<stdio.h>
#include <Windows.h>


void init(void) {
	system("mode con:cols=180 lines=100 | title take off calories"); // 콘솔창 크기 변경
}

void gotoxy(int x, int y) {
	HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consolehandle, pos);
}

void choice() {
	gotoxy(10, 15);
	printf("예\n");
	gotoxy(27, 10);
	printf("아니요\n");

}
;

int main() {
	char name[100];
	gotoxy(47, 10);
	printf("나의 이름을 지어줄래?\n\n");
	gotoxy(55, 12);
	scanf("%s",name);	// 사용자의 이름 입력
	system("cls");

	// 캐릭터와의 대화 
	printf("안녕? 나는 %s(이)라고 해!\n", name);
	Sleep(3000);
	system("cls");
	printf("만나서 반가워!!\n");
	Sleep(3000);
	system("cls");
	printf("요새 내가 살이 많이 찐거 같아ㅠ.ㅠ\n");
	Sleep(3000);
	system("cls");
	printf("식단관리가 필요할거 같아!!\n");
	Sleep(3000);
	system("cls");
	printf("식단관리 좀 도와줄래?\n");

	// 선택지 제시

	choice();

}