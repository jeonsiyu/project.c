#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void setcolor(int colorNum) { // �ؽ�Ʈ �Ӽ��� �����ϴµ� ���Ǵ� �Լ�����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

enum ColorType {
	BLACK,  	//0
	darkBLUE,	//1
	DarkGreen,	//2
	darkSkyBlue,    //3
	DarkRed,  	//4
	DarkPurple,	//5
	DarkYellow,	//6
	GRAY,		//7
	DarkGray,	//8
	BLUE,		//9
	GREEN,		//10
	SkyBlue,	//11
	RED,		//12
	PURPLE,		//13
	YELLOW,		//14
	WHITE		//15
} COLOR;

//system("mode con:cols=185 lines=70 | title take off calories"); // �ܼ�â ũ�� ����