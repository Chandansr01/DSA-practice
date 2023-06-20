// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
//     return a.second.first < b.second.first;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<pair<int, pair<int, int>>> calls(n);
//     for (int i = 0; i < n; i++) {
//         int start_time, end_time, value;
//         cin >> start_time >> end_time >> value;
//         calls[i] = make_pair(end_time, make_pair(start_time, value));
//     }

//     sort(calls.begin(), calls.end(), cmp);

//     vector<int> dp(n);
//     dp[0] = calls[0].second.second;

//     for (int i = 1; i < n; i++) {
//         int value = calls[i].second.second;
//         int last_non_overlap = -1;

//         for (int j = i - 1; j >= 0; j--) {
//             if (calls[j].first <= calls[i].second.first) {
//                 last_non_overlap = j;
//                 break;
//             }
//         }

//         if (last_non_overlap >= 0) {
//             value += dp[last_non_overlap];
//         }

//         dp[i] = max(value, dp[i - 1]);
//     }

//     cout << dp[n - 1] << endl;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

struct Call {
    int start_time, end_time, value;
};

bool cmp(Call a, Call b) {
    return a.end_time < b.end_time;
}

int main() {
    int n;
    cin >> n;
    vector<Call> calls(n);
    for (int i = 0; i < n; i++) {
        cin >> calls[i].start_time >> calls[i].end_time >> calls[i].value;
    }

    // sort calls based on end time in ascending order
    sort(calls.begin(), calls.end(), cmp);

    // dp[i] stores the maximum value that can be achieved
    // by taking calls that end before the ith call
    vector<int> dp(n);
    dp[0] = calls[0].value;

    for (int i = 1; i < n; i++) {
        int val = calls[i].value;
        int idx = upper_bound(calls.begin(), calls.begin() + i, 
                              Call{0, calls[i].start_time, 0}, cmp) - calls.begin() - 1;
        if (idx >= 0) val += dp[idx];
        dp[i] = max(dp[i-1], val);
    }

    cout << dp[n-1] << endl;
    return 0;
}
