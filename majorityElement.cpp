//#include "helpers.h"
//#include <unordered_map>
//int majorityElement(vector<int>& nums) {
//	int majority = 0;
//	int result = 0;
//
//	for (auto num : nums) {
//		if (majority == 0) {
//			majority += 1;
//			result = num;
//		}
//		else if (num == result) {
//			majority += 1;
//		}
//		else {
//			majority -= 1;
//		}
//	}
//	return result;
//}
//
//
//
//
//int main() {
//	vector<int> t1{ 3,2,3 };
//	vector<int> t2{2,2,1,1,1,2,2};
//	cout << majorityElement(t1) << '\n';  
//	cout << majorityElement(t2) << '\n';  
//
//	return 0;
//}