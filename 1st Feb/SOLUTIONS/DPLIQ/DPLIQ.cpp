// Author: nam.trinhhoai
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int dpliq(int*, int);
int* a;
int n;
int main() {
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << dpliq(a, n);
    return 0;
}

int dpliq(int* arr, int size) {
    int* dp = new int[size];
    for (int i = 0; i < size; i++) {
        dp[i] = 1;
    }
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int m = 0;
    for (int i = 0; i < size; i++) {
        m = max(dp[i], m);
    }
    return m;
}
