//intersection of 2 loops
#include<iostream>
using namespace std;
#define MAX 5
void input(int a[],int n);
void output(int a[],int n);
void intersection(int a[],int b[],int n,int m);
int main()
{
    int a[MAX],b[MAX],n,m;
    cout<<"\nenter size of first array--";
    cin>>n;
    cout<<"\nenter size of second array--";
    cin>>m;
    input(a,n);
    input(b,m);
    intersection(a,b,n,m);
    return 0;
}
void input(int a[],int n)
{
    cout<<"\nenter elements of array--";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void output(int a[],int n)
{
    cout<<"\nthe entered array is--";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void intersection(int a[],int b[],int n,int m)
{
    cout<<"\nintersection of two arrays is--";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }
        
    }
    
}