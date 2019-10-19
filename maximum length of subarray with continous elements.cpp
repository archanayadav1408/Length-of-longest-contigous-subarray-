/*Given an array of distinct integers, find length of the longest subarray which contains numbers that can be arranged in a continuous sequence also find the starting index of longest subarray .

For example :
10 11 12 15 16 18 20 21 22 23

Length of longest contigous subarray is 4 
Array is 20,21,22,23
Index is 6*/

#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n;
	cout<<"Enter size of array";
	cin>>n;
vector<int> a;
cout<<"Enter elements of array";
	for(int i=0;i<n;i++){
	int x;	
	cin>>x;
	a.push_back(x);
	}


	int start=0;
	vector<int>p;
	vector<int>loc;
	int mlen=1;
	int j=0;
	
	for(int i=0;i<n;i++){
	
		p.push_back(INT_MIN);
		loc.push_back(-1);
	
	while(a[i]+1==a[i+1])
	{   if(mlen==1)
	     loc[j]=i;
	
		mlen++;
		p[j]=mlen;
		i++;
	}
	
	j++;
	mlen=1;
	}
	for(int i=0;i<p.size();i++)
    {
   	    	if(mlen<p[i])
        {
            mlen=p[i];
            start=loc[i];
        }
    }

	cout<<" Length of longest contigous subarray is "<<mlen<<endl;
	cout<<"staring index of subarray(0 indexing) is "<<start<<endl;
	cout<<"Subarray is ";
	for(int j=start;j<start+mlen;j++)
	cout<<a[j]<<" ";
}
