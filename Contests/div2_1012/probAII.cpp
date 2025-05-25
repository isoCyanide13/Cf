#include<bits/stdc++.h>
using namespace std;

string find_treasure(int* arr) {
    int x = arr[0], y = arr[1], a = arr[2];
    int depth = a+1;
    if(x >= depth) return "NO";
    else if(x+y >= depth) return "YES";
    else {
        int net_depth_dig = (x+y);
        int num_of_cycles = depth / (x+y);
        int depth_dig = (num_of_cycles * net_depth_dig);
        
        if(depth_dig == depth) return "YES";
        else if(depth_dig + x >= depth) return "NO";
        else return "YES";
    }
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