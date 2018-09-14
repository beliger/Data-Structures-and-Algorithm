#include <iostream>
//How many possible combinations of the money can we get, given 10/5/2/1/0.5/0.1
int arr[5]={50,20,10,5,1};
int possible_combine(int n, int index)
{
	if(n<0) return 0;
	if(n==0)return 1;
	int num=0;
	if(index==5) return 0;
	for(int i=0;i<=n/arr[index];i++)
	{
	num+=possible_combine(n-i*arr[index],index+1); 
	}
	return num;
}

