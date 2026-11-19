#include <bits/stdc++.h>
using namespace std;

int main() {
	float unit,bill,newbill;
	cout <<"enter no. of unit consumed :"<<endl;
	cin>>unit;
	if (unit<100)
	bill=unit*5.20+120;
	else if (unit<=200 && unit>=101)
	bill=unit*7.30+230;
	else if (unit>=201 && unit<=300)
	bill=unit*8.10+310;
	else 
	   bill=unit*8.50+420;
	   
	   newbill =bill+(18*bill)/100;
	   cout<<"the elctricity bill is :"<<newbill;
	
	

}
