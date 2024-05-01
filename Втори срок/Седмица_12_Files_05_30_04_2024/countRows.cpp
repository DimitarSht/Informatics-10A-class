#include <iostream>
#include <fstream>
using namespace std;

const char NEW_LINE_CHAR = '\n';

int getCharCount(ifstream& ifs, char ch) {

	if (!ifs.is_open()) {
		return -1;
	}

	int count = 0;
	while (true) {
		char current = ifs.get();

		if (ifs.eof()) {
			return count;
		}

		if (current == ch) {
			count++;
		}
	}
	return 0;
}

int getLinesCount(const char* fileName) {  /// или const string &fileName 
	if (!fileName) {
		return -1;
	}

	ifstream ifs(fileName);
	if (!ifs.is_open()) {
		return -1;
	}

	return getCharCount(ifs, NEW_LINE_CHAR) + 1;
}
int main()
{
	cout << getLinesCount("file.txt");
}