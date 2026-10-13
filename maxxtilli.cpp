#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,0,5,3,8};
    int n=vec.size();
    int mx=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,vec[i]);
        cout<<mx<<endl;
    }
    
}