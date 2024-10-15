//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;

//vector<int> twoSum(vector<int>& nums, int target) {
//
//	unordered_map<int, int> seen_nums{};
//	for (int i = 0; i < nums.size(); i++) {
//		int num{ nums[i] };
//		int matching_num{ target - num };
//
//		if (seen_nums.find(matching_num) != seen_nums.end()) {
//			vector<int> result{seen_nums[matching_num], i};
//			return result;
//		}
//		seen_nums.insert({ num , i });
//	}
//	return vector<int>{0, 0};
//}
//int main(){
//	vector<int> test_input_1{ 2,7,11,15 };
//	int test_target_1{ 9 };
//	for (auto i : twoSum(test_input_1, test_target_1)) {
//		cout << i << '\n';
//	}
//	return 0;
//}