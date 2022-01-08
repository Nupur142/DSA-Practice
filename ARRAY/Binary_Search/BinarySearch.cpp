#include<iostream>
#include<cmath>
using namespace std;


int Binary_Search( int arr[],int key,int n)
{
	int s,mid,e;
	s=0;
	e=n-1;
	while(s<=e)
	{
		mid=s+(e-s)/2;
		if(key==arr[mid])
			return mid;
		else if(key<arr[mid])
			e=mid-1;
		else
			s=mid+1;
	}
	return -1;
}
int main()
{
	int key,i,n;
	int arr[] = {1,2,3,6,9,12,15,34,54};
	n=sizeof(arr)/sizeof(int);

    for(i=0;i<n-1;i++)
		cout<<arr[i]<<" ";
    
	cout<<endl<<"enter the key to be searched";
	cin>>key;
	int index = Binary_Search(arr,key,n);

	(index == -1)
		? cout<<"Element is not present in the array"<<endl
		: cout<<"Element is present at index : "<<index<<endl;

	for(i=0;i<n-1;i++)
		cout<<arr[i]<<" ";
    return 0;
}