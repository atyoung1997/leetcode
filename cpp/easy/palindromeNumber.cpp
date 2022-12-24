#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

bool palindromeNumber (int n) {
	printf(n);
	printf(n % 10);
	printf(n / 5);
}


int main() {
	int test{14541};
	bool result = palindromeNumber(test);
	//printf(result);
	//for (int i = 0; i < result.size(); i++) {
	//	std::cout << result[i] << '\n';
	// }


	return 0;
}