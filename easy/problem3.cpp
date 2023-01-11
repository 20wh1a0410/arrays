#include<iostream>
#include<algorithm>
using namespace std;
string add(string num1, string num2) {
       int flen= num1.size()-1;
        int slen= num2.size()-1;
        int carry = 0;
        string res = "";
        while(flen>=0 || slen>=0 || carry)
        {
            long sum = 0;
            if(flen>=0){
                sum+=num1[flen]-'0';
                flen--;
            }
            if(slen>=0){
                sum+=num2[slen]-'0';
                slen--;
            }
            sum+=carry;
            carry=sum/10;
            res+=to_string(sum%10);
        }
        reverse(res.begin(),res.end());
        return res;
    }
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	cout<<add(s1,s2);
	return 0;
}
