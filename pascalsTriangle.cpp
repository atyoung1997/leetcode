//#include "helpers.h"
//
//vector<vector<int>> generate(int numRows) {
//	vector<vector<int>> result{};
//	vector<int> starting_val{ 1 };
//	result.insert(result.begin(), starting_val);
//	for (int i = 1; i < numRows; i++) {
//		vector<int>& prev{ result[i - 1] };
//		vector<int> curr{};
//		int j{ 0 };
//		while (j <= prev.size()) {
//			int left_ind{ j - 1 };
//			int right_ind{ j };
//			int left_val{ 0 };
//			int right_val{ 0 };
//
//			if (left_ind >= 0) {
//				left_val = prev[left_ind];
//			}
//
//			if (right_ind < prev.size()) {
//				right_val = prev[right_ind];
//			}
//
//			curr.insert(curr.end(), left_val + right_val);
//			j++;
//		}
//		result.insert(result.end(), curr);
//	}
//
//	return result;
//}
//
//
//
//int main() {
//	generate(10);
//	return 0;
//}