#include <iostream>
using namespace std;

void calc(int n,int a,int b){
    for(int i=0;i<=n;i++){
        a = a + b;
    }
}

int main(){
    int a = 3;
    int b = 2;
    calc(b,a,b);
    a = a+1;
    cout << a  <<endl;
    return 0;
}