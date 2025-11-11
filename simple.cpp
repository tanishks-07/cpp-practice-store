# include <iostream>
using namespace std;

int main()
{
	// p = principal, r = rate (percent), t = time (years)
	float p = 750000, r = 10.2;
	int t = 5;

	// Try to read values from stdin. If reading fails (no input),
	// fall back to sensible defaults used previously.
	cin >> p >> r >> t;

	// Simple interest = (P * R * T) / 100
	float si = (p * r * t) / 100.0;

	cout << "Calulated simple interest is " << si << '\n';
	return 0;
}