#include <iostream>

int main()
{
	int number = 0;
	std::cin >> number;

	unsigned long long res = 1;
	for (int i = number; i <= 20; ++i)
	{
		res *= i;
	}

	std::cout << res << std::endl;
	system("pause");
	return 0;
}
