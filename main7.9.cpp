#include <iostream>
#include <array>
using namespace std;
int main()
{
	int i,j,min,sum=0;
	array<array<int,3>,2>t;
    t[1][2]=0;
    t={};
    cout<<"Please enter array��";
    for(i=0;i<2;i++){
    for(j=0;j<3;j++){
    	cin>>t[i][j];
		}
	}
	min=t[0][0];
	cout<<"  �� �� ��\n";
	for(i=0;i<2;i++){
    	for(j=0;j<3;j++){
    		if(i==0&&j==0) cout<<"�� ";
  			if(i==1&&j==0) cout<<"�� ";
  			cout<<t[i][j]<<"  ";
  			if(j==2) cout<<"\n";
		}
	}
    for(i=0;i<2;i++){
    	for(j=0;j<3;j++){
    		if(min>t[i][j]) min=t[i][j];
		}
	}
	cout<<"The smallest is��"<<min<<"\n";
	cout<<"The element in the first row is��";
	for(j=0;j<3;j++){
		cout<<t[0][j]<<" ";
		if(j==2) cout<<"\n";
	}
		for(i=0;i<2;i++){
			sum+=t[i][1];
	}
	cout<<"The sum of second list��"<<sum<<" ";
}
