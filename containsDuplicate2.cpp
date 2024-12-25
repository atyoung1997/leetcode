#include "helpers.h"

#include <iostream>
#include <unordered_map>

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	unordered_map<int, int> umap{};

	for (int curr_ind = 0; curr_ind < nums.size(); curr_ind++) {
		int curr_num{ nums[curr_ind] };
		if (umap.find(curr_num) != umap.end()) {
			if (abs(umap[curr_num] - curr_ind) <= k) {
				return true;
			}
			umap[curr_num] = curr_ind;
		}
		else {
			umap.insert({ curr_num,curr_ind });
		}
	}
	return false;
}



int main() {

}