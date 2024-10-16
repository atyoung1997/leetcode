#include <vector>
#include <iostream>
#include "helpers.h"

using namespace std;

//vector<int> plusOne(vector<int>& digits) {
//	int i = digits.size() - 1 ;
//	int carry{ 1 };
//
//	while (i >= 0) {
//		int temp_sum{ digits[i] + carry };
//		carry = temp_sum / 10;
//
//		//cout << "iteration: " << i << " digits: ";
//		//printVec(digits);
//
//		digits[i] = temp_sum - (carry * 10);
//		if (!carry) {
//			return digits;
//		}
//		else if(i == 0){
//			digits.insert(digits.begin(), 1);
//		}
//		i--;
//	}
//
//	return digits;
//}
//
//
//int main() {
//	vector<int> s1{ 1, 2, 3, 4, 9 };
//	vector<int> s2{ 1, 2, 3, 4, 9, 1 };
//	vector<int> s3{ 9 };
//	vector<int> s4{ 9, 9, 9 };
//
//	printVec(plusOne(s1)); 
//	printVec(plusOne(s2)); 
//	printVec(plusOne(s3)); 
//	printVec(plusOne(s4)); 
//
//	return 0;
//}



