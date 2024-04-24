#include<stdio.h>
#include <Windows.h>
#define UP 1
#define DOWN 2
#define SPADE 3

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