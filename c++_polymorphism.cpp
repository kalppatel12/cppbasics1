#include<iostream>
#include<string>
using namespace std;

/// function overloading 
// struct stru{
//     public:
//     void emp(){
//         cout<<"empty function"<<endl;
//     }
//     void emp(int x){
//         cout<<"integer x="<<x<<endl;
//     }
//     void emp(double x){
//         cout<<"float x="<<x<<endl;
//     }
// };
// int main(){
//     stru c;
//     c.emp();
//     c.emp(2);
//     c.emp(2.3);
//     return 0;
// }


//function overloading 
// class Complex {
// private:
//     int real, imag;
// public:
//     Complex(int r = 0, int i = 0){
//         real = r;
//         imag = i;
//     }
//     Complex operator+(Complex const& obj){
//         Complex res;
//         res.real = real + obj.real;
//         res.imag = imag + obj.imag;
//         return res;
//     }
//     void print() { cout << real << " + i" << imag << endl; }
// };
// int main(){
//     Complex c1(10, 5), c2(2, 4);
//     Complex c3 = c1 + c2;
//     c3.print();
// }

//pointer polymorphism 
// class base{
//     public:
//     int var_base;
//     void display(){
//         cout<<"var_base="<<var_base<<endl;
//     }
// };
// class derived:public base{
//     public:
//     int var_derived;
//     void display(){
//         cout<<"var_base="<<var_base<<endl;
//         cout<<"var_derived="<<var_derived<<endl;
//     }
// };
// int main(){
//     base *base_;
//     base obj_base;
//     derived obj_derived;
//     base_ = &obj_derived;
//     base_->var_base=34; 
//     base_->display();
//     obj_derived.var_derived=23;
//     obj_derived.display();
//     return 0;
// }


//virtual base plolymorphism 
class base{
    public:
    int var_base=12;
    virtual void display(){
        cout<<"var_base="<<var_base<<endl;
    }
};
class derived:public base{
    public:
    int var_derived=13;
    void display(){
        cout<<"var_base="<<var_base<<endl;
        cout<<"var_derived="<<var_derived<<endl;
    }
};
int main(){
    base *base_;
    base obj_base;
    derived obj_derived;
    base_ = &obj_derived;
    base_->display();
    return 0;
}
