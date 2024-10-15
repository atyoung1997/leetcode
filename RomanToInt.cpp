//#include<vector>
//#include<string>
//#include<iostream>
//#include<unordered_map>
//
//
//using namespace std;
//
//int romanToInt(string s) {
//	unordered_map<char, int> umap = {
//		{'I', 1},
//		{'V', 5},
//		{'X', 10},
//		{'L', 50},
//		{'C', 100},
//		{'D', 500},
//		{'M', 1000}
//	};
//
//	int sum{umap[s.back()]};
//	cout << "sum: " << sum << '\n';
//
//	for (int i = 0; i < s.size() - 1; i++) {
//		int curr_val{ umap[s[i]] };
//		int next_val{ umap[s[i + 1]] };
//
//		if (curr_val < next_val) {
//			sum -= curr_val;
//		}
//		else {
//			sum += curr_val;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	string s1 {"XIV"};
//	cout << romanToInt(s1);
//	return 0;
//}



