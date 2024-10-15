//#include <vector>
//#include <string>
//#include <iostream>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
//bool isValid(string s) {
//	stack<char> paren_stack{};
//	unordered_map<char, char> umap{
//		{'}', '{'},
//		{')', '('},
//		{']', '['}
//	};
//
//	for (int i = 0; i < s.size(); i++) {
//		char c{ s[i] };
//		if (umap.find(c) == umap.end()) {
//			paren_stack.push(c);
//		}
//		else {
//			if (paren_stack.empty()) {
//				return false;
//			}
//			if (umap[c] != paren_stack.top()) {
//				return false;
//			}
//			paren_stack.pop();
//		}
//	}
//	return paren_stack.empty();
//}
//
//int main() {
//	string s1{ "({}[]()){}" };
//	string s2{ "({}[]())){}" };
//	cout << s1 << ": " << isValid(s1) << '\n';
//	cout << s2 << ": " << isValid(s2) << '\n';
//	return 0;
//}