#include<bits/stdc++.h>
using namespace std;

string find_treasure(int* arr) {
    int depth = arr[2] + 1;
    string result;
    int has_done = 0;
    while(has_done < depth) {
        for(int i = 0; i < 2; i += 1) {
            has_done += arr[i];
            if(has_done >= depth && i == 0) {
                result = "NO";
                break;
            }
            else if (has_done >= depth && i == 1) {
                result = "YES";
                break;
            }
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> results;
    while(t--) {
        int case_arr[3];
        for(int i = 0; i < 3; i += 1) {
            cin >> case_arr[i];
        }
        results.push_back(find_treasure(case_arr));
    }
    for(string r: results) {
        cout << r << endl;
    }
    return 0;
}