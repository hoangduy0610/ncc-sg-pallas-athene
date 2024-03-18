// Author: nam.trinhhoai
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
bool binarySearch(int*, int, int);
int* a; int* b;
int n, m;
int main() {
    cin >> n >> m;
    a = new int[n];
    b = new int[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> cnt;
    for (int i = 0; i < m; i++) {

        cin >> b[i];
        cnt[b[i]] = 0;
    }
    for (int i = 0; i < m; i++) {

        if (binarySearch(a, n, b[i])) {
            cnt[b[i]]++;
        }
    }
    for (int i = 0; i < m; i++) {
        cout<< cnt[b[i]];

    }

    return 0;
}

bool binarySearch(int* arr, int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return true;

        if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return false;
}
