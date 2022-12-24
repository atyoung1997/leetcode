#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

std::vector<int> twoSum(std::vector<int> nums, int target) {

	std::unordered_map<int, int> umap;
	std::vector<int> v {0, 1};

	for (int i = 0; i < nums.size(); i++) {
		int match = target - nums[i];
		if (umap.find(match) != umap.end()) 
		{ // check if match is in map, if so return [i, umap[match]]
			v[0] = umap[match];
			v[1] = i;
			return v;
		}
		else 
		{ // else add nums[i] to umap 
			umap[nums[i]] = i;
		}
	}
	return v;
}


int main() {
	std::vector<int> test{0, 1, 2, 3, 4, 5 };
	std::vector<int> result = twoSum(test, 4);
	for (int i = 0; i < result.size(); i++) {
		std::cout << result[i] << '\n';
	}


	return 0;
}