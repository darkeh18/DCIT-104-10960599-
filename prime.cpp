# include<iostream> 

// My name is Elijah Darkeh Agbedam
// My ID num is 10960599
// I pledge that this assignment was done by me

using namespace std;
void AverageOfPrimeNum(){
	 int num;   
	 int sumOfPrimeNumbers; 
	 float countOfPrimeNumbers;  
	 float avgOfPrimeNumbers;
	sumOfPrimeNumbers = 0;   
	countOfPrimeNumbers = 0;
	cout<<"Enter any positive integer: ";
	cin>>num;
	
	cout<<"The Prime numbers below "<<num<<" are"<<endl;
	
    for(int x=2;x<num;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		sumOfPrimeNumbers+=x;
		countOfPrimeNumbers+=1;
	    }
	}
	avgOfPrimeNumbers = sumOfPrimeNumbers/countOfPrimeNumbers;
	cout<<"The sum of the prime numbers above is "<<sumOfPrimeNumbers<<endl;
	cout<<"The count of the prime numbers is "<<countOfPrimeNumbers<<endl;
	cout<<"The average the of the sum of the prime numbers above is "<<avgOfPrimeNumbers<<endl;
}
int main(){
	AverageOfPrimeNum();
	return 0;
}
