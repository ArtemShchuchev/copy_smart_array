#include <iostream>
#include "SmartArr.h"

void printHeader();

int main()
{
	printHeader();

	try
	{
		SmartArr arr(5);
		arr.add(1);
		arr.add(4);
		arr.add(155);
		arr.print("arr");
		arr = arr;
		arr.print("arr");

		SmartArr new_array(2);
		new_array.add(44);
		new_array.add(34);
		new_array.print("new_array");

		SmartArr arr2(arr);  //Можно так
		//SmartArr arr2 = arr; //Или так
		//arr2.add(20);
		arr2.print("arr2");

		//new_array = arr;
		//new_array.print();

		arr = new_array;
		arr.print("arr");
	}
	catch (const std::bad_alloc)
	{
		std::cout << "Ошибка: недостаточно памяти!" << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Ошибка: " << ex.what() << std::endl;
	}

	return 0;
}


// функции
// заголовок 
void printHeader()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");   // задаём русский текст
	system("chcp 1251");            // настраиваем кодировку консоли
	std::system("cls");
	cout << "Задача 2. Копирование умных массивов\n"
		 << "------------------------------------\n" << endl;
}
