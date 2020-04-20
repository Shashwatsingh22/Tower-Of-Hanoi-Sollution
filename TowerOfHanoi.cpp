#include<iostream>
#include<string>
using namespace std;

void ShiftTheDisk(int n,int A, int B,int C)  //here n will be the Number of the Disks...
                                                 //A,B and C are the tower name that we have passed as the 1,2,3
{
	if(n>0)
	{
	ShiftTheDisk((n-1),A,C,B);  //here we are transfering the 2 disk by an trick to the B tower by an Trick (Recursion)
    cout<<"Moved From :("<<A<<" to "<<C<<")"<<endl;
	ShiftTheDisk((n-1),B,A,C); //here now finally we are shifting the disk from B to C
    }

}

int main()
{
	int num;
	int x=1,y=2,z=3;
	cout<<"Enter the Number of the Disks : ";
	cin>>num;

	cout<<"Here are the Moves that u can make to Transfer Whole Given Disk to directly at the Last tower "<<z<<"(According to the rule) : "<<endl;
	ShiftTheDisk(num,x,y,z);
	cout<<"Successfull Your Whole Disk are moved from: "<<x<<" to "<<z<<" Accoding to the rule."<<endl;
}                                                 
