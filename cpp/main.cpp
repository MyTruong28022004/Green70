#include <iostream>
// #include "functions.h"
using namespace std;

void add(int x, int y, int& total, int& substr){
    total = x + y;
    substr = x - y; 
}

// int main(){
//     int x, y;
//     cin >> x >> y;
//     int res = add(x, y);
//     cout << res;
//     return 0;
// }

// Tạo biến toàn cục
// int x = 8;
// // Cài đặt hàm
// void testGlobal(){
//     x = 10;
//     cout << x + 2 << endl;
// }
// Gọi sử dụng hàm
// int main(){
//     testGlobal();
//     cout << x * 2;
//     return 0;
// }

// int add(int a, int b, int c = 0){
//     return a + b + c;
// }

int main(){
    int a = 10, b = 20, total, substr;
    add(a, b, total, substr);
    cout << total << endl;
    cout << substr << endl;
    // cout << add(a, b, c) << endl;
    return 0;
}

