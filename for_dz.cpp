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
int main() {
    rectangle();
    triangle();
    
    return 0;
}
