#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={5,7,3,2};
    int n=vec.size();
    cout<<"\n the sorted version of array is--";
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j< n-i-1; j++)
        {
            if (vec[j]>vec[j+1])
            {
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }
    
    
}
