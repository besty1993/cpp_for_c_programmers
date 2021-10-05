#include <iostream>
using namespace std;

// C++ has overloading and call by reference
inline void swap(int& i, int& j) {
	int temp = i;
	i = j;
	j = temp;
}

// In C, function name cannot be overloaded.
// ex) swap_int, swap_double
inline void swap(double& i, double& j) {
	double temp = i;
	i = j;
	j = temp;
}

int main()
{
	int m = 5, n = 10;
	double x = 5.3, y = 10.6;
	cout << "inputs: " << m << ", " << n << endl;
	swap(m, n);
	cout << "outputs: " << m << ", " << n << endl;
	cout << "double inputs: " << x << ", " << y << endl;
	swap(x, y);
	cout << "double outputs: " << x << ", " << y << endl;
}
