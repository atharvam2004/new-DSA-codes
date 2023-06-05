#include<iostream>
#include<string>
using namespace std;
int main()
{
int adj[5][5],trans[5][5],flag=0;
string arr[5]={"Pune","Jalna","Sambhaji Nagar","Mumbai","Beed"};
int arr2[5]={4,5,14,6,4};
cout<<"Enter Distance between Cities :\n";
for(int i=0;i<=4;i++)
{
for(int j=0;j<=4;j++)
{
cout<<arr[i]<<" TO "<<arr[j];
int num = 32 - (arr2[i]+4+arr2[j]);
for(int k=0; k <= num; k++){
cout<<" ";
}
cout<<": ";
cin>>adj[i][j];
}
}

for(int i=0;i<=4;i++)
{
for(int j=0;j<=4;j++)
{
trans[i][j]=adj[j][i];
}
}

for(int i=0;i<=4;i++)
{
for(int j=0;j<=4;j++)
{
if(adj[i][j]!=trans[i][j])
{
flag=1;
}
}
}


if(flag==0)
{
cout<<"Success ! Graph is connected ";
}
else
{
cout<<"Failure ! Graph is not connected ";
}
return 0;
}

