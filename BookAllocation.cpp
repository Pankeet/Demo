// Book Allocation Problem 
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr ,int n , int m , int mid){

    int StudentCount = 1;
    int pageSum = 0;

    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            StudentCount++;
            if(StudentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookallocation(vector<int> arr, int n , int m){
    int s = 0;
    int e, sum = 0;
    int ans = -1 ;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    e = sum;
    while(s<=e){
    int mid = s + (e-s)/2;

    if(isPossible(arr, n , m ,mid)){
            ans = mid;
            e = mid - 1;
    }
    else{
        s = mid + 1;
    }
}
return ans;
}
int main(){
    
    vector<int> ary = {10,20,30,40};
    int n,m;
    cin >> m;
    n = ary.size();
    int asn = bookallocation(ary,n,m);
    cout << asn ;
}
