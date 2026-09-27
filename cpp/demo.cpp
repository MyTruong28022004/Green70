#include <iostream>
using namespace std;

int main(){
    int a = 3, b = 4, maxab;
    // if (a > b){
    //     maxab = a;
    // } else {
    //     maxab = b;
    // }
    maxab = (a > b) ? a : b;
    cout << maxab << "\n";
    return 0;
}