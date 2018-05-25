// normal mode
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main()
{
	int n = 0,i,j,temp,start;
	
	int arr[1000];
	char c='\0';
	
	//	input starting floor 
	cin>>start;

	do{
        scanf("%d%c", &arr[n], &c);
        n++; 
        } while(c!= '\n');

	
  	sort(arr,arr+n);
  	
//	searching the position of element   
if(start<=arr[0])
temp=0;
for(i=0;i<n;i++)
{if(start>arr[i])
 temp=i+1;
}
  	
//  outputting the required answer
    if(!(temp==0))
  	cout<<start<<" ";
	for(i = temp ; i < n; ++i)
		{
			cout<<arr[i]<<" ";		
		}
	for(i=temp-1;i>=0;i--)
		{
	 		cout<<arr[i]<<" ";
		}
	 
	 int d = 2 * (arr[n - 1] - start) + (start - arr[0]);
	 cout<<endl<<"Total Distance: "<<abs(d);
}
