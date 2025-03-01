#include <iostream>
using namespace std;

int main(void){
    int x = 12345;
    int pop = x % 10;
    x /= 10;
    cout << pop << endl;
    cout << x << endl;
    return 0;
}