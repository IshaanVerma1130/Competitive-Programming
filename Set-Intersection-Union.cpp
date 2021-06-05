#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr1[] = {1, 3, 4, 5, 7};
  int arr2[] = {2, 3, 5, 6};

  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);

  int i = 0, j = 0;

  vector<int> Union;
  vector<int> Intersection;

  while (i < n && j < m) {
    if (arr1[i] == arr2[j]) {
      Union.push_back(arr1[i]);
      i++;
      j++;
    } else if (arr1[i] < arr2[j]) {
      Union.push_back(arr1[i]);
      i++;
    } else {
      Union.push_back(arr2[j]);
      j++;
    }
  }

  while (i < n) {
    Union.push_back(arr1[i]);
    i++;
  }

  while (j < m) {
    Union.push_back(arr2[j]);
    j++;
  }

  i = 0;
  j = 0;

  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      i++;
    } else if (arr1[i] > arr2[j]) {
      j++;
    } else if (arr1[i] == arr2[j]) {
      Intersection.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  cout << "Union: ";

  for (auto i : Union) {
    cout << i << " ";
  }

  cout << endl;

  cout << "Intersection: ";

  for (auto i : Intersection) {
    cout << i << " ";
  }
}