#include "helpers.h"

int mySqrt(int x) {
	long int low = 0;
	long int high = x;
	long int mid = x / 2;

	if (x == 1) {
		return x;
	}

	while (mid > low){
		long int mid_squared{ mid * mid };
		if (mid_squared == x) {
			return mid;
		}
		
		if (mid_squared > x) {
			high = mid;
		}
		else {
			low = mid;
		}
		mid = (high + low) / 2;
	}
	return low;
}

int main() {
	cout << "result 0: " << mySqrt(0) << '\n';
	cout << "result 1: " << mySqrt(1) << '\n';
	cout << "result 2: " << mySqrt(2) << '\n';
	cout << "result 3: " << mySqrt(3) << '\n';
	cout << "result 1756: " << mySqrt(1756) << '\n';
	return 0;
}
