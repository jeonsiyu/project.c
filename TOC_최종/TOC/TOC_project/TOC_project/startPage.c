#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Cursor.h"
#include "GOTOXY.h" // ��ǥ ����� ���� ��������� �����Ͽ� ���
#define UP 1
#define DOWN 2
#define SPACE 3

void init_1(void) {
	system("mode con:cols=185 lines=100 | title take off calories"); // �ܼ�â ũ�� ����
}

// ���� ��ǥ�� ���� ��� �Լ�
void printT() {
	int colorNum = 12;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(10, 1);  printf("�������\n");
	GotoXY(10, 2);	printf("�������\n");
	GotoXY(8, 3);	printf("    ���    \n");
	GotoXY(8, 4);   printf("    ���    \n");
	GotoXY(8, 5);	printf("    ���    \n");
	GotoXY(8, 6);	printf("    ���    \n");
	GotoXY(8, 7);	printf("    ���    \n");
	GotoXY(8, 8);	printf("    ���    \n");
}
void printa1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(14, 3);	printf("    ���    \n");
	GotoXY(15, 4);  printf("  �����  \n");
	GotoXY(15, 5);	printf(" ���  ��� \n");
	GotoXY(15, 6);	printf("���������\n");
	GotoXY(15, 7);	printf("���    ���\n");
	GotoXY(15, 8);	printf("���    ���\n");
}
void printk() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(24, 3);	printf("���  ��� \n");
	GotoXY(24, 4);  printf("��� ���  \n");
	GotoXY(24, 5);	printf("�����   \n");
	GotoXY(24, 6);	printf("�����   \n");
	GotoXY(24, 7);	printf("���  ��� \n");
	GotoXY(24, 8);	printf("���   ���\n");
}
void printe() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(31, 3);	printf(" �����  \n");
	GotoXY(31, 4);  printf("���   ���\n");
	GotoXY(31, 5);	printf("���   ���\n");
	GotoXY(31, 6);	printf("������ \n");
	GotoXY(31, 7);	printf("���       \n");
	GotoXY(31, 8);	printf(" ������\n");
}
void printO() {
	int colorNum = 11;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(42, 1);  printf("   �����   \n");
	GotoXY(42, 2);	printf("  �������  \n");
	GotoXY(42, 3);	printf(" ���    ��� \n");
	GotoXY(42, 4);  printf("���      ���\n");
	GotoXY(42, 5);	printf("���      ���\n");
	GotoXY(42, 6);	printf(" ���    ��� \n");
	GotoXY(42, 7);	printf("  �������  \n");
	GotoXY(42, 8);	printf("   �����   \n");
}
void print_f1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(53, 3);	printf("������\n");
	GotoXY(53, 4);  printf("������\n");
	GotoXY(53, 5);	printf("���      \n");
	GotoXY(53, 6);	printf("������\n");
	GotoXY(53, 7);	printf("���      \n");
	GotoXY(53, 8);	printf("���      \n");
}
void print_f2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(59, 3);	printf("������\n");
	GotoXY(59, 4);  printf("������\n");
	GotoXY(59, 5);	printf("���      \n");
	GotoXY(59, 6);	printf("������\n");
	GotoXY(59, 7);	printf("���      \n");
	GotoXY(59, 8);	printf("���      \n");
}
void printC() {
	int colorNum = 2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(5, 9);   printf("   ������ \n");
	GotoXY(5, 10);	printf("  ������  \n");
	GotoXY(5, 11);	printf(" ���         \n");
	GotoXY(5, 12);  printf("���          \n");
	GotoXY(5, 13);	printf("���          \n");
	GotoXY(5, 14);	printf(" ���         \n");
	GotoXY(5, 15);	printf("  ������  \n");
	GotoXY(5, 16);	printf("    ������\n");
}
void printa2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(15, 11);	printf("   ���    \n");
	GotoXY(15, 12); printf("  �����  \n");
	GotoXY(15, 13);	printf(" ���  ��� \n");
	GotoXY(15, 14);	printf("���������\n");
	GotoXY(15, 15);	printf("���    ���\n");
	GotoXY(15, 16);	printf("���    ���\n");
}
void printl() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(24, 11);	printf("���      \n");
	GotoXY(24, 12); printf("���      \n");
	GotoXY(24, 13);	printf("���      \n");
	GotoXY(24, 14);	printf("���      \n");
	GotoXY(24, 15);	printf("������\n");
	GotoXY(24, 16);	printf("������\n");
}
void printo() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(29, 11);	printf("  �����  \n");
	GotoXY(29, 12); printf(" ������� \n");
	GotoXY(29, 13);	printf("���    ���\n");
	GotoXY(29, 14);	printf("���    ���\n");
	GotoXY(29, 15);	printf(" ������� \n");
	GotoXY(29, 16);	printf("  �����  \n");
}
void printr() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(38, 11);	printf(" �����   \n");
	GotoXY(38, 12); printf("���   ��� \n");
	GotoXY(38, 13);	printf("���   ��� \n");
	GotoXY(38, 14);	printf("������  \n");
	GotoXY(38, 15);	printf("���   ��� \n");
	GotoXY(38, 16);	printf("���    ���\n");
}
void printi() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(47, 11);	printf("�������\n");
	GotoXY(47, 12); printf("�������\n");
	GotoXY(47, 13);	printf("  ���  \n");
	GotoXY(47, 14);	printf("  ���  \n");
	GotoXY(47, 15);	printf("�������\n");
	GotoXY(47, 16);	printf("�������\n");
}
void printe2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(54, 11);	printf(" �����  \n");
	GotoXY(54, 12); printf("���   ���\n");
	GotoXY(54, 13);	printf("���   ���\n");
	GotoXY(54, 14);	printf("������ \n");
	GotoXY(54, 15);	printf("���       \n");
	GotoXY(54, 16);	printf(" ������\n");
}
void prints() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(62, 11);	printf(" ����� \n");
	GotoXY(62, 12); printf("���      \n");
	GotoXY(62, 13);	printf(" ����� \n");
	GotoXY(62, 14);	printf("    ���\n");
	GotoXY(62, 15);	printf("���  ���\n");
	GotoXY(62, 16);	printf(" ����� \n");
}

