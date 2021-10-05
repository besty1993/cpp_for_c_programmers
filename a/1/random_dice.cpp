// C ++ is better than C
// - More Type Safe
// - More Libraries
// - Less reliance on preprocessor
// - Object Oriented vs Imperative
//
//
// Rest of line comment was introduced from C++
/*
 * This multi-line comment is the original comment way in C
 */

#include <iostream>	// drops .h still available
#include <cstdlib> 	// stdlib library in C
#include <ctime>	// time library in C

using namespace std;	// New way to encapsulate
const int sides = 6;	// Replaces many '#define'

// Inline function
// It is replaced into pure inline code.
// It is used because function call needs resource.
// It doesn't mean inline coding is always better,
// But only for simple function
inline int r_sides() {return (rand() % sides + 1);}

int main(void)
{
	const int n_dice = 2;
	int d1, d2;
	srand(clock());				// Initialize random seed

	// cout, from namespace std : printf in C
	// cout comes with <<, which is called 'overload'
	// << was to shift the bit in C
	cout << "\nEnter number of trials: ";
	int trials;

	// cin, from namespace std : scanf in C
	// cin comes with >>
	cin >> trials;
	int* outcomes = new int[n_dice * sides + 1];

	// 'for' statment can include declaration initializer
	for (int j=0; j<trials; ++j)
		outcomes[(d1 = r_sides()) + (d2 = r_sides())]++;
	
	// (type) cast no more works.
	// Instead, C++ has many types of type casting.
	// static_cast is safe casting, which is highly recommended
	cout << "probability\n";
	for (int j=2; j<n_dice*sides + 1; ++j)
		cout << "j = " << j << " p = "
			<< static_cast<double>(outcomes[j])/trials
			<< endl;		// 'endl' iomanipulator can be placed in an ostream
}
