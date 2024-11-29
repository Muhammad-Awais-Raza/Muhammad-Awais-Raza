#include<iostream>
using namespace std;
int main(){
	
	string health ;
	int age ;
	string locat;
	char gender;
	
	cout<<" Dear employe !! Enter your Gender (m/f) " ; 
	cin>>gender;
     cout<<"Enter your age";
     	cin>> age;
     	cout<<"Enter your Health Status(poor/excellent)" ;
     	cin>>health;
     	cout<<"Enter your Location " ;
     	cin>>locat;	
if 	(gender=='m' && age<=35 ) {
	
	if (health=="excellent")
		cout<<" Dear Sir !!your  premium rate is Rs. 4 per thousand"<<endl ;	
		if(locat=="city"){
			cout<<"maximum policy amount cannot exceed Rs. 2 lakhs."<<endl ;
		}
else if(health=="poor")
{
cout<< " Your premium rate is Rs. 6 per thousand \n" ;
if(locat=="village"){
	cout<<"maximum policy amount cannot exceed Rs. 10,000 \n " ;
}
}
else {
	cout<<"The Employe is not Insured Thank you !!" ;
}

	}
	

if (gender=='f' && age<=35){
	if(health=="excellent"){
		cout<<" Dear MAM !! Your premium rate is Rs. 3 per thousand\n" ;
	}
	if(locat=="city") {
		cout<<"maximum policy amount cannot exceed Rs. 1 lakh.\n" ;
	}
	else {
		cout<<"The person is not Insured \n" ;
	}
}
return 0;	
}
