//addition of two matrix
#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the value of row and column :"<<endl ;
	cin>>r>>c;
	int a[r][c];
	int b[r][c];
	int sum[r][c];
	
	cout<<"Enter the value of first matrix :"<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter the value of seccond matrix :"<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>b[i][j];
		}
	}
	
	cout<<"Display the element of first matrix :\n";//we can also use << endl instead
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Display the element of second matrix :"<<endl;
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		cout<<" "<<b[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Sum of matrix";
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
  		sum[i][j]=a[i][j]+b[i][j];
	  }
  }
  cout<<" Display the sum "<<endl;
  for(i=0;i<r;i++)
  {
  	for(j=0;j<r;j++)
  	{
  		cout<<" "<<sum[i][j];
	  }
	  cout<<endl;
  }
  return 0;
}


