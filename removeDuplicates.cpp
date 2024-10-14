//#include <vector>
//#include <unordered_map>
//#include <iostream>
//
//using namespace std;
//
//int removeDuplicates(vector<int>& nums) {
//	int lead{ 0 };
//	int trail{ 0 };
//	unordered_map<int, int> umap{};
//
//	while (lead < nums.size()) {	
//		if (umap.find(nums[lead]) == umap.end()) {
//			if (umap.find(nums[trail]) != umap.end()) {
//				nums[trail] = nums[lead];
//			}
//			umap.insert(pair<int, int>(nums[lead], 1));
//			lead++;
//			trail++;
//		}
//		else {
//			lead++;
//		}
//	}
//	return trail;
//}
//
//int main() {
//	vector<int> test_nums_1{ 1,5,6,6,6,9,3,4,4,2,4,4 };
//	removeDuplicates(test_nums_1);
//	return 0;
//}
