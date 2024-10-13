#include <string>
#include <vector>
#include <iostream>

using namespace std;

//string longestCommonPrefix(vector<string>& strs) {
//	string prefix{strs[0]};
//
//	int cpi{ 0 };
//	while (cpi < prefix.size()) {
//		for (int i = 1; i < strs.size(); i++) {
//			string& str{ strs[i] };
//			
//			if (cpi >= str.size() || str[cpi] != prefix[cpi]) {
//				cout << cpi << '\n';
//				return prefix.substr(0, cpi);
//			}
//		}
//		cpi += 1;
//	}
//	return prefix.substr(0,cpi);
//}
//
//int main() {
//	vector<string> test_strs_1{ "hello", "help", "he" };
//	vector<string> test_strs_2{ "sretinrs", "fulei", "ieli" };
//
//	cout << longestCommonPrefix(test_strs_1) << '\n';
//	cout << longestCommonPrefix(test_strs_2) << '\n';
//	return 0;
//}