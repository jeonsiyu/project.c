#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


void init(void) {
	system("mode con:cols=180 lines=100 | title take off calories"); // 콘솔창 크기 변경
}

void titleDraw(void) {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ \n");
	printf("■■                                                                  ■■\n");
	printf("■                                                                    ■\n");
	printf("■           ■■■■■■		          ■■■■■■                     ■\n");
	printf("■           ■■■■■■		         ■■■■■■■■                    ■\n");
	printf("■             ■■    □□    □□  □□ □□□□□  ■■      ■■ □□□□□ □□□□□       ■\n");
	printf("■             ■■   □□□□   □□ □□ □□   □□ ■■      ■■ □□□□□ □□□□□       ■\n");
	printf("■             ■■  □□  □□  □□□□  □□   □□ ■■      ■■ □□    □□          ■\n");
	printf("■             ■■ □□□□□□□□ □□□□  □□□□□□  ■■      ■■ □□□□□ □□□□□       ■\n");
	printf("■             ■■ □□    □□ □□ □□ □□       ■■■■■■■■  □□    □□          ■\n");
	printf("■             ■■ □□    □□ □□  □□ □□□□□    ■■■■■■   □□    □□          ■\n");
	printf("■                                                                    ■\n");
	printf("■     ■■■■■                                                          ■\n");
	printf("■    ■■■■■                                                           ■\n");
	printf("■   ■■          □□    □□     □□□□   □□□□□    □□□□   □□□□□   □□□□□    ■\n");
	printf("■  ■■          □□□□   □□    □□□□□□  □□  □□   □□□□  □□   □□ □□        ■\n");
	printf("■  ■■         □□  □□  □□   □□    □□ □□□□□     □□   □□   □□  □□□□□    ■\n");
	printf("■   ■■       □□□□□□□□ □□   □□    □□ □□  □□    □□   □□□□□□       □□   ■\n");
	printf("■     ■■■■■  □□    □□ □□□□□ □□□□□□  □□   □□  □□□□  □□      □□   □□   ■\n");
	printf("■      ■■■■■ □□    □□ □□□□□  □□□□   □□    □□ □□□□   □□□□□   □□□□     ■\n");
	printf("■                                                                    ■\n");
	printf("■■                                                                  ■■\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");

}

void character(void) {

}

int main() {
	
	//system("color 03");
	system;
	titleDraw();

}
