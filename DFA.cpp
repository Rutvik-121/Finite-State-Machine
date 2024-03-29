// C++ Program to implement DFA Accepting the Language  L = {aNbM | N ≥ 0, M ≥ 0, N+M ≥ 1}. , 
//i.e ,regular language L such that all ‘a’ occur before the first occurrence of ‘b’ {a, ab, aab, bb…, }
#include <iostream>
using namespace std;

// Function for state zero Q0
int startStateQ0(char s) {
	cout<<"From State q0  ";
	
	int state;
	if (s == 'a'){
		cout<<"Read an 'a' and went to state q1\n";	
		state = 1;
	}
	else if (s == 'b'){
		cout<<"Read an 'b' and went to state q2\n";
		state = 2;
	}
	else{
		cout<<"Invalid input\n";
	}

	return state;
}
		
// Function for first state Q1
int firstStateQ1(char s) {
	cout<<"From state q1  ";

	
	int state;
	if (s == 'a'){
		cout<<"Read an 'a' and remains in state q1\n";
		state = 1;
	}
	else if (s == 'b'){
		cout<<"Read an 'b' and went to state q2\n";
		state = 2;
	}
	else{
		cout<<"Invalid input\n";
	}
		
	return state;
}
		
// Function for second state Q2
int secondStateQ2(char s) {
	cout<<"From state q2  ";

	int state;
	if (s == 'b'){
		cout<<"Read an 'b' and remains in state q2\n";
		state = 2;
	}
	else if (s == 'a'){
		cout<<"Read an 'a' and went to state q3\n";
		state = 3;
	}
	else{
		cout<<"Invalid input\n";
	}
		
	return state;
}
		
// Function for third state Q3
int thirdStateQ3(char s) {
	cout<<"From state q3  ";
	
	int state;
	if (s == 'b'){
		cout<<"Read an 'b' and remains in state q3\n";
	    state = 3;
	}
	else if (s == 'a'){
		cout<<"Read an 'a' and remains in state q3\n";
		state = 3;
	}
	else{
		cout<<"Invalid input\n";
	}
	return state;
}
		
// Function to check
// if the string is accepted or not
int isAcceptedString(string String) {
	
	int l = String.length();

	// dfa tells the number associated
	// with the present dfa = state
	int state = 0;
	for (int i = 0; i < l; i++) {
		if (state == 0)
			state = startStateQ0(String[i]);
		else if (state == 1)
			state = firstStateQ1(String[i]);
		else if (state == 2)
			state = secondStateQ2(String[i]);
		else if (state == 3)
			state = thirdStateQ3(String[i]);
		else
			return 0;
	}
	if (state == 1 || state == 2)
		return 1;
	else
		return 0;
}

int main() {
	
	string String;
	cout<<"Enter a string for the DFA"<<endl;
	cin>>String;
	if (isAcceptedString(String))
		cout << "\nACCEPTED";
	else
		cout << "\nNOT ACCEPTED";
}	
