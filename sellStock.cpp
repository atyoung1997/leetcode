//#include "helpers.h"
//#include <unordered_map>
//int maxProfit(vector<int>& prices) {
//	int maxProfit{0};
//	int min{prices[0]};
//	for (int i = 0; i < prices.size(); i++) {
//		int curr{ prices[i] };
//		if (curr < min) {
//			min = curr;
//		}
//		else if((curr - min) > maxProfit){
//			maxProfit = curr - min;
//		}
//	}
//	return maxProfit;
//}
//
//int main() {
//	vector<int> test1{ 3,2,6,5,0,3 };
//	vector<int> test2{ 3,2,6,5,0,5 };
//	vector<int> test3{ 5, 4, 3, 2, 1};
//	cout << maxProfit(test1) << '\n';
//	cout << maxProfit(test2) << '\n';
//	cout << maxProfit(test3) << '\n';
//	return 0;
//}