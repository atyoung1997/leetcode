#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> input, int target) {

	for (const int &num : input) {
		cout << num;
	}
	return input;
}
int main(){
	vector<int> test_input_1{ 1, 2, 4, 9, 10 };
	int test_target_1{ 13 };
	twoSum(test_input_1, test_target_1);
	return 0;
}