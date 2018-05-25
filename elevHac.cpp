#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n = 0,i,j,temp,start,ppl,cap,k;
		char c='\0';
	int arr[100],in[100],out[100];
	//	input starting floor 
	cout<<"Enter starting floor,capacity,initial no. of ppl inside elev: ";
	cin>>start>>cap>>ppl;

    cout<<"Enter floor order along with ppl in and ppl out (enter in spaces continuously)(consider lift moving initially):"<<endl;
	do{
        scanf("%d", &arr[n]);
        scanf("%d", &in[n]);
        scanf("%d%c", &out[n], &c);
        n++; 
        } while(c!= '\n');
  	
// sorting
      for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(arr[j]>arr[j+1])
            {
                k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
                
                k=in[j];
                in[j]=in[j+1];
                in[j+1]=k;
                
                k=out[j];
                out[j]=out[j+1];
                out[j+1]=k;
            }
    }
 
 
//	searching the position of element   
if(start<=arr[0])
temp=0;
for(i=0;i<n;i++)
{if(start>arr[i])
 temp=i+1;
}

//possibility check
	for(i = temp ; i < n; ++i)
		{
		ppl=ppl+in[i]-out[i];
		if(ppl>cap)
		 {cout<<endl<<"NOT POSSIBLE...CAPACITY EXCEEDED AT FLOOR:"<<arr[i];
			exit(0); }	
		else
		continue;	
		}
	for(i=temp-1;i>=0;i--)
		{
	 	ppl=ppl+in[i]-out[i];
		if(ppl>cap)
		 {cout<<endl<<"NOT POSSIBLE...CAP EXCEEDED AT FLOOR:"<<arr[i];
			exit(0); }	
		else
		continue;	
		}



//  outputting the required answer
    
  	cout<<endl<<"POSSIBLE !!"<<endl<<start<<" ";
	for(i = temp ; i < n; ++i)
		{
			cout<<arr[i]<<" ";		
		}
	for(i=temp-1;i>=0;i--)
		{
	 		cout<<arr[i]<<" ";
		}
	 
	 int d = 2 * (arr[n - 1] - start) + (start - arr[0]);
	 cout<<endl<<"Total Distance: "<<d;
}
