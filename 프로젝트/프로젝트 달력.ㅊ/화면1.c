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
	gotoxy(20, 17);
	printf("�Ĵ��� �����ֽðڽ��ϱ�?\n");
	gotoxy(20, 20);
	printf("��\n");
	gotoxy(20, 21);
	printf("�ƴϿ�\n");

	}

int main() {
	char name[100];
	gotoxy(47, 10);
	printf("���� �̸��� �����ٷ�?\n\n");
	gotoxy(55, 12);
	scanf("%s", name);	// ������� �̸� �Է�
	system("cls");

	// ĳ���Ϳ��� ��ȭ 
	
	gotoxy(22, 25);
	printf("�ȳ�? ���� %s(��)��� ��!\n",name);
	Sleep(3000);
	system("cls");
	gotoxy(22, 25);
	printf("������ �ݰ���!!\n");
	Sleep(3000);
	system("cls");
	gotoxy(20, 25);
	printf("��� ���� ���� ���� ��� ���Ƥ�.��\n");
	Sleep(3000);
	system("cls");
	gotoxy(22, 25);
	printf("�Ĵܰ����� �ʿ��Ұ� ����!!\n");
	Sleep(3000);
	system("cls");
	gotoxy(22, 25);
	printf("�Ĵܰ��� �� �����ٷ�?\n");
	Sleep(3000);
	system("cls");

	// ������ ����

	choice();


	



}