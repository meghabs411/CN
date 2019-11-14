#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#define bucketSize 512
using namespace std;
void bktInput(int a,int b);

int main()
{
int op,pktSize;
cout<<"Enter output size";
cin>>op;
for(int i=1;i<=5;i++)
{
usleep(rand()%1000);
pktSize=rand()%1000;
cout<<"\n packet no"<<i<<"\tpacket size="<<pktSize;
bktInput(pktSize,op);
}
return 0;
}

void bktInput(int a,int b)
{
if(a>bucketSize)
cout<<"\n\t\tBucket overflow";
else
{
usleep(500);
while(a>b)
{
cout<<"\n\t\t"<<b<<"bytes outputted";
a-=b;
usleep(500);
}
if(a>0)
cout<<"\n\t Last"<<a<<"bytes sent\t";
cout<<"\n\t Packet output successful";
}
}
