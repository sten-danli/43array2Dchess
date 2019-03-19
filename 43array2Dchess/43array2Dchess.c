#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//二维数组random棋局实现。
int main() {
	srand(time(NULL));
	int chess[10][10] = { 0 };
	int x, y;
	int count = 0;

	/*第一种方法*/
	while (count<10)
	{
		x = rand() % 10;
		y = rand() % 10;
		if (chess[x][y] == 1)
			continue;
		chess[x][y] = 1;
		count++;
	}

	/*第二种方法
	while (1)
	{	
		x = rand() % 10;
		y = rand() % 10;
		if (chess[x][y] != 1)
		{
			chess[x][y] = 1;
			count++;
			if (count == 10)
				break;
		}
	}
	*/


	for (int i=0; i<10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%2d", chess[i][j]);
		}
		putchar(10);
	}
	system("pause");
}