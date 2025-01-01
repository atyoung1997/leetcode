#include "helpers.h"

vector<int> finalPrices(vector<int>& prices) {
	vector<int> result{};
	result.reserve(prices.size());
	for (int i = 0; i < prices.size(); i++) {
		int curr{ prices[i] };
		int finalPrice{ curr };
		int j{ i + 1 };
		while (j < prices.size()) {
			if (prices[j] <= curr) {
				finalPrice -= prices[j];
				break;
			}
			j++;
		}
		result.insert(result.begin() + i, finalPrice);
	}
	return result;
}

int main() {
	vector<int> t1{ 8, 4, 6, 2, 3 };
	vector<int> t2{ 1,2,3,4,5 };
	vector<int> t3{ 10,1,1,6 };
	printVec(finalPrices(t1));
	printVec(finalPrices(t2));
	printVec(finalPrices(t3));
	return 0;
}