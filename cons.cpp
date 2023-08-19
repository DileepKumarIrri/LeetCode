#include<iostream>
#include<vector>
using namespace std;
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=0;i<arr.size()-3;i++)
        {
            for(int j=i;j<arr.size()-3;j++)
            {
               if((arr[j+1]-arr[j] == 2) && (arr[j+2]-arr[j+1] ==2) )
               {
                    cout<<arr[j+2];
                    cout<<arr[j+1];
                    cout<<arr[j];
                    
               }
            }
        }
        return false;
    }
int main()
{   
    vector<int>arr {1,2,34,3,4,5,7,23,12};
    cout<<threeConsecutiveOdds(arr);
}