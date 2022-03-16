#pragma once
class Sort
{
	// add data members
public:

	Sort(int nr, int min, int max);
	Sort(va_list args,...);
	Sort(int a[], int n);
	Sort();
	Sort(const char * s);

	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
};
