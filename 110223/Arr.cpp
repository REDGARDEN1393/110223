#include<iostream>
#include <iomanip>
#include <cstdlib>

/*int main()
{
	const int rows{ 5 };
	const int columns{ 5 };

	int matrix[rows][columns]{};
	int num{};
	//int j{};
	std::cout << "Enter num : " << "\n";
	std::cin >> num;
		for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			matrix[row][column] = num;
			num = num * 2;
			
		}
	}
		for (int row = 0; row < rows; row++) 
		{
		   for (int column = 0; column < columns; column++)
		   {
			std::cout <<std::setw(5)<< matrix[row][column] << ' ';
		   } 
		   std::cout << '\n';
	}
	return 0;
}*/
int main()
{
	const int rows{ 5 };
	const int columns{ 5 };

	int matrix[rows][columns]{};
	int sum1{};
	int sum2{};
	//int j{};
	//std::cout << "Enter num : " << "\n";
	//std::cin >> num;
	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			matrix[row][column] = rand()%10;
			sum1 += matrix[row][0];
			
		}
	}
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			std::cout << std::setw(5) << matrix[row][column] << ' ';
		}
		std::cout <<sum1<< '\n';
	}
	//std::cout<< '|' << sum;
	return 0;
}