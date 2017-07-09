#include <iostream>

int main()
{
	int x = 0;
	int y = 0;
	std::cin >> x >> y;

	unsigned long long res = 1;
	for (int i = 1; i <= y; ++i)
	{
		res *= x;
	}

	std::cout << res << std::endl;
	system("pause");
	return 0;
}
