#include<bits/stdc++.h>
using namespace std;

void bobritto_banditto() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int l_prime, r_prime;
    
    int available_left = -l;
    int available_right = r;
    
    
    int a = min(available_left, m);
    int b = m - a;
    
    if (b <= available_right) {
        l_prime = -a;
        r_prime = b;
    } 
    else {
        b = available_right;
        a = m - b;
        l_prime = -a;
        r_prime = b;
    }
    
    cout << l_prime << " " << r_prime << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        bobritto_banditto();
    }

    return 0;
}