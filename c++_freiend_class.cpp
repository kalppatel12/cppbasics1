#include<iostream>
#include<string>
#include<math.h>
using namespace std;


// class a{
//     public:
//     int a;
//     int b;
//     void enter(){
//         cout<<"enetr the iden"<<endl;
//         cin>>a>>b;
//     }
//     friend class b;
// };
// class b{
//     public:
//     int c;
//     void add(a obj){
//         c=obj.a+obj.b;
//         cout<<"c="<<c<<endl;
//     }
// };
// int main(){
//     a A;
//     b B;
//     A.enter();
//     B.add(A);
// }


// class MyClass {
// private:
//     int x;
// public:
//     MyClass(int x) {
//         this->x = x;
//     }
//     friend void printX(MyClass obj);
// };

// void printX(MyClass obj) {
//     cout << "The value of x is: " << obj.x << std::endl;
// }

// int main() {
//     MyClass obj(42);
//     printX(obj);
//     return 0;
// }


class in{
    int a;
    int b;
    int c;
    int d;
    public:
    in(int x,int y,int z,int w){
        a=x;
        b=y;
        c=z;
        d=w;
    }
    friend class out;
};
class out{
    public:
    out(in& t){
        int r=pow(t.a-t.c,2)+pow(t.b-t.d,2);
        cout<<sqrt(r);
    }
};
int main(){
    in aa(1,2,3,4);
    out bb(aa);
    return 0;
}