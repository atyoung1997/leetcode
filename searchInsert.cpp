#include "helpers.h"


// linear time
//int searchInsert(vector<int> nums, int target){
//	for (int i = 0; i < nums.size(); i++) {
//		if (nums[i] == target) {
//			return i;
//		}
//		
//		if (i == nums.size() - 1) {
//			return nums.size();
//		}
//		
//		if (nums[i] < target and nums[i + 1] > target) {
//			return i + 1;
//		}
//
//		if (i == 0 && nums[i] > target) {
//			return 0;
//		}
//	}
//	return 0;
//}

//int searchInsert(vector<int>& nums, int target) {	
//	int min_index = 0;
//	int max_index = nums.size();
//	int i{};
//	//int iter_count{ 1 };
//
//	while (min_index <= max_index) {
//		i = (min_index + max_index) / 2; 
//		//cout << "iter_count: " << iter_count  << " min_index_start: " << min_index << " max_index_start: " << max_index << " i: " << i << '\n';
//
//		if (nums[i] == target) {
//			return i;
//		}
//		
//		if (nums[i] < target) {
//			min_index = i + 1;
//		}
//		else {
//			max_index = i - 1;
//		}
//		//iter_count++;
//	}
//	return min_index;
//}
//
//
//int main() {
//	vector<int> nums1{ 1,4,6,7,8,9,10, 15, 16, 17, 18, 20, 21, 23, 24,25,26,27,28,29,30,31,35,36 };
//	int t1{ 1 };
//	int t2{ 2 };
//	int t3{ 20 };
//	int t4{ 32 };
//	int t5{ 36 };
//	cout << "size: " << nums1.size() << '\n';
//	printVec(nums1);
//	cout << '\n' << t1 << ": " << searchInsert(nums1, t1) << '\n';
//	cout << '\n' << t2 << ": " << searchInsert(nums1, t2) << '\n';
//	cout << '\n' << t3 << ": " << searchInsert(nums1, t3) << '\n';
//	cout << '\n' << t4 << ": " << searchInsert(nums1, t4) << '\n';
//	cout << '\n' << t5 << ": " << searchInsert(nums1, t5) << '\n';
//	return 0;
//}
