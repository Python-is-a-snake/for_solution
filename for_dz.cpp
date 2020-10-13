#include <iostream>


using namespace std;
void rectangle(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void triangle(){
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<("*");
        cout<<("\n");
    }
}
void isosceles_triangle(){
    int e=1;
    for(int a=1;a<=5;a++)
    {
        for(int b=4;b>=a;b--)
        {
            cout<<" ";
        }
        for(int c=0;c<e;c++)
        {
            cout<<"*";
        }
        cout<<endl;
        e=e+2;
    }
}

int main() {
    rectangle();
    triangle();
    isosceles_triangle();
    return 0;
}
