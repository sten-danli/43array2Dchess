#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {

	int chess[10][10] = { 0 };
	int x, y;
	int count = 10;

	while (count--)
	{
		x = rand() % 10;
		y = rand() % 10;

		chess[x][y] = 1;
	}


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