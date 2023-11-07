#include<iostream>
using namespace std;

void facto(int);

int main()
{
        int n;
        cout<<"Enter any number :: ";
        cin>>n;
        facto(n);

}

void facto(int n)
{
        int f=1,n1;
        n1=n;
        if(n==0)
        cout<<"\nFactorial of [ "<<n1<<"! ] is 1.\n";
        else
        {
                while(n>0)
                {
                        f=f*n;
                        n--;
                }
        }
        return 0;
}
