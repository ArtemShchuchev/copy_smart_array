#include "SmartArr.h"

SmartArr::SmartArr(int capacity) : size_(0), capacity_(capacity > 0 ? capacity : 1)
{
	array_ = new int[capacity_];
}

SmartArr::~SmartArr()
{
	if (array_) delete[] array_;
}

void SmartArr::add(int element)
{
	if (size_ >= capacity_)	// нужно увеличить ёмкость(вместимость) массива
	{
		capacity_ = 2 * size_;
		int* moreArr = new int[capacity_];
		for (int i = 0; i < size_; ++i) moreArr[i] = array_[i];

		delete[] array_;
		array_ = moreArr;
	}
	array_[size_] = element;
	++size_;
}

int SmartArr::get(int index)
{
	if (index < 0 || index >= size_) throw std::exception("не верный индекс (get)!");
	return array_[index];
}

void SmartArr::print(const std::string str)
{
	std::cout << "Адрес массива " << str << ": " << array_ << " - массив: ";
	for (int i = 0; i < size_; ++i)
	{
		std::cout << array_[i] << " ";
	}
	std::cout << std::endl;
}

// если не перегрузить оператор (=), то компилятор 
// создаст его по умолчанию: указатель правого объекта
// будет присвоен указателю левого, по сути это будет 
// один объект с разными именами
// левый указатель будет утерян, что вызовет утечку памяти
//
// при перегрузке - это будут 2 разных объекта, содержащих
// одинаковые данные
SmartArr& SmartArr::operator=(SmartArr& sma)
{
	delete[] array_;
	size_ = sma.size_;
	capacity_ = sma.capacity_;
	array_ = new int[capacity_];
	for (int i = 0; i < size_; ++i) array_[i] = sma.array_[i];

	return *this;
}
