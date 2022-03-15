#include<iostream.h>
#include<fstream.h>
#include<math.h>
void ham(int *p, int &n){
	ifstream f("in2.txt");
	if(!f){
		cout<<" loi roi ";
		exit(1);
	}	
	f>>n;
	for(int i = 0; i < n ; i++){
		f>>*(p+i);
	}
	f.close();	
}	
int snt(int p){
	for(int i = 2 ; i < sqrt(p) ; i++)
	{
	       if(p%i==0)
	          return 1;
	}
	return 0;
}	
int shh(int p){
	int s = 0;
	for(int i = 1; i < p ; i++)
	{
		if(p%i==0)
		     s+= i;
	}	
	if(s == p)
	    return 0;
	else 
	    return 1;    
}	
int sdx(int p){
	int c, s = 0;
	for(int i= p; i > 0; i/=10){
		c = i%10;
		s= s*10 + c;
	}
	if(s == p)
	    return 0;
	else
	    return 1;    
}
int sapxep(int a[], int n){
          for(int i = 0; i < n-1 ; i++)
              for(int j = i + 1 ; j < n; j++)
                  if(a[i]>a[j]){
                  	   int tg= a[i];
                  	   a[i] = a[j];
                  	   a[j] = tg;
                  }	
}	
void ham1(int a[], int n){
	ofstream f("in2.txt");
	if(!f){
		cout<<" loi roi ";
		exit(1);
	}
	f<<n<<endl;
	for(int i = 0; i < n; i++)
	    f<<a[i]<<" ";	
	f<<"\nso nguyen to la : ";
	for(int i = 0; i < n ; i++)
	{
		if(snt(a[i])==0)
		    f<<a[i]<<" ";
	}	
	f<<"\nso hoan hao la : ";
	for(int i = 0; i < n; i++){
		if(shh(a[i])==0)
		     f<<a[i]<<" ";
	}	
	f<<"\nso doi xung la : ";
	for(int i = 0; i < n ; i++){
		if(sdx(a[i])==0)
		     f<<a[i]<<" ";
	}
	f.close();	
}	
void ham2(int a[], int n){
	ofstream f("out2.txt");
	if(!f){
		cout<<" loi roi ";
		exit(1);
	}
	sapxep(a,n);
	for(int i = 0; i < n ; i++)
	   f<<a[i]<<" ";
	f.close();
}	
int main(){
	int n, a[100];
	ham(a,n);
	ham1(a,n);
	ham2(a,n);
	delete a;
	return 0;
}	