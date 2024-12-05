//#include "helpers.h"
//#include <unordered_map>
//
//bool isIsomorphic(string& s, string& t) {
//	std::unordered_map<char, char> char_map{};
//	std::unordered_map<char, bool> used_mappings{};
//
//	for (int i = 0; i < s.size(); i++) {
//		if (char_map.find(s[i]) == char_map.end()) {
//			if (used_mappings.find(t[i]) != used_mappings.end()) {
//				return false;
//			}
//			char_map.insert({ s[i], t[i] });
//			used_mappings.insert({ t[i], true });
//		}
//		else {
//			if (char_map[s[i]] != t[i]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main() {
//	return 0;
//}