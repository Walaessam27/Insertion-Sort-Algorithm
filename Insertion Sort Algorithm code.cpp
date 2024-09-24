#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void Sorting(vector<int>& k) {
    int n = k.size();
    for (int i = 1; i < n; i++) {
        int s = k[i];
        int j = i - 1;

        while (j >= 0 && k[j] > s) {
            k[j + 1] = k[j];
            j = j - 1;
        }
        k[j + 1] = s;
    }
}

void printing(const vector<int>& k) {
    cout << "[";
    if (!k.empty()) {
        cout << k[0];
        for (size_t i = 1; i < k.size(); i++) {
            cout << "," << k[i];
        }
    }
    cout << "]";
}

int main() {
    int size;
    cin >> size;
    vector<int> k(size);

    for (int i = 0; i < size; i++) {
        cin >> k[i];
    }

    Sorting(k);
    printing(k);

    return 0;
}

