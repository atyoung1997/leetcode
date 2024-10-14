#include <iostream>
#include <string>
#include <vector>

using namespace std;


int lengthOfLastWord(string s) {
	int i = (s.size() - 1);
	int last_letter_index{ -1 };
	bool seen_word{ false };

	//cout << "i: " << i << '\n';
	//cout << "last_letter_index: " << last_letter_index << '\n';
	while (i >= 0 && !seen_word) {
		cout << "i: " << i << " first loop: " << s[i] << '\n';
		if (s[i] != ' ') {
			last_letter_index = i;
			seen_word = true;
		}
		i -= 1;
	}
	while (i >= 0) {
		cout << "i: " << i << " second loop: " << s[i] << '\n';
		if (s[i] == ' ') {
			return last_letter_index - i;
		}
		i -= 1;
	}

	cout << "i: " << i << '\n';
	cout << "last_letter_index: " << last_letter_index << '\n';
	if (last_letter_index == -1) {
		return 0;
	}
	else {
		return last_letter_index + 1;
	}
}


int main() {
	cout << "\n\n\'a \'\n";
	cout << lengthOfLastWord("a ");
	cout << "\n\n\'a\'\n";
	cout << lengthOfLastWord("a");
	cout << "\n\n\'day\'\n";
	cout << lengthOfLastWord("day");
	cout << "\n\n\'\'\n";
	cout << lengthOfLastWord("");
	cout << "\n\n\' \'\n";
	cout << lengthOfLastWord(" ");
	return 0;
}