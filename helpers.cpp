#include "helpers.h"

void printVec(vector<int> v) {
	cout << "[";
	int i{ 0 };
	while (i < v.size() - 1) {
		cout << v[i] << ", ";
		i++;
	}
	cout << v[i] << "]\n";
}

void printVec(vector<char> v) {
	cout << "[";
	int i{ 0 };
	while (i < v.size() - 1) {
		cout << v[i] << ", ";
		i++;
	}
	cout << v[i] << "]\n";
}

