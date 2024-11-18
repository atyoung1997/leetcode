//#include "helpers.h"
//#include <stdio.h>
//#include <ctype.h>
//
//
//
//
//bool isPalindrome(string& s) {
//	int left{ 0 };
//	int right = s.size() - 1;
//	 
//	while (left < right) {
//		char lchar = tolower(s[left]);
//		char rchar = tolower(s[right]);
//
//		cout << "left: " << lchar << " right: " << rchar << '\n';
//		if (!isalnum(lchar)) {
//			left++;
//			continue;
//		}
//		if (!isalnum(rchar)) {
//			right--;
//			continue;
//		}
//
//		if (lchar != rchar) {
//			return false;
//		}
//		left++;
//		right--;
//	}
//	return true;
//}
//
//int main() {
//	string test1{ "A man, a plan, a canal: Panama" };
//	string test2{ "race a car" };
//	string test3{ " " };
//	cout << isPalindrome(test1) << '\n';
//	cout << isPalindrome(test2) << '\n';
//	cout << isPalindrome(test3) << '\n';
//	return 0;
//}

