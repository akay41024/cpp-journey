#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {2, 34, 5, 6, 6, 6, 7, 8, 9, 7, 8, 30, 64, 3, 3, 2, 2, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    vector<pair<int, int>> uniqueValues;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < uniqueValues.size(); j++) {
            if (uniqueValues[j].first == arr[i]) {
                uniqueValues[j].second++;
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueValues.push_back(make_pair(arr[i], 1));
        }
    }

    // Output the unique values and their counts
    for (const auto& p : uniqueValues) {
        if(p.second == 1){
            cout <<"Unique value: " << p.first << " " << endl;
        }
    }

    return 0;
}