#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int maxSubArraySum(vector<int>&);

int main(int argc, char *argv[]) {
	vector<int> numbers;
	int number = 0;

	do {
		cin >> number;
		numbers.push_back(number);
	} while(number != 0);

	cout << maxSubArraySum(numbers) << endl;

	return 0;
}

int maxSubArraySum(vector<int>& numbers) {
  int max_sum = INT_MIN;
  int max_ending = 0;

  for (int i = 0; i < numbers.size(); i++) {
    max_ending += numbers[i];

		if(max_sum < max_ending) {
			max_sum = max_ending;
		}

		if(max_ending < 0) {
			max_ending = 0;
		}
  }

  return max_sum;
}