//ǥ���� ĳ���� ����Լ�
void prints_ch1() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(25, 18);	printf("        ��������           \n");
	GotoXY(25, 19);	printf("      �����������       \n");
	GotoXY(25, 20);	printf("    �������  �������   \n");
	GotoXY(25, 21);	printf("   �������    �������  \n");
	GotoXY(26, 22);	printf(" ���              ���          \n");
	GotoXY(26, 23);	printf(" ��     ��    ��     ��          \n");
	GotoXY(26, 24);	printf(" ��       ��        ��           \n");
	GotoXY(26, 25);	printf("  ���            ���           \n");
	GotoXY(26, 26);	printf("    ��    ��    ��               \n");
	GotoXY(26, 27);	printf("   ��     ��     ��              \n");
	GotoXY(26, 28);	printf("   ��������������    \n");
	GotoXY(26, 29);	printf("    ��         ��                \n");

}
void prints_ch2() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 5);	printf("         ���������         \n");
	GotoXY(23, 6);	printf("        �����������      \n");
	GotoXY(23, 7);	printf("      ��������������  \n");
	GotoXY(23, 8);	printf("     ������     ������    \n");
	GotoXY(23, 9);	printf("    �����         �����     \n");
	GotoXY(23, 10);	printf("   ���               ���        \n");
	GotoXY(23, 11);	printf("   ��    ���     ���    ��      \n");
	GotoXY(23, 12);	printf("   ��   ��  ��   ��  ��   ��      \n");
	GotoXY(23, 13);	printf("��   ��       ��       ��  ��     \n");
	GotoXY(23, 14);	printf(" ��   ��            ��   ��       \n");
	GotoXY(23, 15);	printf("   ��  ��          ��  ��         \n");
	GotoXY(23, 16);	printf("     ��      ��     ��            \n");
	GotoXY(23, 17);	printf("    ��       ��      ��           \n");
	GotoXY(23, 18);	printf("     ��            ��             \n");
	GotoXY(23, 19);	printf("     ��������������� \n");
	GotoXY(23, 20);	printf("       ��        ��               \n");
	GotoXY(23, 21);	printf("      ��          ��              \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void prints_ch4() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 5);	printf("         ���������         \n");
	GotoXY(23, 6);	printf("       �������������   \n");
	GotoXY(23, 7);	printf("      ���������������\n");
	GotoXY(23, 8);	printf("     �������    ������� \n");
	GotoXY(23, 9);	printf("    �����          �����    \n");
	GotoXY(23, 10);	printf("   ���               ���        \n");
	GotoXY(23, 11);	printf("   ��   _____  _____  ��  \n");
	GotoXY(23, 12);	printf("   ��    | |    | |   ��        \n");
	GotoXY(23, 13);	printf("    ��       ��       ��           \n");
	GotoXY(23, 14);	printf("     ��            ��             \n");
	GotoXY(23, 15);	printf("      ��          ��              \n");
	GotoXY(23, 16);	printf("     ��      ��     ��            \n");
	GotoXY(23, 17);	printf("    ��       ��      ��           \n");
	GotoXY(23, 18);	printf("  ��  ��            ��  ��        \n");
	GotoXY(23, 19);	printf("     ��������������� \n");
	GotoXY(23, 20);	printf("       ��        ��               \n");
	GotoXY(23, 21);	printf("       ��        ��               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void prints_ch5() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 5);	printf("         ���������         \n");
	GotoXY(23, 6);	printf("       �������������   \n");
	GotoXY(23, 7);	printf("      ���������������\n");
	GotoXY(23, 8);	printf("     �������    ������� \n");
	GotoXY(23, 9);	printf("    �����          �����    \n");
	GotoXY(23, 10);	printf("   ���               ���        \n");
	GotoXY(23, 11);	printf("   ��                 ��  \n");
	GotoXY(23, 12);	printf("   ��     ��     ��     ��        \n");
	GotoXY(23, 13);	printf("    ��       ��       ��           \n");
	GotoXY(23, 14);	printf("     ��            ��             \n");
	GotoXY(23, 15);	printf("      ��          ��              \n");
	GotoXY(23, 16);	printf("     ��      ��     ��            \n");
	GotoXY(23, 17);	printf("    ��       ��      ��           \n");
	GotoXY(23, 18);	printf("  ��  ��            ��  ��        \n");
	GotoXY(23, 19);	printf("     ��������������� \n");
	GotoXY(23, 20);	printf("       ��        ��               \n");
	GotoXY(23, 21);	printf("       ��        ��               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

// ����Ű ����
int keycontrol() {
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

// �Ĵܽ��� ������ 
int choice() {
	int x = 25;
	int y = 24;
	prints_ch5();
	GotoXY(x - 2, y); // -2��">"�� ����ϱ� ���� ���
	printf("> ����~ �����ٰ�! (�ޡ��)\n");
	GotoXY(x, y + 2);
	printf("�Ⱦ�! �� �����ٷ���-_-)\n");

	while (1) { // ���� �ݺ��� ���
		int n = keycontrol();
		switch (n) {
		case UP: {	// UP(W)�� �Է� �� ���
			if (y < 25) {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y + 2);
				printf(">");

				y += 2;
			}
			else {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y - 2);
				printf(">");

				y -= 2;
			}
			break;
		}
		case DOWN: {	// DOWN(s)�� �Է� �� ���
			if (y > 25) {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y - 2);
				printf(">");

				y -= 2;
			}

			else {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y + 2);
				printf(">");

				y += 2;

			}
			break;
		}
		case SPACE: {	// �����̽��� �Է� �� ���
			return y - 24;
		}
		}
	}
}

