#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void init(void) {
	system("mode con:cols=185 lines=70 | title take off calories"); // 콘솔창 크기 변경
}

void gotoxy(int x, int y) { // 콘솔창 좌표 찍기
	HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consolehandle, pos);
}

// 제목 좌표로 색별로 출력
void printT() {
	int colorNum = 12;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(12, 2);  printf("■■■■■■\n");
	gotoxy(12, 3);	printf("■■■■■■\n");
	gotoxy(12, 4);	printf("    ■■    \n");
	gotoxy(12, 5);  printf("    ■■    \n");
	gotoxy(12, 6);	printf("    ■■    \n");
	gotoxy(12, 7);	printf("    ■■    \n");
	gotoxy(12, 8);	printf("    ■■    \n");
	gotoxy(12, 9);	printf("    ■■    \n");
}
void printa1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	
	gotoxy(21, 4);	printf("    ■■    \n");
	gotoxy(21, 5);  printf("  ■■■■  \n");
	gotoxy(21, 6);	printf(" ■■  ■■ \n");
	gotoxy(21, 7);	printf("■■■■■■\n");
	gotoxy(21, 8);	printf("■■    ■■\n");
	gotoxy(21, 9);	printf("■■    ■■\n");
}
void printk() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(34, 4);	printf("■■  ■■ \n");
	gotoxy(34, 5);  printf("■■ ■■  \n");
	gotoxy(34, 6);	printf("■■■■   \n");
	gotoxy(34, 7);	printf("■■■■   \n");
	gotoxy(34, 8);	printf("■■  ■■ \n");
	gotoxy(34, 9);	printf("■■   ■■\n");
}
void printe() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(45, 4);	printf(" ■■■■  \n");
	gotoxy(45, 5);  printf("■■   ■■\n");
	gotoxy(45, 6);	printf("■■   ■■\n");
	gotoxy(45, 7);	printf("■■■■■ \n");
	gotoxy(45, 8);	printf("■■       \n");
	gotoxy(45, 9);	printf(" ■■■■■\n");
}
void printO() {
	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(58, 2);  printf("   ■■■■   \n");
	gotoxy(58, 3);	printf("  ■■■■■  \n");
	gotoxy(58, 4);	printf(" ■■    ■■ \n");
	gotoxy(58, 5);  printf("■■      ■■\n");
	gotoxy(58, 6);	printf("■■      ■■\n");
	gotoxy(58, 7);	printf(" ■■    ■■ \n");
	gotoxy(58, 8);	printf("  ■■■■■  \n");
	gotoxy(58, 9);	printf("   ■■■■   \n");

}
void print_f1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(73, 4);	printf("■■■■■\n");
	gotoxy(73, 5);  printf("■■■■■\n");
	gotoxy(73, 6);	printf("■■      \n");
	gotoxy(73, 7);	printf("■■■■■\n");
	gotoxy(73, 8);	printf("■■      \n");
	gotoxy(73, 9);	printf("■■      \n");
}
void print_f2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(84, 4);	printf("■■■■■\n");
	gotoxy(84, 5);  printf("■■■■■\n");
	gotoxy(84, 6);	printf("■■      \n");
	gotoxy(84, 7);	printf("■■■■■\n");
	gotoxy(84, 8);	printf("■■      \n");
	gotoxy(84, 9);	printf("■■      \n");
}
void printC() {
	int colorNum = 2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(6, 11);  printf("   ■■■■■ \n");
	gotoxy(6, 12);	printf("  ■■■■■  \n");
	gotoxy(6, 13);	printf(" ■■         \n");
	gotoxy(6, 14);  printf("■■          \n");
	gotoxy(6, 15);	printf("■■          \n");
	gotoxy(6, 16);	printf(" ■■         \n");
	gotoxy(6, 17);	printf("  ■■■■■  \n");
	gotoxy(6, 18);	printf("    ■■■■■\n");
}
void printa2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(21, 13);	printf("    ■■    \n");
	gotoxy(21, 14); printf("  ■■■■  \n");
	gotoxy(21, 15);	printf(" ■■  ■■ \n");
	gotoxy(21, 16);	printf("■■■■■■\n");
	gotoxy(21, 17);	printf("■■    ■■\n");
	gotoxy(21, 18);	printf("■■    ■■\n");
}
void printl() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(34, 13);	printf("■■      \n");
	gotoxy(34, 14); printf("■■      \n");
	gotoxy(34, 15);	printf("■■      \n");
	gotoxy(34, 16);	printf("■■      \n");
	gotoxy(34, 17);	printf("■■■■■\n");
	gotoxy(34, 18);	printf("■■■■■\n");
}
void printo() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(44, 13);	printf("  ■■■■  \n");
	gotoxy(44, 14); printf(" ■■■■■ \n");
	gotoxy(44, 15);	printf("■■    ■■\n");
	gotoxy(44, 16);	printf("■■    ■■\n");
	gotoxy(44, 17);	printf(" ■■■■■ \n");
	gotoxy(44, 18);	printf("  ■■■■  \n");
}
void printr() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(57, 13);	printf(" ■■■■   \n");
	gotoxy(57, 14); printf("■■   ■■ \n");
	gotoxy(57, 15);	printf("■■   ■■ \n");
	gotoxy(57, 16);	printf("■■■■■  \n");
	gotoxy(57, 17);	printf("■■   ■■ \n");
	gotoxy(57, 18);	printf("■■    ■■\n");
}
void printi() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(70, 13);	printf("■■■■\n");
	gotoxy(70, 14); printf("■■■■\n");
	gotoxy(70, 15);	printf("  ■■  \n");
	gotoxy(70, 16);	printf("  ■■  \n");
	gotoxy(70, 17);	printf("■■■■\n");
	gotoxy(70, 18);	printf("■■■■\n");
}
void printe2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(79, 13);	printf(" ■■■■  \n");
	gotoxy(79, 14); printf("■■   ■■\n");
	gotoxy(79, 15);	printf("■■   ■■\n");
	gotoxy(79, 16);	printf("■■■■■ \n");
	gotoxy(79, 17);	printf("■■       \n");
	gotoxy(79, 18);	printf(" ■■■■■\n");
}
void prints() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(91, 13);	printf(" ■■■■ \n");
	gotoxy(91, 14); printf("■■      \n");
	gotoxy(91, 15);	printf(" ■■■■ \n");
	gotoxy(91, 16);	printf("      ■■\n");
	gotoxy(91, 17);	printf("■■  ■■\n");
	gotoxy(91, 18);	printf(" ■■■■ \n");
}


int main() {

	printT(); printa1();  printk(); printe();
	printO(); print_f1(); print_f2();
	printC(); printa2();  printl(); printo(); printr(); printi(); printe2(); prints();
	
}