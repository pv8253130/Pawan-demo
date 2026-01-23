include<stdio.h>
int binary search(int arr[],int n,int x)
{
    int low =0
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
        return mid;
        if(arr[mi]<x)
        low=mid+1;
        else
        high=mid-1;
    
    }
    return-1;
}
int mian(){
    int arr[]=(2 3 4 5 6);
    int x=10;
    int m=size of (arr)/size of arr[0])
}