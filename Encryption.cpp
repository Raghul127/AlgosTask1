#include<iostream>
using namespace std;
int main()
{
	int n, k,i, j, temp;
	char a[100][100];
	cin>>n;
	cin>>k;
	
    k = k % 26;
	
	for(j = 0 ; j <=n; j++)
	{
		gets(a[j]);
	}
	
	for(j = 1; j <= n; ++j)
	{
	
		for(i = 0; a[j][i]!='\0'; ++i)
		{		
			if(a[j][i] >= 'A' && a[j][i] <= 'Z')
			{

				temp = a[j][i];
				temp = temp + k;
				if(temp > 'Z')
				{
					a[j][i] = temp - 'Z' + 'A' - 1;
				}
			   else
			   {
			   		a[j][i] = a[j][i] + k;
			   }
			
			}
			else if(a[j][i] >= 'a' && a[j][i] <= 'z')
			{

				temp = a[j][i];
				temp = temp + k;
				if(temp > 'z')
				{
					a[j][i] = temp - 'z' + 'a' - 1;
				}
			   	else
			   {
			   		a[j][i] = a[j][i] + k;
			   }
			}
		}
		
		cout<<"ciphertext#"<<j<<":"<<a[j]<<endl;
	}
	
	for(j = 1; j <= n; ++j)
	{
	
		for(i = 0; a[j][i]!='\0'; ++i)
		{

			if(a[j][i] >= 'A' && a[j][i] <= 'Z')
			{
				a[j][i] = a[j][i] - k;
				if(a[j][i] < 'A')
				{
					a[j][i] = a[j][i] + 'Z' - 'A' + 1;
				}
		
			}
			else if(a[j][i] >= 'a' && a[j][i] <= 'z')
			{
		
				a[j][i] = a[j][i] - k;
				
				if(a[j][i] < 'a')
				{
					a[j][i] = a[j][i] + 'z' - 'a' + 1;
				}
		
			}
	
		}
		
	cout<<"plaintext#"<<j<<":"<<a[j]<<endl;
		
	}
}
