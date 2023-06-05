#include<iostream>
using namespace std;
int main()
{
int a[5],p[5],temp1,temp2;
string ward="";
cout<<"Enter elements and priorties associated with it :\n";
cout<<"*Note : Priority Should be within 1,2,3 !\n\n";
for(int i=0;i<5;i++)
{
cout<<"Element "<<i+1<<" : ";
cin>>a[i];
cout<<"Priority of "<<i+1<<" element : ";
cin>>p[i];
}

for(int i=0;i<4;i++)
{

for(int j=i+1;j<5;j++)
{
if(p[i]>p[j])
{
temp1=p[i];
p[i]=p[j];
p[j]=temp1;


temp2=a[i];
a[i]=a[j];
a[j]=temp2;
}

}
}

cout<<"\n\n";

cout<<"Sr."<<" | "<<"No."<<" | "<<"Pri"<<" | "<<" Ward "<<endl;
for(int i=0;i<5;i++)
{
if(p[i]==1)
{
ward="ICU";
}
else if(p[i]==2)
{
ward="Special";
}
else
{
ward="Genral";
}
cout<<i+1<<"   | "<<a[i]<<"  | "<<p[i]<<"   | "<<ward<<endl;
}

return 0;
}
