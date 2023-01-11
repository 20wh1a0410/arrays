#include<iostream>
using namespace std;
int findLengthOfLongPal(string s){
    int freq[58]={0};
    for(auto c:s){
        if(c>='a'&&c<='z')
        ++freq[c-'a'+6];
        else
        ++freq[c-'A'];
    }
    int count=0;
    int maxOdd=0;
    for(int i=0;i<52;++i){
        if(freq[i]%2==0)
        count+=freq[i];
        else
        maxOdd=max(maxOdd,freq[i]);
    }
    return count+maxOdd;
}
int main(){
    string s;
    cin>>s;
    cout<<findLengthOfLongPal(s);
    return 0;
}
