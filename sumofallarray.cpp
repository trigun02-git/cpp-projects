#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5};
    int n=vec.size();
    for (int start = 0; start < n; start++)
    {
            int current_sum = 0;   // reset for each new start

        for (int end = start; end < n; end++)
        {
            current_sum+=vec[end];
            cout<<current_sum<<" ";
        }
    }
    
}