/*
1. Khởi tạo 1 chương trình
2. Biến, cách đọc input, xuất output (console)
*/
// Nhập vào 2 số nguyên a, b, tính tổng và xuất ra màn hình
// Số nguyên: int, số thực: float, chuỗi: string
#include <iostream>
using namespace std;

int main(){
    int a, b, c; //khai báo biến

    //1. lấy input (input)
    cin >> a >> b;
    //2. quá trình xử lý (process)
    c = a + b;
    //3. xuất output (output)
    cout << c << '\n';
    
    return 0;
}