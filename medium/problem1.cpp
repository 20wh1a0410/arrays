#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
string largestpalindromicnum(string num) {
        int temp[10]={};
        int n=num.length();
        for(int i=0;i<n;i++)
            temp[num[i]-'0']++;

        string t=" ";
        int maxu=INT_MIN;
        for(int i=9;i>=1;i--){
            if(temp[i]%2==1){
                maxu=max(maxu,i);
                temp[i]--;
            }
            if(temp[i]%2==0 && temp[i]>1){
                for(int j=1;j<=temp[i]/2;j++)
                    t+=to_string(i);
                temp[i]=0;
            }
        }
        if(t!="\0"&&temp[0]>1){
                for(int j=1;j<=temp[0]/2;j++)
                    t+='0';
        }
        string res;
        res=t;
        reverse(t.begin(),t.end());
        if(maxu!=INT_MIN)
            res+=to_string(maxu);
        else if(temp[0]%2==1)
        res+='0';
        res+=t;
        if(num!="" && res=="")
            return "0";
        else return res;
    }

int main(){
    string s;
    cin>>s;
    cout<<largestpalindromicnum(s);
    return 0;
}

