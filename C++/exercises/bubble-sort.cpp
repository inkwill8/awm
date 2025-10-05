#include<vector>
#include<iostream>
#include<string>

void BubbleSort(std::vector<int>& vector) {
	for (int i = 0; i < vector.size() - 1; i++) {
		for (int j = 1; j < vector.size() - i; j++) {
			if (vector[j - 1] > vector[j]) {
      			int temp = vector[j];
      			vector[j] = vector[j - 1];
      			vector[j - 1] = temp;
			}
		}
	}
}

int main() {

	std::vector<int> numbers = {2, 26, 4, 97, 14, 8};
	BubbleSort(numbers);
	
	for (int num : numbers) {
	std::cout << num << std::endl;
	}
}
