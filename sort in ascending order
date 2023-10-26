#include <iostream>
using namespace std;

int main() {
  int a[] = {12, 3, 143, 4134, 13, 4143};
  int n = 6; 

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        // Swap a[j] and a[j + 1]
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
