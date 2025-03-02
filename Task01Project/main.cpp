#include "util.h"
#include "linear_search_algoriths.h"
#include "binary_search_algorithm.h"
#define BUF 100

int main() {
	/*int array[BUF];

	int size;
	cout << "input size of array: ";
	cin >> size;*/
	int array[]{ 1,2,3,4,5,6,7,8,9,10,13,20,30,35,36 };
	int size = 15;

	int value;
	cout << "input find_value: ";
	cin >> value;

	init(array, size, -20, 50);
	cout << "Array: " << convert(array, size) << endl;

	//string msg = find_value(array, size, value) ? "Yes" : "no";
	string msg = binary_find_value(array, size, value) ? "Yes" : "no";


	cout << "Answer: " << msg << endl;

	cout << "The first value of array is: " << find_first_value_index(array, size, value) << endl;

	cout << "The last value of array is: " << find_last_value_index(array, size, value) << endl;

	cout << "coutnt of value is " << count_value(array, size, value) << endl;

	return 0;
}


