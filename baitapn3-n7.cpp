#include<iostream>
using namespace std;

void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}

void xuat(int a[], int n) {
	
	for(int i = 0; i < n; i++) {
		cout<<a[i]<< " "<<endl;
	}
}
void sapxep(int a[], int n){
	int tg;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	cout<<"Cac phan tu sau khi duoc sap xep "<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
}

void sapxepptc(int a[], int n){
	int tg;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
  			if(a[i]>a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
  		      }	
		}
	}
	cout<<"Cac phan tu chan sau khi sap xep "<<endl;
	for(int i=0; i<n; i++){
		if(a[i]%2 == 0){
		 cout<<a[i]<<endl; 
	   }
	}
}

void sapxepptl(int a[], int n){
	int tg;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
  			if(a[i]<a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
  		      }	
		}
	}
	cout<<"Cac phan tu le sau khi sap xep "<<endl;
	for(int i=0; i<n; i++){
		if(a[i]%2 != 0){
		 cout<<a[i]<<endl; 
	   }
	}
}
void xoa(int a[], int n){
	int socantim;
	cout<<"So can tim la: ";
	cin>>socantim;
	for(int i=0; i<n; i++){
		if(socantim == a[i]){
			for(int j=i; j<n-1; j++){
				a[j] = a[j+1];
			}
			n--;
			i--;
		}
	}
    xuat(a,n);
}



int main(){
	int a[1000];
	int n;
	cout << "n= ";
	cin >> n;
	nhap(a,n);
	cout<<"Cac phan tu trong mang la "<<endl;
	xuat(a,n);
	sapxep(a,n);
	sapxepptc(a,n);
	sapxepptl(a,n);
	xoa(a,n);
}