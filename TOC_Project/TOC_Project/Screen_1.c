#include<stdio.h>
#include <Windows.h>


void init(void) {
	system("mode con:cols=180 lines=100 | title take off calories"); // �ܼ�â ũ�� ����
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
	printf("��\n");
	gotoxy(27, 10);
	printf("�ƴϿ�\n");

}
;

int main() {
	char name[100];
	gotoxy(47, 10);
	printf("���� �̸��� �����ٷ�?\n\n");
	gotoxy(55, 12);
	scanf("%s",name);	// ������� �̸� �Է�
	system("cls");

	// ĳ���Ϳ��� ��ȭ 
	printf("�ȳ�? ���� %s(��)��� ��!\n", name);
	Sleep(3000);
	system("cls");
	printf("������ �ݰ���!!\n");
	Sleep(3000);
	system("cls");
	printf("��� ���� ���� ���� ��� ���Ƥ�.��\n");
	Sleep(3000);
	system("cls");
	printf("�Ĵܰ����� �ʿ��Ұ� ����!!\n");
	Sleep(3000);
	system("cls");
	printf("�Ĵܰ��� �� �����ٷ�?\n");

	// ������ ����

	choice();

}