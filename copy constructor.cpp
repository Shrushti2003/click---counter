#include<iostream>
using namespace std;
class A{
int a,b;
public:
A(){
    a = 0;
    b = 0;
}
A(int p,int q){
    a = p;
    b = q;
}
A(A &t1){
    a = t1.a;
    b = t1.b;
}
void getdata(){
    cout<<" Enter value:- ";
    cin>>a>>b;
}
void showdata(){
    cout<<" a= "<<a<<endl;
    cout<<" b= "<<b<<endl;
}
};
int main(){
   A x;
   A x1(9,11);
   A y(x1);
   x.showdata();
   x1.showdata();
   y.showdata();
}
