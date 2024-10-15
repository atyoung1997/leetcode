//#include <iostream>
//#include <vector>
//
//using namespace std;

//int removeElement(vector<int>& nums, int val) {
//	int lead{ 0 };
//	int trail{ 0 };
//
//	while (lead < nums.size()) {
//		if (nums[lead] != val) {
//			if (nums[trail] == val) { // case lead != val, trail == val
//				nums[trail] = nums[lead];
//				nums[lead] = val;
//				trail++;
//				lead++;
//			}
//			else { // case lead != val, trail != val
//				trail++;
//				lead++;
//			}
//		}
//		else {
//			if (nums[trail] == val) { // case lead == val, trail == val
//				lead++;
//			}
//			else { // case lead == val, trail != val
//				trail++;
//			}
//		}
//	}
//	return trail;
//
//}
//
//
//
//
//int main() {
//	vector<int> test_nums_1{ 1, 5, 6, 7, 7, 7, 8, 9, 7, 5, 7};
//	int test_val_1{ 7 };
//	removeElement(test_nums_1, test_val_1);
//	return 0;
//}