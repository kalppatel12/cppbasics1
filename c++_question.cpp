#include<iostream>
#include<string.h>
using namespace std;

class info{
    int roll;
    string name;
    public:
    void getdata(int m,string n){
        roll=m;
        name=n;
    }
    void out(){
        cout<<roll<<endl;
        cout<<name<<endl;
    }
};

int main(){
    int size;
    cin>>size;
    info *ptr=new info [size];
    info *tempptr = ptr;
    for (int i=0;i<size;i++){
        int ro;
        string nae;
        cin>>ro;
        cin>>nae;
        (*ptr).getdata(ro,nae);
        ptr++;
    }
    for (int i=0;i<size;i++){
        (*tempptr).out();
        tempptr++;
    }
    return 0;
}