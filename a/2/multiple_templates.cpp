#include <iostream>
using namespace std;

template<class T1, class T2>
void copy(const T1 source[], T2 destination[], int size)
{
	// The old cast operator (type) is deprecated
	// New available casts are following
	// 1. static_cast<type>		safe and recommended cast
	// 2. reinterpret_cast<type>	highly unsafe. not recommended
	// 3. dynamic_cast<type>	used with classes. not recommended
	// 4. const_cast<type>		cast away const-ness. not recommended
	for (int i=0; i<size; ++i)
		destination[i] = static_cast<T2>(source[i]);
}

int main(void)
{
	int int_arr[3] = {0};
	double double_arr[] = {1.1, 2.2, 3.3};

	copy(double_arr, int_arr, 3);

	cout << "double_arr : ";
	for(int i; i<3; i++)
		cout << double_arr[i] << " ";
	cout << endl;
	
	cout << "int_arr : ";
	for(int i; i<3; i++)
		cout << int_arr[i] << " ";
	cout << endl;

	cout << int_arr;
}
