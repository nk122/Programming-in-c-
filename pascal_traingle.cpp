#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    getline(cin,str);
        
    int arr[100][100];
    int l;
    for(l=0;l<n;l++)
    {
        if(l==0)
        {cout<<"[";
            cout<<"\n";
          //  cout<<"\t";
        }
        for(int i=0;i<=l;i++)
        {  
            if(i==0)
            {
			 cout<<"\t";
			cout<<"[";}
            if(i==0 ||i==l)
            {arr[l][i]=1;}
            else
            {
                arr[l][i]=arr[l-1][i-1]+arr[l-1][i];
                
                
            }
            
            if(i!=l)
            {
            	
			cout<<arr[l][i]<<",";}
            else
            {
                cout<<arr[l][i];
            }
            
            
            
        }
        if(l==n-1)
        {cout<<"]";
            cout<<"\n";
            cout<<"]";
        }
        else{
            cout<<"],";
            cout<<"\n";
        }
    }
    
    
    
    
    
    
  return 0;  
}

