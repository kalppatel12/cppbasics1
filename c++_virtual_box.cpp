#include<iostream>
using namespace std;

class student{
    protected:
    int roll;
    public:
    void set_roll(int m){
        m=roll;
    }
    void out_roll(){
        cout<<"roll no."<<roll<<endl;
    }
};

class acadmic:virtual public student{
    protected:
    int mat;
    int phy;
    public:
    void set_marks(int m,int n){
        mat=m;
        phy=n;
    }
    void out_marks(){
        cout<<"math marks is"<<mat<<endl;
        cout<<"phy marks is"<<phy<<endl;
    }
};

class pt:virtual public student{
    protected:
    int score;
    public:
    void set_score(int m){
        score=m;
    }
    void out_score(){
        cout<<"your pt score is"<<score<<endl;
    }
};

class result:public pt,public acadmic{
    protected:
    int total;
    public:
    void total_(){
        total=phy+mat+score;
    }
    void display(){
        out_roll();
        out_marks();
        out_score();
        cout<<"overall performance is the "<<total<<endl;
    }
};
int main(){
    result kalp;
    kalp.set_roll(1177);
    kalp.set_marks(99,98);
    kalp.set_score(100);
    kalp.total_();
    kalp.display();
    return 0;
}