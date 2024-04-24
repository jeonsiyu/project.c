#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
// #include "Cursor.h"
#define UP 0
#define DOWN 1
#define SPACE 2

void init(void) {
	system("mode con:cols=185 lines=100 | title take off calories"); // �ܼ�â ũ�� ����
}

void gotoxy(int x, int y) {
	HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consolehandle, pos);
}

//ǥ���� ĳ���� ����Լ�
void prints_ch1() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(25, 18);	printf("        ��������           \n");
	gotoxy(25, 19);	printf("      �����������       \n");
	gotoxy(25, 20);	printf("    �������  �������   \n");
	gotoxy(25, 21);	printf("   �������    �������  \n");
	gotoxy(26, 22);	printf(" ���              ���          \n");
	gotoxy(26, 23);	printf(" ��     ��    ��     ��          \n");
	gotoxy(26, 24);	printf(" ��       ��        ��           \n");
	gotoxy(26, 25);	printf("  ���            ���           \n");
	gotoxy(26, 26);	printf("    ��    ��    ��               \n");
	gotoxy(26, 27);	printf("   ��     ��     ��              \n");
	gotoxy(26, 28);	printf("   ��������������    \n");
	gotoxy(26, 29);	printf("    ��         ��                \n");

}
void prints_ch2() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ���������         \n");
	gotoxy(23, 6);	printf("        �����������      \n");
	gotoxy(23, 7);	printf("      ��������������  \n");
	gotoxy(23, 8);	printf("     ������     ������    \n");
	gotoxy(23, 9);	printf("    �����         �����     \n");
	gotoxy(23, 10);	printf("   ���               ���        \n");
	gotoxy(23, 11);	printf("   ��    ���     ���    ��      \n");
	gotoxy(23, 12);	printf("   ��   ��  ��   ��  ��   ��      \n");
	gotoxy(23, 13);	printf("��   ��       ��       ��  ��     \n");
	gotoxy(23, 14);	printf(" ��   ��            ��   ��       \n");
	gotoxy(23, 15);	printf("   ��  ��          ��  ��         \n");
	gotoxy(23, 16);	printf("     ��      ��     ��            \n");
	gotoxy(23, 17);	printf("    ��       ��      ��           \n");
	gotoxy(23, 18);	printf("     ��            ��             \n");
	gotoxy(23, 19);	printf("     ��������������� \n");
	gotoxy(23, 20);	printf("       ��        ��               \n");
	gotoxy(23, 21);	printf("      ��          ��              \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch3() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ���������         \n");
	gotoxy(23, 6);	printf("       �������������   \n");
	gotoxy(23, 7);	printf("      ���������������\n");
	gotoxy(23, 8);	printf("     �������    ������� \n");
	gotoxy(23, 9);	printf("    �����          �����    \n");
	gotoxy(23, 10);	printf("   ���               ���        \n");
	gotoxy(23, 11);	printf("   ��    �����  �����   ��  \n");
	gotoxy(23, 12);	printf("   ��     ��     ��     ��        \n");
	gotoxy(23, 13);	printf("    ��     _____     ��           \n");
	gotoxy(23, 14);	printf("     ��            ��             \n");
	gotoxy(23, 15);	printf("      ��          ��              \n");
	gotoxy(23, 16);	printf("     ��      ��     ��            \n");
	gotoxy(23, 17);	printf("    ��       ��      ��           \n");
	gotoxy(23, 18);	printf("  ��  ��            ��  ��        \n");
	gotoxy(23, 19);	printf("     ��������������� \n");
	gotoxy(23, 20);	printf("       ��        ��               \n");
	gotoxy(23, 21);	printf("       ��        ��               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch4() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ���������         \n");
	gotoxy(23, 6);	printf("       �������������   \n");
	gotoxy(23, 7);	printf("      ���������������\n");
	gotoxy(23, 8);	printf("     �������    ������� \n");
	gotoxy(23, 9);	printf("    �����          �����    \n");
	gotoxy(23, 10);	printf("   ���               ���        \n");
	gotoxy(23, 11);	printf("   ��   _____  _____  ��  \n");
	gotoxy(23, 12);	printf("   ��    | |    | |   ��        \n");
	gotoxy(23, 13);	printf("    ��       ��       ��           \n");
	gotoxy(23, 14);	printf("     ��            ��             \n");
	gotoxy(23, 15);	printf("      ��          ��              \n");
	gotoxy(23, 16);	printf("     ��      ��     ��            \n");
	gotoxy(23, 17);	printf("    ��       ��      ��           \n");
	gotoxy(23, 18);	printf("  ��  ��            ��  ��        \n");
	gotoxy(23, 19);	printf("     ��������������� \n");
	gotoxy(23, 20);	printf("       ��        ��               \n");
	gotoxy(23, 21);	printf("       ��        ��               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch5() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(23, 5);	printf("         ���������         \n");
	gotoxy(23, 6);	printf("       �������������   \n");
	gotoxy(23, 7);	printf("      ���������������\n");
	gotoxy(23, 8);	printf("     �������    ������� \n");
	gotoxy(23, 9);	printf("    �����          �����    \n");
	gotoxy(23, 10);	printf("   ���               ���        \n");
	gotoxy(23, 11);	printf("   ��                 ��  \n");
	gotoxy(23, 12);	printf("   ��     ��     ��     ��        \n");
	gotoxy(23, 13);	printf("    ��       ��       ��           \n");
	gotoxy(23, 14);	printf("     ��            ��             \n");
	gotoxy(23, 15);	printf("      ��          ��              \n");
	gotoxy(23, 16);	printf("     ��      ��     ��            \n");
	gotoxy(23, 17);	printf("    ��       ��      ��           \n");
	gotoxy(23, 18);	printf("  ��  ��            ��  ��        \n");
	gotoxy(23, 19);	printf("     ��������������� \n");
	gotoxy(23, 20);	printf("       ��        ��               \n");
	gotoxy(23, 21);	printf("       ��        ��               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void prints_ch6() {
	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(23, 5);	printf("         ���������         \n");
	gotoxy(23, 6);	printf("       �������������   \n");
	gotoxy(23, 7);	printf("      ���������������\n");
	gotoxy(23, 8);	printf("     �������    ������� \n");
	gotoxy(23, 9);	printf("    �����          �����    \n");
	gotoxy(23, 10);	printf("   ���               ���        \n");
	gotoxy(23, 11);	printf("   ��   �����   �����   ��  \n");
	gotoxy(23, 12);	printf("   ��     ��     ��     ��        \n");
	gotoxy(23, 13);	printf("    ��     _____     ��           \n");
	gotoxy(23, 14);	printf("     ��            ��             \n");
	gotoxy(23, 15);	printf("      ��          ��              \n");
	gotoxy(23, 16);	printf("     ��     ��      ��            \n");
	gotoxy(23, 17);	printf("    ��      ��       ��           \n");
	gotoxy(23, 18);	printf("  ��  ��            ��  ��        \n");
	gotoxy(23, 19);	printf("     ��������������� \n");
	gotoxy(23, 20);	printf("       ��        ��               \n");
	gotoxy(23, 21);	printf("       ��        ��               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}
// ����Ű ����
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

// �Ĵܽ��� ������
int choice() {
	int x = 25;
	int y = 24;
	gotoxy(x - 2, y); // -2��">"�� ����ϱ� ���� ���
	printf("> ����~ �����ٰ�! (�ޡ��)/(24����)\n");
	gotoxy(x, y + 2);
	printf("�Ⱦ�! �� �����ٷ���-_-)(26����)\n");

	while (1) { // ���� �ݺ��� ���
		int n = keycontrol();
		switch (n) {
		case UP: {	// UP(W)�� �Է� �� ���
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
		case DOWN: {	// DOWN(s)�� �Է� �� ���
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
		case SPACE: {	// �����̵尡 �Է� �� ���
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
		printf("��ȣ~ ����! �׷� �ٷ� �������ڤ�_��\n");
		Sleep(4000);
		system("cls");

	}
	else {
		system("cls");
		prints_ch4();
		gotoxy(22, 25);
		printf("�˾Ҿ�.. �׷� ������ �ٽ� �����\n");
		return 0;

	}
}

int main() {
	char name[100];
	gotoxy(23, 12);
	printf("���� �̸��� �����ٷ�?\n\n");
	gotoxy(28, 14);
	scanf("%s",name);	// ������� �̸� �Է�
	system("cls");

	// Cursor() Ŀ�� ���ִ� �Լ� �ʿ�

	// ĳ���Ϳ��� ��ȭ 
	prints_ch5();
	gotoxy(22, 25);
	printf("�ȳ�? ���� %s(��)��� ��!\n", name);
	Sleep(3000);
	system("cls");

	prints_ch2();
	gotoxy(28, 25);
	printf("������ �ݰ���!!\n");
	Sleep(3000);
	system("cls");

	prints_ch4();
	gotoxy(20, 25);
	printf("��� ���� ���� ���� ��� ���Ƥ�.��\n");
	Sleep(3000);
	system("cls");

	prints_ch4();
	gotoxy(22, 25);
	printf("�Ĵܰ����� �ʿ��� �� ����!!\n");
	Sleep(3000);
	system("cls");

	prints_ch5();
	gotoxy(23, 25);
	printf("�Ĵܰ��� �� �����ٷ�?\n");
	Sleep(3000);
	system("cls");

	// ������ ����
	choice_code();

}