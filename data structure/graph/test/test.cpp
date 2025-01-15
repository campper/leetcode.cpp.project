#include <iostream>
#include <string>
#include <cassert>
using namespace std;

void calc(int n,int a,int b){
    for(int i=0;i<=n;i++){
        a = a + b;
    }
}

string substring(string t,int s,int e){
    string result = "";
    // for(int i=s-1;i<e;i++)
    // {
    //     result.push_back((t[i]));
    // }
    assert(  e > s );
    int i=s;
    while(i<=e){
        result.push_back(t[i-1]);
        i++;
    }

    return result;
}

int main(){
    string identity = "110104200306215328";

    string birth_day = substring(identity,7,14);
    cout<<birth_day<<endl;

    return 0;
}