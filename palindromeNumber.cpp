//#include "helpers.h"
//#include<cmath>
//
//// without converting to string :)
//bool isPalindrome(long int x) {
//	long int remaining_digits{ x };
//	long int reversed_digits{ 0 };
//	//cout << "remaining_digits: " << remaining_digits << '\n';
//	//cout << "reversed_digits: " << reversed_digits << '\n';
//	while (remaining_digits > 0) {
//		reversed_digits = (reversed_digits * 10) + (remaining_digits % 10);
//		remaining_digits = remaining_digits / 10;
//		//cout << "remaining_digits: " << remaining_digits << '\n';
//		//cout << "reversed_digits: " << reversed_digits << '\n';
//	}
//	return reversed_digits == x;
//}
//
//
//int main() {
//	int x1{ 121 };
//	int x2{ 1231 };
//	int x3{ 789987 };
//	cout << x1 << ": " << isPalindrome(x1) << '\n';
//	cout << x2 << ": " << isPalindrome(x2) << '\n';
//	cout << x3 << ": " << isPalindrome(x3) << '\n';
//
//	return 0;
//}
