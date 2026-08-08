#include<iostream>
#include <vector> 
using namespace std;
int main(){
    int m,n;
    cout<<"Number of Rows: ";
    cin>>m;
    cout<<"Number of cols: ";
    cin>>n;
    // int arr[m][n];  2d arryes

    vector<vector<int>> arr(m,vector<int>(n,0));
    arr.push_back(vector<int>(n,-1));


    //output
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}