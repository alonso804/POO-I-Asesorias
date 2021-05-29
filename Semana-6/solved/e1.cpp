#include <iostream>
#include <climits>

using namespace std;

int maxSubArraySum(int*&, const int&);

void print(int*&, const int&);

int main(int argc, char *argv[]) {
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int* ptr_arr = arr;

	cout << maxSubArraySum(ptr_arr, size) << endl;

	return 0;
}

int maxSubArraySum(int *&ptr_arr, const int &size) {
  int max_sum = INT_MIN;
  int max_ending = 0;

  for (int i = 0; i < size; i++) {
    max_ending += *(ptr_arr + i);

		if(max_sum < max_ending) {
			max_sum = max_ending;
		}

		if(max_ending < 0) {
			max_ending = 0;
		}
  }

  return max_sum;
}

void print(int*& ptr_arr, const int& size) {
	for(int i = 0; i < size; i++) {
		cout << *(ptr_arr + i) << " ";
	}

	cout << endl;
}
