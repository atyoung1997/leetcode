#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int lead{ 0 };
	int trail{ 0 };
	unordered_map<int, int> umap{};
	for (auto& a : nums) {
		cout << a << ' ';
	}
	cout << '\n';

	while (lead < nums.size()) {
		int lead_num{ nums[lead] };
		int trail_num{ nums[trail] };
		
		if (umap.find(lead_num) == umap.end()){
			if (umap.find(trail_num) == umap.end()) {
				lead++;
				trail++;
			}
			else {
				nums[trail] = lead_num;
				lead++;
				trail++;
			}
			umap.insert(pair<int, int>(lead_num, 1));
		}
		else {
			lead++;
		}
	}
	cout << trail << '\n';
	for (auto& a : nums) {
		cout << a << ' ';
	}
	return 0;
}

int main() {
	vector<int> test_nums_1{ 1,5,6,6,6,9,3,4,4,2,4,4 };
	removeDuplicates(test_nums_1);
	return 0;
}
