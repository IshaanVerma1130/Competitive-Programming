#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n) {
  int arr[3];
  for (int i = 0; i < 3; i++) {
    arr[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    arr[a[i]]++;
  }

  int k = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < arr[i]; j++) {
      a[k] = i;
      k++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
}

int main() {
  int arr[] = {0, 2, 1, 2, 0};
  int n = 5;
  sort012(arr, n);
}