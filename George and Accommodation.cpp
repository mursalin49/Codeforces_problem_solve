#include<iostream>
#include<string>
using namespace std;
int main(){
int a,b,c,count=0;
cin>>a;
for(int i=0; i<a;i++)
{
    cin>>b>>c;
    if(c-b>=2)
    {
        count++;
    }
}
cout<<count;

}
