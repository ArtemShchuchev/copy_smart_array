#pragma once
#include <iostream>

class SmartArr
{
protected:
private:
	int* array_ = nullptr;// ������������� ������
	int size_;		// ������� ������ �������
	int capacity_;	// ������� �������
public:
	SmartArr(const int capacity);	// �����������
	SmartArr(const SmartArr& sma);	// ����������� �����������
	~SmartArr();			// ����������

	void add(const int element);	// ��������� ������� � �����
	int get(const int index);		// ���� ������� �� �������
	void print(const std::string& str);		// ����� � �������
	SmartArr& operator= (const SmartArr& sma);	// ���������� =
};

