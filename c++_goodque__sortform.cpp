#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//printing the prime number in the given interval 0 to n;
//also the smalllest prime number the numbver be divisble of whole interval;

// void steve_method_to_prime(int n-11){
//     int t[100]={0};
//     for (int i=2;i<=n;i++){
//         if (t[i]==0){
//             for (int j=i*i;j<=n;j+=i){
//                 t[j]=1;
//             }
//         }
//     }
//     cout<<
// }
// void steve_method_to_smallest_prime_divider(int n){
//     int t[100]={0};
//     for (int i=2;i<=n;i++){
//         if (t[i]==0){
//             for (int j=i*i;j<=n;j+=i){
//                 t[j]=i;
//             }
//         }
//     }
//     for (int i=2;i<n;i++){
//         if (t[i]>0){
//         cout<<i<<"="<<t[i]<<endl;
//         } else{
//             cout<<i<<"="<<i<<endl;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     //steve_method_to_prime(n);
//     steve_method_to_smallest_prime_divider(n);
//     return 0;
// }


//simplest form to find gcd of two number by euclid method;

//first method
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     int gcd;
//    while((a-b)!=0){
//        if (a<b){
//            int temp2=a;
//            a=b;
//            b=temp2;
//        }
//        int temp=a-b;
//        a=b;
//        b=temp;
//        cout<<a<<" "<<b<<endl;
//     }
//     cout<<a<<endl;
//     return 0;
// }

// second method
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     while(b!=0){
//         int temp=a%b;
//         a=b;
//         b=temp;
//     }
//     cout<<a<<endl;
//     return 0;
// }