//#include "helpers.h"
//
//string addBinary(string a, string b) {
//	int i = a.size() - 1;
//	int j = b.size() - 1;
//	vector<char> result_vec{};
//	//cout << "a: " << a << " b: " << b << '\n';
//	char remainder = '0';
//	char a_num{ '0' };
//	char b_num{ '0' };
//	while (i >= 0 || j >= 0) {
//		if (i >= 0) {
//			a_num = a[i];
//		}
//		else {
//			a_num = '0';
//		}
//
//		if (j >= 0) {
//			b_num = b[j];
//		}
//		else {
//			b_num = '0';
//		}
//
//		if (a_num == '1' && b_num == '1') {
//			if (remainder == '1') {
//				result_vec.insert(result_vec.begin(), '1');
//			}
//			else {
//				result_vec.insert(result_vec.begin(), '0');
//				remainder = '1';
//			}
//		}
//		else if ((a_num == '1' && b_num == '0') || (a_num == '0' && b_num == '1')){
//			if (remainder == '1') {
//				result_vec.insert(result_vec.begin(), '0');
//			}
//			else {
//				result_vec.insert(result_vec.begin(), '1');
//			}
//		}
//		else {
//			result_vec.insert(result_vec.begin(), remainder);
//			remainder = '0';
//		}
//		//cout << "a_num: " << a_num << " b_num: " << b_num << " remainder: " << remainder << '\n';
//		//for (auto a : result_vec) {
//		//	cout << a << ' ';
//		//}
//		//cout << '\n';
//		i--;
//		j--;
//	}
//	if (remainder == '1') {
//		result_vec.insert(result_vec.begin(), remainder);
//	}
//	string result_string{""};
//	for (auto a : result_vec) {
//		result_string.push_back(a);
//	}
//	return result_string;
//}
//
//int main() {
//	string s1{ "111" };
//	string s2{ "10111" };
//	cout << "result: " << addBinary(s1, s2);
//	return 0;
//}





     
     




