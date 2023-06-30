#include<iostream>
using namespace std;
template<typename t>
class stu{
    public:
    t num;
    t getnum(){
        cin>>num;
        cout<<num;
        return num;
    }
};
int main(){
    stu<int> s1;
    stu<string>s2;
    s1.getnum();
    return 0;
}