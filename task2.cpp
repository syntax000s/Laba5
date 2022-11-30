#include<iostream>
void output(int arrSpirall[3][3]);
 int main()
{
	static int arrSpirall[3][3];
	int counter = 1, x = 0, y = 0;

	for (int i = 0; i < 2; i++)
	{
		arrSpirall[y][x] = counter;
		counter++;
		x++;
	}//12
	for (int i = 0; i < 2; i++)
	{
		arrSpirall[y][x] = counter;
		counter++;
		y++;
	}//34
	for (int i = 0; i < 2; i++)
	{
		arrSpirall[y][x] = counter;
		counter++;
		x--;
	}//56
	arrSpirall[y][x] = counter;//7
	y--;
	counter++;
	for (int i = 0; i < 2; i++)
	{
		arrSpirall[y][x] = counter;
		counter++;
		x++;
	}//89
	output(arrSpirall);
}
void output(int arrSpirall[3][3])//вывод двумерного массива
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arrSpirall[i][j];
		}
		std::cout << std::endl;
	}
}




