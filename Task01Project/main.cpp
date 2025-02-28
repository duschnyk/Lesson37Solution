#include "util.h"
#include "linear_search_algoriths.h"
#define BUF 100

int main() {
	int array[BUF];

	int size;
	cout << "input size of array";
	cin >> size;

	int value;
	cout << "input find_value";
	cin >> value;

	init(array, size, -20, 50);
	cout << "Array: " << convert(array, size) << endl;

	string msg = find_value(array, size, value) ? "Yes" : "no";

	cout << "Answer: " << msg << endl;

	return 0;
}


