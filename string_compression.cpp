#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string temp="";
	int count=1;
	char ch[]="aaaaaaaaaaaabbcceeefg";
	// or char ch[]={'a','a','a','b','b','c','c','e','e','e','f','g'};
	for(int i=0;i<strlen(ch);i++){
		if(ch[i]==ch[i+1]){
			count++;
		}
		else{
			temp.push_back(ch[i]);
			if(count>1 && count<10){
				temp.push_back('0'+ count);	
			}
			else if(count>=10){
				int r=count%10;
				temp.push_back('0'+ count/10);
				temp.push_back('0'+r);
			}
		
			count=1;
		}
	}
	for(int i=0;i<temp.size();i++){
		cout<<temp[i]<<" ";
	}
	return 0;
}