void choice_code() {
	int choice_code = choice();
	if (choice_code == 0) {
		system("cls");
		prints_ch2();
		GotoXY(19, 25);
		printf("��ȣ~ ����! �׷� �ٷ� �������ڤ�_��\n");
		waitForSpaceBar();
		system("cls");
		prints_ch5();
		GotoXY(22, 25);
		printf("���� ���� �Ĵ��� �����ٷ�?\n");
		waitForSpaceBar();
		system("cls");

	}
	else {
		system("cls");
		prints_ch4();
		GotoXY(22, 25);
		printf("�˾Ҿ�.. �׷� ������ �ٽ� �����\n");
		
		return exit(0);
	}
}

int waitForSpaceBar() {
	int spacePressed = 0; 
	DWORD startTicks = GetTickCount(); 

	while (!spacePressed) {
		if (_kbhit()) { 
			char input = getch();
			if (input == ' ') { 
				spacePressed = 1; 
				break; 
			}
		}

		DWORD currentTicks = GetTickCount();
		if (currentTicks - startTicks >= 3000) {
			break; 
		}

		Sleep(100); 
	}
}

char name[100]; 

int start() {

	Cursor(); 

	printT(); printa1(); printk(); printe();
	printO(); print_f1(); print_f2();
	printC(); printa2(); printl(); printo(); printr(); printi(); printe2(); prints();

	prints_ch1();

	Sleep(10000);
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	system("cls");  // ����ȭ�� ��ȯ

	CursorA();
	GotoXY(23, 12);
	printf("���� �̸��� �����ٷ�?\n\n");
	GotoXY(28, 14);
	scanf("%s", name);
	getchar();
	system("cls");

	GotoXY(23, 12);
	getSex();
	system("cls");

	GotoXY(23, 12);
	getWeight();
	system("cls");

	Cursor(); // Ŀ�� ���ִ� �Լ�

	// ĳ���Ϳ��� ��ȭ 
	prints_ch5();
	GotoXY(22, 25);
	printf("�ȳ�? ���� %s(��)��� ��!\n", name);
	waitForSpaceBar();
	system("cls");

	prints_ch2();
	GotoXY(28, 25);
	printf("������ �ݰ���!!\n");
	waitForSpaceBar();
	system("cls");

	prints_ch4();
	GotoXY(20, 25);
	printf("��� ���� ���� ���� ��� ���Ƥ�.��\n");
	waitForSpaceBar();
	system("cls");

	prints_ch4();
	GotoXY(22, 25);
	printf("�Ĵܰ����� �ʿ��� �� ����!!\n");
	waitForSpaceBar();
	system("cls");

	prints_ch5();
	GotoXY(23, 25);
	printf("�Ĵܰ��� �� �����ٷ�?\n");
	waitForSpaceBar();
	system("cls");

	// ������ ����
	choice_code();
}