#include <iostream>
using namespace std;

int main(){
    int data[9] = {24,18,12,9,16,66,32,4};
    int target = 16;
    for(int i=0;i <= sizeof(data);i++){
        if(data[i]==target){
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}