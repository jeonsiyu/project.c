#include<stdio.h>
#include <Windows.h>
#define UP 1
#define DOWN 2
#define SPADE 3


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
		case SPADE: {	// �����̵尡 �Է� �� ���
			return y - 17;
			break;
		}
		}
	}
}

int main() {
	char name[100];
	gotoxy(28, 12);
	printf("���� �̸��� �����ٷ�?\n\n");
	gotoxy(35, 14);
	scanf("%s",name);	// ������� �̸� �Է�
	system("cls");

	// ĳ���Ϳ��� ��ȭ 
	gotoxy(24, 25);
	printf("�ȳ�? ���� %s(��)��� ��!\n", name);
	Sleep(3000);
	system("cls");
	gotoxy(25, 25);
	printf("������ �ݰ���!!\n");
	Sleep(3000);
	system("cls");
	gotoxy(22, 25);
	printf("��� ���� ���� ���� ��� ���Ƥ�.��\n");
	Sleep(3000);
	system("cls");
	gotoxy(24, 25);
	printf("�Ĵܰ����� �ʿ��Ұ� ����!!\n");
	Sleep(3000);
	system("cls");
	gotoxy(24, 25);
	printf("�Ĵܰ��� �� �����ٷ�?\n");
	Sleep(3000);
	system("cls");


	// ������ ����
	choice();

}