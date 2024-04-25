#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Cursor.h"
#define UP 1
#define DOWN 2
#define SPACE 3

void init_1(void) {
	system("mode con:cols=185 lines=100 | title take off calories"); // �ܼ�â ũ�� ����
}


void gotoxy(int x, int y) { // �ܼ�â ��ǥ ���
	HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consolehandle, pos);
}

// ���� ��ǥ�� ���� ��� �Լ�
void printT() {
	int colorNum = 12;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(10, 1);  printf("�������\n");
	gotoxy(10, 2);	printf("�������\n");
	gotoxy(8, 3);	printf("    ���    \n");
	gotoxy(8, 4);   printf("    ���    \n");
	gotoxy(8, 5);	printf("    ���    \n");
	gotoxy(8, 6);	printf("    ���    \n");
	gotoxy(8, 7);	printf("    ���    \n");
	gotoxy(8, 8);	printf("    ���    \n");
}
void printa1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(14, 3);	printf("    ���    \n");
	gotoxy(15, 4);  printf("  �����  \n");
	gotoxy(15, 5);	printf(" ���  ��� \n");
	gotoxy(15, 6);	printf("���������\n");
	gotoxy(15, 7);	printf("���    ���\n");
	gotoxy(15, 8);	printf("���    ���\n");
}
void printk() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(24, 3);	printf("���  ��� \n");
	gotoxy(24, 4);  printf("��� ���  \n");
	gotoxy(24, 5);	printf("�����   \n");
	gotoxy(24, 6);	printf("�����   \n");
	gotoxy(24, 7);	printf("���  ��� \n");
	gotoxy(24, 8);	printf("���   ���\n");
}
void printe() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(31, 3);	printf(" �����  \n");
	gotoxy(31, 4);  printf("���   ���\n");
	gotoxy(31, 5);	printf("���   ���\n");
	gotoxy(31, 6);	printf("������ \n");
	gotoxy(31, 7);	printf("���       \n");
	gotoxy(31, 8);	printf(" ������\n");
}
void printO() {
	int colorNum = 11;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(42, 1);  printf("   �����   \n");
	gotoxy(42, 2);	printf("  �������  \n");
	gotoxy(42, 3);	printf(" ���    ��� \n");
	gotoxy(42, 4);  printf("���      ���\n");
	gotoxy(42, 5);	printf("���      ���\n");
	gotoxy(42, 6);	printf(" ���    ��� \n");
	gotoxy(42, 7);	printf("  �������  \n");
	gotoxy(42, 8);	printf("   �����   \n");
}
void print_f1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(53, 3);	printf("������\n");
	gotoxy(53, 4);  printf("������\n");
	gotoxy(53, 5);	printf("���      \n");
	gotoxy(53, 6);	printf("������\n");
	gotoxy(53, 7);	printf("���      \n");
	gotoxy(53, 8);	printf("���      \n");
}
void print_f2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(59, 3);	printf("������\n");
	gotoxy(59, 4);  printf("������\n");
	gotoxy(59, 5);	printf("���      \n");
	gotoxy(59, 6);	printf("������\n");
	gotoxy(59, 7);	printf("���      \n");
	gotoxy(59, 8);	printf("���      \n");
}
void printC() {
	int colorNum = 2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	gotoxy(5, 9);   printf("   ������ \n");
	gotoxy(5, 10);	printf("  ������  \n");
	gotoxy(5, 11);	printf(" ���         \n");
	gotoxy(5, 12);  printf("���          \n");
	gotoxy(5, 13);	printf("���          \n");
	gotoxy(5, 14);	printf(" ���         \n");
	gotoxy(5, 15);	printf("  ������  \n");
	gotoxy(5, 16);	printf("    ������\n");
}
void printa2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(15, 11);	printf("   ���    \n");
	gotoxy(15, 12); printf("  �����  \n");
	gotoxy(15, 13);	printf(" ���  ��� \n");
	gotoxy(15, 14);	printf("���������\n");
	gotoxy(15, 15);	printf("���    ���\n");
	gotoxy(15, 16);	printf("���    ���\n");
}
void printl() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(24, 11);	printf("���      \n");
	gotoxy(24, 12); printf("���      \n");
	gotoxy(24, 13);	printf("���      \n");
	gotoxy(24, 14);	printf("���      \n");
	gotoxy(24, 15);	printf("������\n");
	gotoxy(24, 16);	printf("������\n");
}
void printo() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(29, 11);	printf("  �����  \n");
	gotoxy(29, 12); printf(" ������� \n");
	gotoxy(29, 13);	printf("���    ���\n");
	gotoxy(29, 14);	printf("���    ���\n");
	gotoxy(29, 15);	printf(" ������� \n");
	gotoxy(29, 16);	printf("  �����  \n");
}
void printr() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(38, 11);	printf(" �����   \n");
	gotoxy(38, 12); printf("���   ��� \n");
	gotoxy(38, 13);	printf("���   ��� \n");
	gotoxy(38, 14);	printf("������  \n");
	gotoxy(38, 15);	printf("���   ��� \n");
	gotoxy(38, 16);	printf("���    ���\n");
}
void printi() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(47, 11);	printf("�������\n");
	gotoxy(47, 12); printf("�������\n");
	gotoxy(47, 13);	printf("  ���  \n");
	gotoxy(47, 14);	printf("  ���  \n");
	gotoxy(47, 15);	printf("�������\n");
	gotoxy(47, 16);	printf("�������\n");
}
void printe2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(54, 11);	printf(" �����  \n");
	gotoxy(54, 12); printf("���   ���\n");
	gotoxy(54, 13);	printf("���   ���\n");
	gotoxy(54, 14);	printf("������ \n");
	gotoxy(54, 15);	printf("���       \n");
	gotoxy(54, 16);	printf(" ������\n");
}
void prints() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	gotoxy(62, 11);	printf(" ����� \n");
	gotoxy(62, 12); printf("���      \n");
	gotoxy(62, 13);	printf(" ����� \n");
	gotoxy(62, 14);	printf("    ���\n");
	gotoxy(62, 15);	printf("���  ���\n");
	gotoxy(62, 16);	printf(" ����� \n");
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
	printf("> ����~ �����ٰ�! (�ޡ��)\n");
	gotoxy(x, y + 2);
	printf("�Ⱦ�! �� �����ٷ���-_-)\n");

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
		case SPACE: {	// �����̽��� �Է� �� ���
			return y - 24;
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
		prints_ch5();
		gotoxy(22, 25);
		printf("���� ���� �Ĵ��� �����ٷ�?\n");
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

// Į�θ� �հ�� ���� ����/���� ȭ�� �Լ�
// int last_screen() {
//	if (Totalkcal < 1500) {
//	prints_ch2();
//	gotoxy(22, 25);
//	printf("������ �Ĵܰ��� ����!!\n");
//	gotoxy(22, 26);
//	printf("�ʹ� ������? ���ϵ� ������ؤ���\n");
//}
// else {
//  prints_ch4();
//  gotoxy(22, 25);
//	printf("������ �Ĵܰ��� ���Ф�.��\n");
//	gotoxy(22, 26);
//	printf("�����Ƥ�.�� �׷� �� ����.. ������ �� �� �غ���!\n");
//	}
//}


int main() {

	Cursor(); // Ŀ�� ���ִ� �Լ�

	printT(); printa1(); printk(); printe();
	printO(); print_f1(); print_f2();
	printC(); printa2(); printl(); printo(); printr(); printi(); printe2(); prints();

	prints_ch1();

	Sleep(10000);
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	system("cls");  // ����ȭ�� ��ȯ

	char name[100]; // ����� �̸� �Է¹ޱ�
	gotoxy(23, 12);
	printf("���� �̸��� �����ٷ�?\n\n");
	gotoxy(28, 14);
	scanf("%s", name);	
	system("cls");

	Cursor(); // Ŀ�� ���ִ� �Լ�

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