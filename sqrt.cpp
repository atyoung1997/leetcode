#include "helpers.h"

int mySqrt(int x) {
	long int i = 0;
	while (i <= x){
		long int i_squared = i * i;
		if (i_squared == x) {
			return i;
		}
		if (i_squared > x) {
			return i-1;
		}
		i++;
	}
	return i;
}

int main() {
	cout << mySqrt(0) << '\n';
	cout << mySqrt(1) << '\n';
	cout << mySqrt(2) << '\n';
	cout << mySqrt(8) << '\n';
	return 0;
}
