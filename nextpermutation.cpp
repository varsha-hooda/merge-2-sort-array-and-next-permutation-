#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int i = n - 2;

    // Step 1: Find pivot
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // Step 2: Find next greater element
    if (i >= 0) {
        int j = n - 1;

        while (arr[j] <= arr[i]) {
            j--;
        }

        swap(arr[i], arr[j]);
    }

    // Step 3: Reverse the right side
    reverse(arr.begin() + i + 1, arr.end());
}

int main() {
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};

    nextPermutation(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}