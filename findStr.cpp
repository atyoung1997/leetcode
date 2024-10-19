//#include "helpers.h"
//
//int findStr(string haystack, string needle) {
//	int needle_size = needle.size();
//	int i = 0;
//	if (needle.size() <= haystack.size()) {
//		while ( i <= (haystack.size() - needle_size)) {
//			if (haystack.substr(i,needle_size) == needle) {
//				return i;
//			}
//			i++;
//		}
//	}
//	return -1;
//}
//
//
//int main() {
//	string s1{ "aaa" };
//	string t1{ "aaaa" };
//	string t2{ "aa" };
//
//	cout << findStr(s1, t1) << '\n';
//	cout << findStr(s1, t2) << '\n';
//	return 0;
//}