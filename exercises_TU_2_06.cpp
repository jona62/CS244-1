#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

#define SIZE 15

void printArray(int array[]) {
  cout << "[";
  for (int i = 0; i < SIZE; i++) {
    if (i == SIZE - 1) {
      cout << array[i] << "]\n";
    } else {
      cout << array[i] << ", ";
    }
  }
}

void exercise3(int num_array[]) {
  srand((unsigned)time(0));
  int random_num, n;
  int temp_array[SIZE];
  cout << "Initializing original array\n";
  for (int i = 0; i < SIZE; i++) {
    random_num = rand() % 100;
    num_array[i] = random_num;
  }
  cout << "Printing original array:\n";
  printArray(num_array);
  cout << "Enter the value of n:\n";
  cin >> n;
  n %= SIZE;
  for (int i = n - 1, j = 0; i >= 0; i--, j++) {
    temp_array[j] = num_array[i];
  }
  for (int i = 0; i < n; i++) {
    num_array[i] = temp_array[i];
  }
  cout << "Printing array with the first " << n << " elements reversed\n";
  printArray(num_array);
}

int main() {
  int num_array[SIZE];
  exercise3(num_array);
  return 0;
}
