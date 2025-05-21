#include<bits/stdc++.h>
using namespace std;

int find_total_baloons(vector<char> s) {
    for(int i = 0; i < s.size(); i += 1) {
        for(int j = i+1; j < s.size(); j+= 1) {
            if(s[i] > s[j]) swap(s[i], s[j]);
        }
    }
    int total_balloons = 0;
    for(int i = 0; i < s.size(); i += 1) {
        if(i < s.size()-1 && s[i] == s[i+1]) total_balloons += 1;
        else total_balloons += 2;
    }
    return total_balloons;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results;

    while(t--) {
        int n;
        cin >> n; 
        vector<char> teams_solved(n);

        for(int i = 0; i < n; i++) {
            cin >> teams_solved[i];
        }

        results.push_back(find_total_baloons(teams_solved));
    }

    for(int r: results) {
        cout << r << endl;
    }

    return 0;
}
