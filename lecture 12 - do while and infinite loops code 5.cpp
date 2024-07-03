#include<iostream>
using namespace std;
//infinite loop using for loop
int main(){
	int i;
	for(i=0; ;i++){
		cout<<i;
		if(i>100) break; // this statement gets executed when i is 101
	}
}
