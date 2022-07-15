#include<bits/stdc++.h>

using namespace std;

int main(){
	
	list<int> l1;
	list<int> l2;
	
	l1.push_back(5);
	l1.push_back(6);
	l1.push_back(4);
	
	l2.push_back(2);
	l2.push_back(4);
	l2.push_back(3);
	
	int s1=0,s2=0;
	list<int>::reverse_iterator itr;
	for(itr=l1.rbegin();itr!=l1.rend();itr++){
		int k=*itr;
		s1=s1*10+k;
	}
	for(itr=l2.rbegin();itr!=l2.rend();itr++){
		int k=*itr;
		s2=s2*10+k;
	}
	
	int s3;
	s3=s1+s2;
	list<int> l3;
	while(s3!=0){
		l3.push_back(s3%10);
		s3=s3/10;
	}
	
	list<int>::iterator itrr;
	
	for(itrr=l3.begin();itrr!=l3.end();itrr++){
		cout<<*itrr<<" ";
	}
	cout<<endl;
	
	for(auto x:l3){
		cout<<x<<" ";
	}
	
	return 0;
}
