#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int>vec;
    cout<<"\nenter the size of vector=";
    cin>>n;
    cout<<"\nenter elements of vector=";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    int target=9;
    bool found=false;
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (vec[i]+vec[j]==target)
            {
                cout<<i<<" "<<j<<" "; 
                found=true;
            }
            
        }
        
    }
    return 0;   
}