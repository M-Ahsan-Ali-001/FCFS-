#include<iostream>
#include<iomanip>

using namespace std;
int main()
{

int *bt , *wt  , *TAT ;
	
int n=0 , i=1;

float AvgWT=0 , AvgTAT=0;

cout<<("Enter total number of processes :");
cin>>n;

bt = new int[n];

wt = new int[n];

TAT = new int[n];

wt[0] = 0;

for (int i =0 ; i<n ; i++ )
{

cout<<"Enter process-"<< i+1 <<":";
cin>>bt[i];


}


while( i < n)
{

wt[i] = bt[i-1] + wt[i-1];
wt[1] = bt[0] + wt[0] ;
i++;
}


i=0;

while(i<n)
{

TAT[i] = bt[i] + wt[i];
i++;


}

cout<<setw(5)<<"BT"<<setw(4)<<"WT" <<setw(4)<<"TAT"<<endl;
i=0;

while(i<n)
{


cout<<setw(5)<<bt[i]<<setw(4)<<wt[i]<<setw(4)<<TAT[i]<<endl; 

i++;
}




i=0;

while( i < n)
{

AvgWT += wt[i];
AvgTAT += TAT[i];
i++;
}

AvgWT /= n;

AvgTAT/=n;

cout<<"Average Wait Time : "<<AvgWT<<"\n"<<
"Average Turn Around Time :"<<AvgTAT<<"\n";



}
