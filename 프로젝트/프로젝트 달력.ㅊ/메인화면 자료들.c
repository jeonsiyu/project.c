#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void setcolor(int colorNum) { // 텍스트 속성을 변경하는데 사용되는 함수선언
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

//system("mode con:cols=185 lines=70 | title take off calories"); // 콘솔창 크기 변경