#include<iostream>
using namespace std;

// //single template formate and example
// template<class t>
// class vector{
//     public:
//     int size;
//     t *arr;
//     vector(int m){
//         size=m;
//         arr=new t[size];
//     }
//     t dot_product(vector &v){
//         t total=0;
//         for (int i=0;i<size;i++){
//             total+=arr[i]*v.arr[i];
//         }
//         return total;
//     }
// };

// int main(){
//     vector <int>v1(3);
//     vector <int>v2(3);
//     v1.arr[0]=2;
//     v1.arr[1]=2;
//     v1.arr[2]=2;
//     v2.arr[0]=2;
//     v2.arr[1]=2;
//     v2.arr[2]=2;
//     cout<<v1.dot_product(v2)<<endl;

//     // if I want to change template to float
//     vector <float>v3(3);
//     vector <float>v4(3);
//     v3.arr[0]=2.2;
//     v3.arr[1]=2.2;
//     v3.arr[2]=2.2;
//     v4.arr[0]=2.2;
//     v4.arr[1]=2.2;
//     v4.arr[2]=2.2;
//     cout<<v3.dot_product(v4)<<endl;
//     return 0;
// }

//multiple template formate and example 
// template<class t1, class t2>
// class Birthday{
//     public:
//     t1 date;
//     t2 month;
//     Birthday(t1 date_,t2 month_){
//         date=date_;
//         month=month_;
//     }
//     void display(){
//         cout<<"your Birthday at "<<date<<" "<<month<<endl;
//     }
// };
// int main(){
//     Birthday <int,string>i1(24,"Jan");
//     i1.display();
//     return 0;
// }


//Default template 
// template<class t1=int>
// class gen{
//     t1 a;
//     public:
//     gen(t1 c){
//         a=c;
//     }
//     void display(){
//         cout<<a<<endl;
//     }
// };
// int main(){
//     gen <>g1(3);
//     gen <float>g2(3.2);
//     gen <string>g3("kalp");
//     g1.display();
//     g2.display();
//     g3.display();
//     return 0;
// }


//Function average
template<class t1,class t2>
float average(t1 a,t2 b){
    float h=(a+b)/2;
    return h;
}
int main(){
    cout<<average(2,3)<<endl;
    cout<<average(2.1,3)<<endl;
    cout<<average(2.3,4.5)<<endl;
    return 0;
}