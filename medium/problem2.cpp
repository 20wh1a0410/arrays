#include<iostream>
using namespace std;
string sub(string first,string second){
	int flen=first.length();
	int slen=second.length();
	string res="";
	int borrow=0;
	for(int i=flen-1,j=slen-1;i>=0||j>=0;--i,--j){
		int fdigit=i<0?0:first[i]-'0';
		int sdigit=i<0?0:second[j]-'0';
		if(fdigit+borrow<sdigit){
		int temp=fdigit+borrow+10-sdigit;
		borrow=-1;
		res=char(temp+'0')+res;
	}
	else{
		int temp=fdigit+borrow-sdigit;
		borrow=0;
		res=char(temp+'0')+res;
	}
}
return res;
}
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	cout<<sub(s1,s2);
	return 0;
}
