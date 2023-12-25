#include <iostream>
//#include <ctime>
//#include <cstdlib>



//4) Объявить и заполнить двумерный динамический массив случайными числами от 10 до 50. 
// Показать его на экран.Для заполнения и показа на экран написать отдельные функции. 
//(подсказка: функции должны принимать три параметра – указатель на динамический массив, количество строк, количество столбцов).
// Количество строк и столбцов выбирает пользователь.
//
//5) Решите задачу, используя один указатель на функцию.
// Разработайте четыре функции над двумя целыми параметрами, соответствующие арифметическим операциям(+, -, *, / ).
//В основной программе задавайте два целых параметра и символьный знак операции до тех пор, пока не будет введен пробел в качестве знака операции.
//В выходных данных выводите значения функций.


void filling(int **arr, int str, int column)
{
	srand(time(nullptr));
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = rand() % 50 + 10;
		}
	}
}

void demonstrate(int **arr, int str, int column)
{
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < column; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
}

float sum(int a, int b)
{
	return a + b;
}

float sub(int a, int b)
{
	return a - b;
}

float multi(int a, int b)
{
	return a * b;
}

float divide(int a, int b)
{
	return (float)a / b;
}

int main()
{
	setlocale(LC_ALL, "rus");
	//4
	/*int str, column;
	std::cout << "Введите количество строчек: ";
	std::cin >> str;
	std::cout << "Введите значение столбиков: ";
	std::cin >> column;
	int** arr = new int*[str];
	for (int i = 0; i < str; i++)
	{
		arr[i] = new int[column];
	}
	filling(arr, str, column);
	demonstrate(arr, str, column);
	for (int i = 0; i < str; i++)
	{
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;*/
	//5
	int a{ 0 }, b{0};
	std::string sign;
	float (*fcnPtr)(int, int) = nullptr;
	float fcnOutput;
	while (true)
	{
		std::cout << "Введите значение числа a: ";
		std::cin >> a;
		std::cout << "Введите значение числа b: ";
		std::cin >> b;
		std::cout << "Введите знак: ";
		std::cin >> sign;
		/*switch (sign)
		{
		case '+':
			fcnPtr = sum;
			break;
		case '-':
			fcnPtr = sub;
			break;
		case '*':
			fcnPtr = multi;
			break;
		case '/':
			fcnPtr = divide;
			break;
		case ' ':
			exit;
			break;
		default:
			break;
		}*/
		if (sign.compare("+")==0)
		{
			fcnPtr = sum;
		}
		else if (sign.compare("-") == 0)
		{
			fcnPtr = sub;
		}
		else if (sign.compare("*") == 0)
		{
			fcnPtr = multi;
		}
		else if (sign.compare("/") == 0 )
		{
			fcnPtr = divide;
		}
		else if (sign.compare("quit") == 0)
		{
			break;
		}
		else
		{
			std::cout << "Введён некорректный символ\n";
			continue;
		}
		fcnOutput = fcnPtr(a, b);
		std::cout << "Результат: " << fcnOutput << "\n";
	}
}