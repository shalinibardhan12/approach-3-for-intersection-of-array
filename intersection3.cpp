 #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void findArrayIntersection(vector<int> arr1,vector<int> arr2)
{
    
    for(int i =0;i<arr1.size();i++)
    {
        int element = arr1[i];
        for(int j =0;j<arr2.size();j++)
        {
            if(element <arr2[j])
            {
                break;
            }
            else if(element==arr2[j])
            {
                cout<<element<<" ";
                arr2[j] = -2;
                break;
            }
        } 
    }


}
int main()
{
      vector<int> arr1= {1,2,2,2,3,4};
      vector<int> arr2 = {2,2,3,3};
     findArrayIntersection( arr1, arr2 );
    
    return 0;

}