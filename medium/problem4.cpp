#include<iostream>
#include<string>
#include<cstdlib>
#include<cassert>
#include<time.h>
using namespace std;
string* createDeck(){
	//string deck[52];
	string* deck=new string[52];
	string values="23456789TJQKA";
	string suits="shdc";
	int i=0;
	for(auto v:values){
		for(auto s:suits){
			string temp="";
			temp=temp+v+s;
			cout<<temp;
			deck[i++]=temp;
		}
	}
	return deck;
} 
void swap(string deck[52],int i,int j){
	string temp=deck[i];
	deck[i]=deck[j];
	deck[j]=temp;
}
void shuffle(string deck[52]){
	srand(time(0));
	for(int i=0;i<52;++i){
		int rind =rand()%52;
		swap(deck,i,rind);
	}
}
void display(string deck [52])
{
	for(int i=0;i<52;i++)
	cout<<deck[i]<<endl;
}

int main(){
	string * deck =createDeck();
//	for (int i=0;i<52;++i)
//	cout<<deck[i]<<" ";
    int n;
    cin>>n;
    display(deck);
    shuffle(deck);
    display(deck);
    int k=0;
    for(int i=0;i<n;i++)
    cout<<"player"<<i+1<<" : ";
	for(int j=0;j<5;j++){
		cout<<deck[k++]<<" ";
	}cout<<"\n";
	return 0;
}

