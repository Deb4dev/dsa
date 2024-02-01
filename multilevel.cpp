//inheritance
//multilevel inheritance
#include<iostream>
using namespace std;
class A{
    public:
        int a;
        void get_a(){
            cout<<"enter A: ";
            cin>>a;

        }
};
class B:public A{
    public:
        int b;
        void get_b(){
            cout<<"enter B:";
            cin>>b;
        }
};
class C:public B{
    int c;
    public:
        void get_c(){
            cout<<"enter C:";
            cin>>c;
        }
        void sum(){
            int s;
            s=a+b+c;
            cout<<s<<endl;
        }
};
int main(){
    C add;
    add.get_a();
    add.get_b();
    add.get_c();
    add.sum();
    return 0;
}

