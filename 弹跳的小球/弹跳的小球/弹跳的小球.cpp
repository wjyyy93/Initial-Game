#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int i, j;
	int x = 0;
	int y = 0;

	int height = 20;
	int velocity_x = 1;//上下边界
	int velocity_y = 1;//左右边界
	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 10;

	while (1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");//清屏函数
		for (i = 0; i < x; i++)
			printf("\n");;//输出小球上面的空行
		for (j = 0; j < y; j++)
			printf(" ");//输出小球左边的空行
			printf("o");//输出小球o
			printf("\n");
			_sleep(150);
			if ((x == top)||(x == bottom))
				velocity_x= -velocity_x;
			if ((y == left)||(y == right))
				velocity_y = -velocity_y;
	}
	return 0;
}