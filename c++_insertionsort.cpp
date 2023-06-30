#include<iostream>
using namespace std;


// void insertion_sort(int arr[],int n){
//     for (int i=1;i<n;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current &&j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     insertion_sort(arr,n);
//     for (int j=0;j<n;j++){
//         cout<<arr[j]<<endl;
//     }
//     return 0;
// }


// class in{
//     int data1;
//     public:
//     int data2;
//     void setdata(){
//         data1=10;
//         data2=20;
//     }
//     int getdata1(){
//         return data1;
//     }
//     int getdata2(){
//         return data2;
//     }
// };

// class out: public in{
//     int data3;
//     public:
//     void pro(){
//         data3=data2*getdata1();
//     }
//     void display(){
//         cout<<"the data 1 is "<<getdata1()<<endl;
//         cout<<"the data 2 is "<<data2<<endl;
//         cout<<"the data 3 is "<<data3<<endl;
//     }
// };

// int main(){
//     out a1;
//     a1.setdata();
//     a1.pro();
//     a1.display();
//     return 0;
// }


//   SAME CODE , BUT SLIGHT DIFFERENT BECAUSE THESE TIME INHERITANCE IS THE PRIVATE SO SOME CHANGE BE HAPPENED 

// class in{
//     int data1;
//     public:
//     int data2;
//     void setdata(){
//         data1=10;
//         data2=20;
//     }
//     int getdata1(){
//         return data1;
//     }
//     int getdata2(){
//         return data2;
//     }
// };

// class out: private in{
//     int data3;
//     public:
//     void pro(){
//         setdata();
//         data3=getdata2()*getdata1();
//     }
//     void display(){
//         cout<<"the data 1 is "<<getdata1()<<endl;
//         cout<<"the data 2 is "<<getdata2()<<endl;
//         cout<<"the data 3 is "<<data3<<endl;
//     }
// };

// int main(){
//     out a1;
//     a1.pro();
//     a1.display();
//     return 0;
// }

