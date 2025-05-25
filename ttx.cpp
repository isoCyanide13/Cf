#include <bits/stdc++.h>
#include<semaphore>
using namespace std;

typedef unsigned int uint;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    // initializing all variables to int max
    int ix = INT_MAX;
    int iy = INT_MAX;

    uint uix = INT_MAX;
    uint uiy = INT_MAX;

    ll llx = INT_MAX;
    ll lly = INT_MAX;

    int iz0 = ix + iy; // overflow
    int iz1 = uix + uiy; // overflow
    int iz2 = llx + lly; // overflow

    uint uiz0 = ix + iy; // overflow
    uint uiz1 = uix + uiy; // won't overflow
    uint uiz2 = llx + lly; // won't overflow
    uint uiz3 = ix + uiy; // won't overflow
    uint uiz4 = uix + lly; // won't overflow
    uint uiz5 = llx + iy; // won't overflow

    ll llz0 = ix + iy; // overflow
    ll llz1 = uix + uiy; // won't overflow
    ll llz2 = llx + lly; // won't overflow
    ll llz3 = ix + uiy; // won't overflow
    ll llz4 = uix + lly; // won't overflow
    ll llz5 = llx + iy; // won't overflow

    decltype(ix) ixCopy = ix;
    decltype(iy) iyCopy = iy;
    decltype(uix) uixCopy = uix;
    decltype(uiy) uiyCopy = uiy;
    decltype(llx) llxCopy = llx;
    decltype(lly) llyCopy = lly;


    cout << "INT_MAX: " << INT_MAX << '\n';
    cout << "UINT_MAX: " << UINT_MAX << '\n';
    cout << "LLONG_MAX: " << LLONG_MAX << '\n' << '\n';

    cout << "ix, iy-> INT" << '\n';
    cout << "uix, uiy-> USIGNED INT (UINT)" << '\n';
    cout << "llx, lly-> LONG LONG (LL)" << '\n' << '\n';

    cout << "Type of ixCopy: " << typeid(ixCopy).name() << '\n';
    cout << "Type of iyCopy: " << typeid(iyCopy).name() << '\n';
    cout << "Type of uixCopy: " << typeid(uixCopy).name() << '\n';
    cout << "Type of uiyCopy: " << typeid(uiyCopy).name() << '\n';
    cout << "Type of llxCopy: " << typeid(llxCopy).name() << '\n';
    cout << "Type of llyCopy: " << typeid(llyCopy).name() << '\n' << '\n';
    
    cout << "INT var = INT MAX(INT + INT): " << iz0 << " (OVERFLOWN !)" << '\n';
    cout << "INT var = UINT MAX(INT + INT): " << iz1 << " (OVERFLOWN !)" << '\n';
    cout << "INT var = LL MAX(INT + INT): " << iz2 << " (OVERFLOWN !)" << '\n' << '\n';

    cout << "UINT var = INT MAX(INT + INT): " << uiz0 << " (WONT OVERFLOWN !)" << '\n';
    cout << "UINT var = INT MAX(INT + INT) + 1: " << uiz0 + 1 << " (WONT OVERFLOWN !)" << '\n';
    cout << "UINT var = INT MAX(INT + INT) + 2: " << uiz0 + 2 << " (OVERFLOWN !)" << '\n';
    cout << "UINT var = UINT MAX(INT + INT): " << uiz1 << " (WONT OVERFLOW !)" << '\n';
    cout << "UINT var = LL MAX(INT + INT): " << uiz2 << " (WONT OVERFLOW !)" << '\n';
    cout << "UINT var = INT, UINT MAX(INT + INT): " << uiz2 << " (WONT OVERFLOW !)" << '\n';
    cout << "UINT var = UINT, LL MAX(INT + INT): " << uiz2 << " (WONT OVERFLOW !)" << '\n';
    cout << "UINT var = LL, INT MAX(INT + INT): " << uiz2 << " (WONT OVERFLOW !)" << '\n' << '\n';

    cout << "LL var = INT MAX(INT + INT): " << llz0 << " (OVERFLOWN !)" << '\n';
    cout << "LL var = UINT MAX(INT + INT): " << llz1 << " (WONT OVERFLOW !)" << '\n';
    cout << "LL var = LL MAX(INT + INT): " << llz2 << " (WONT OVERFLOW !)" << '\n';
    cout << "LL var = INT, UINT MAX(INT + INT): " << llz2 << " (WONT OVERFLOW !)" << '\n';
    cout << "LL var = UINT, LL MAX(INT + INT): " << llz2 << " (WONT OVERFLOW !)" << '\n';
    cout << "LL var = LL, INT MAX(INT + INT): " << llz2 << " (WONT OVERFLOW !)" << '\n';

    return 0;
}