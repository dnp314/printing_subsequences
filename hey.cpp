#include <iostream>
#include <vector>
using namespace std;


void printF(int ind ,vector<int>&ds,int arr[],int n)
{
    if(ind ==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //take the particular index in the subsequence
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    //no take the particular index in the subsequence
    ds.pop_back();
    printF(ind+1,ds,arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int>ds;
    printF(0,ds,arr,n);







}