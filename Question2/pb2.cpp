#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return (n*factorial(n-1));
}
int findsmall(char* str, int l, int h)
{
    int c= 0, i;
    for (i = l+1; i <= h; ++i){
        if (str[i] < str[l])
            ++c;
    }

    return c;
}
int rank (char* str)
{
    int l = strlen(str);
    int mul = factorial(l);
    int r = 1;
    int c,i;
    for (i = 0; i < l; ++i)
    {
        mul =mul/ l - i;
        c = findsmall(str, i, l-1);
        r=r+(c * mul) ;
    }
    return r;
}

int main()
{
    int n,rankans;
    cout<<"enter n";
    cin>>n;
    char str[n],a[n];
    cout<<"enter the characters one by one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<"enter the string for which the rank has to be found"<<endl;
    cin>>a;
    cout<< "the rank of the given string is"<<endl<<rank(a);
    return 0;
}
