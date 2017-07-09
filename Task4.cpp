#include <iostream>
#include <fstream>
using std::cin;
using std::cout;

int array[8][8];

void square(int _i, int _j, int &_x1, int &_y1, int &_x2, int &_y2, int &_square);

int main()
{
	//Console array filling (1 and 0)
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			cin >> array[i][j];
		}
	}

	/* or file input
	std::ifstream in("input.txt");
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			in >> array[i][j];
		}
	}
	*/

	int max_square = 0;
	int x1 = 0, x2 = 0;
	int y1 = 0, y2 = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (array[i][j] == 0)
			{
				square(i, j, x1, y1, x2, y2, max_square);
			}
		}
	}

	cout << "x1: " << x1 << " y1: " << y1 << std::endl;
	cout << "x2: " << x2 << " y2: " << y2 << std::endl;
	cout << "Square: " << max_square << std::endl;
	
	system("pause");
	return 0;
}

void square(int _i, int _j, int &_x1, int &_y1, int &_x2, int &_y2, int &_square)
{
	int p_square = 0;
	int i = _i;
	int j = _j;
	int coll = 100;

	while (array[i][j] != 1 && i + 1 < 8)
	{
		if (array[i][j + 1] == 1 || j + 1 > 7 || j + 1 >= coll)
		{
			p_square = (i - _i + 1) * (j - _j + 1);
			if (_square < p_square)
			{
				_square = p_square;
				_x1 = _i;
				_y1 = _j;
				_x2 = i;
				_y2 = j;
			}

			coll = j + 1;
			i++;
			j = _j;
		}
		else
		{
			++j;
		}
	}
}
