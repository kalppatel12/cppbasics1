// #include<iostream>
// using namespace std;

// class test{
//     int a;
//     int b;
//     public:
//     // test(int i,int j):a(i),b(j)
//     // test(int i,int j):a(i),b(j+2)
//     // test(int i,int j):a(i*2),b(j)
//     test(int i,int j):a(i),b(j+a)
//     // test(int i,int j):b(j),a(i+b)  // this will not haped a give garbage value because a defind first in private area 
//     {
//         cout<<"value of a is "<<a<<endl;
//         cout<<"value of b is "<<b<<endl;

//     }
// };
// int main(){
//     test(4,6);
//     return 0;
// }

#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int arr[t];
    for (int i=0;i<t;i++){
        cin>>arr[i];
    }
    int to=0;
    // for (int i=0;i<t;i++){
    //     int sum1=0;
    //     for (int j=0;j<t;j++){
    //         if (to>t-1){
    //             to=to-t;
            
    //         }to++;
    //         sum1=max(sum1,arr[j]+to);
    //         // cout<<to;
    //     }
    //     cout<<endl;
    //     for (int k=0;k<t;k++){
    //         if (to>t-1){
    //             to=to-t;
    //         }
    //         to++;
    //         cout<<to-1;
    //     }
    // }
    int arrre[t*t];
    // for (int i=0;i<t;i++){
    //     arrre[i]=arr[t];
    //     for (int j=0;j<t;j++){
            
    //     }
    // }
    // arrre[0]=arr[0];
    // cout<<arrre[0][0]<<arrre[0][1];
	return 0;
}
