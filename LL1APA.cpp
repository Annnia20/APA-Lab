#include <iostream>

using namespace std;
int it1, it2, it3;
int fib_recursiv(int n)
{
    it1++;
    if(n<2)
    {
        return n;
    }
    else
    {
        return fib_recursiv(n-1)+fib_recursiv(n-2);
    }
}
int fib_iterativ(int n)
{
    int i=1;
    int j=0;
    for(int k=0; k<n; k++)
    {
        j=i+j;
        i=j-i;
        it2++;
    }
    return j;
}
int fib_divizare(int n)
{
    int i=1;
    int j=0;
    int k=0;
    int h=1;
    int t;
    while(n>0)
    {
        if((n%2)==1)
        {
            t=j*h;
            j=i*h+j*k+t;
            i=i*k+t;
        }
        it3++;
        t=h*h;
        h=2*k*h+t;
        k=k*k+t;
        n=n/2;
        return j;
    }
}
int main() {
    int N;
    cout<<"Dati n: ";
    cin>>N;
    cout<<"Algoritmul recursiv : "<<fib_recursiv(N)<<endl;
    cout<<"Iteratii : "<<it1<<endl;
    cout<<"Algoritmul iterativ : "<<fib_iterativ(N)<<endl;
    cout<<"Iteratii: "<<it2<<endl;
    cout<<"Algoritmul divizarii : "<<fib_divizare(N)<<endl;
    cout<<"Iteatii : "<<it3<<endl;


    return 0;
}
