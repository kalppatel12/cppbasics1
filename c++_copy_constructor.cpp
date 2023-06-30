#include<iostream>
#include<string.h>
using namespace std;
class name{
    int a;
    public:
    name(){
        a=3;
    }
    name(int n){
        a=n;
    }
    ~name(){
        cout<<a<<endl;
    }
};
int main(){
    name a1,a2(2),a4;
    return 0;
}