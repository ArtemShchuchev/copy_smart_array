#pragma once
#include <iostream>

class SmartArr
{
protected:
private:
	int* array_ = nullptr;// целочисленный массив
	int size_;		// текущий размер массива
	int capacity_;	// ёмкость массива
public:
	SmartArr(int capacity);	// конструктор
	~SmartArr();			// деструктор
	void add(int element);	// добавляем элемент к конец
	int get(int index);		// беру элемент по индексу
	void print(const std::string str);		// вывод в консоль
	SmartArr& operator= (SmartArr& sma);	// перегрузка =
};

