#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double sum=0, x;
	do{
		cout << "Input number";
		cin >>x;
		if(x<=0){
			continue;
		}
		double y=sqrt(1+x*x);
		sum +=1/(1+y);
	}while(x!=0);
	cout << "Result" << sum << endl;
	return 0;
}

