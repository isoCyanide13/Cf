#include<bits/stdc++.h>
using namespace std;

int find_score() {
    char arr[10][10];
        int total_score = 0;
        for(size_t i = 0; i < 10; i += 1) {
            for(size_t j = 0; j < 10; j += 1) {
                cin >> arr[i][j];
                if(arr[i][j] == 'X') {
                    if(i == 0 || i == 9 || j == 0 || j == 9)
                        total_score += 1;
                    else if(i == 1 || i == 8 || j == 1 || j == 8)
                        total_score += 2;
                    else if(i == 2 || i == 7 || j == 2 || j == 7)
                        total_score += 3;
                    else if(i == 3 || i == 6 || j == 3 || j == 6)
                        total_score += 4;
                    else
                        total_score += 5;
                }
            }
        }
    return total_score;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<int> results;
    while(t--) {
        results.push_back(find_score()); 
    }

    for(const int& r: results) {
        cout << r << endl;
    }

    return 0;
}


// M2 - optimal!

// void find_score() {
//     int total_score = 0;
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 10; j++) {
//             char c;
//             cin >> c;
//             if (c == 'X') {
//                 total_score += min({i + 1, 10 - i, j + 1, 10 - j});
//             }
//         }
//     }
//     cout << total_score << endl;
// }
