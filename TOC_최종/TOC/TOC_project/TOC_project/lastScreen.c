#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


#define UP 1
#define DOWN 2
#define SPACE 3

void prints_ch2_1() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 2);	printf("         ���������         \n");
	GotoXY(23, 3);	printf("        �����������      \n");
	GotoXY(23, 4);	printf("      ��������������  \n");
	GotoXY(23, 5);	printf("     ������     ������    \n");
	GotoXY(23, 6);	printf("    �����         �����     \n");
	GotoXY(23, 7);	printf("   ���               ���        \n");
	GotoXY(23, 8);	printf("   ��    ���     ���    ��      \n");
	GotoXY(23, 9);	printf("   ��   ��  ��   ��  ��   ��      \n");
	GotoXY(23, 10);	printf("��   ��       ��       ��  ��     \n");
	GotoXY(23, 11);	printf(" ��   ��            ��   ��       \n");
	GotoXY(23, 12);	printf("   ��  ��          ��  ��         \n");
	GotoXY(23, 13);	printf("     ��      ��     ��            \n");
	GotoXY(23, 14);	printf("    ��       ��      ��           \n");
	GotoXY(23, 15);	printf("     ��            ��             \n");
	GotoXY(23, 16);	printf("     ��������������� \n");
	GotoXY(23, 17);	printf("       ��        ��               \n");
	GotoXY(23, 18);	printf("      ��          ��              \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void prints_ch4_1() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 2);	printf("         ���������         \n");
	GotoXY(23, 3);	printf("       �������������   \n");
	GotoXY(23, 4);	printf("      ���������������\n");
	GotoXY(23, 5);	printf("     �������    ������� \n");
	GotoXY(23, 6);	printf("    �����          �����    \n");
	GotoXY(23, 7);	printf("   ���               ���        \n");
	GotoXY(23, 8);	printf("   ��   _____  _____  ��  \n");
	GotoXY(23, 9);	printf("   ��    | |    | |   ��        \n");
	GotoXY(23, 10);	printf("    ��       ��       ��           \n");
	GotoXY(23, 11);	printf("     ��            ��             \n");
	GotoXY(23, 12);	printf("      ��          ��              \n");
	GotoXY(23, 13);	printf("     ��      ��     ��            \n");
	GotoXY(23, 14);	printf("    ��       ��      ��           \n");
	GotoXY(23, 15);	printf("  ��  ��            ��  ��        \n");
	GotoXY(23, 16);	printf("     ��������������� \n");
	GotoXY(23, 17);	printf("       ��        ��               \n");
	GotoXY(23, 18);	printf("       ��        ��               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

int last_screen() {

	//	Į�θ� �հ�� ���� ���� / ���� ȭ�� �Լ�
	if (TotalKcal() < personalKcal()) {
		prints_ch2_1();
		GotoXY(25, 20);
		printf("������ �Ĵܰ��� ����!!\n");
		GotoXY(20, 21);
		printf("�ʹ� ������? ���ϵ� ������ؤ���\n");
		printf("\n");
		printExercise();
	}
	else {
		prints_ch4_1();
		GotoXY(24, 20);
		printf("������ �Ĵܰ��� ���Ф�.��\n");
		GotoXY(14, 21);
		printf("�����Ƥ�.�� �׷� �� ����.. ������ �� �� �غ���!\n");
		printf("\n");
		printExercise();
	}
}
