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
	SmartArr(const int capacity);	// конструктор
	SmartArr(const SmartArr& sma);	// конструктор копирования
	~SmartArr();			// деструктор

	void add(const int element);	// добавляем элемент к конец
	int get(const int index);		// беру элемент по индексу
	void print(const std::string& str);		// вывод в консоль
	SmartArr& operator= (const SmartArr& sma);	// перегрузка =
};

