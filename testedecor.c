#include <stdio.h>

int main(void)
{
	int num = 2, red = 41, green = 42, yellow = 43, dblue = 44, pink = 45, lblue = 46, white = 47;

	printf(" \e[%dm%4d\e[m\n ",red,num);
	printf("\e[%dm\%4d\e[m\n ",green,num*2);
	printf("\e[%dm\%4d\e[m\n ",yellow,num*4);
	printf("\e[%dm\%4d\e[m\n ",dblue,num*8);
	printf("\e[%dm\%4d\e[m\n ",pink,num*16);
	printf("\e[%dm\%4d\e[m\n ",lblue,num*32);
	printf("\e[30;%dm\%4d\e[m\n ",white,num*64);
	printf("\e[30;%dm\%4d\e[m\n ",dblue,num*128);
	printf("\e[30;%dm\%4d\e[m\n ",pink,num*256);
	printf("\e[30;%dm\%4d\e[m\n ",lblue,num*512);
	printf("\e[31;%dm\%4d\e[m\n ",white,num*1024);
	printf("\n\n\n \e[%dmQue coisa legal, interessante, maneira, esplendida, extraordinaria, maravilhosa!!!\e[m\n\n\n ",dblue);
	return 0;
}


