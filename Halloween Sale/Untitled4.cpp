#include <iostream>

using namespace std;

int p,d,m,s,q,z,x;

int main(){
	
	cin>>p>>d>>m>>s;
	
	if(s>=p){
		
		while(s>=0){
			q++;
			if(p-x<=m){			
				s-=m;				
			}
			else{			
				s-=(p-x);				
			}
			x+=d;
		}		
		cout<<q-1<<endl;
	}
	else
		cout<<q<<endl;
	
	
	
	return 0;
}
