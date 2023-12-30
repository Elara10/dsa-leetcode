// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


#include<iostream>
#include<tuple>
using namespace std;
int  findIndices(int arr[],int n,int target)
{
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
         if(arr[i]+arr[j]==target){
        
            cout<<"Output:("<<i<<","<<j<<")\n";

         }
            
        }
        
    }

}
int main()
{
    int arr[]={2,7,11,15};
    int n=4;
    int target=9;
    findIndices(arr,n,target);
    
    return 0;

}
