#include <iostream>

int main()
{
	int number = 0;
	std::cin >> number;

	int sum = 0;
	for (int i = number; i <= 500; ++i)
	{
		sum += i;
	}

	std::cout << sum << std::endl;
	system("pause");
	return 0;
}
