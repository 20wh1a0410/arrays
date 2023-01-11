#include <iostream>
using namespace std;
int wordScore(string word)
{
     int scrable_values[26] = {1,3,3,2,1,4,2,4,1,9,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int score = 0;
    for(int i=0;i<word.size();i++)
    {
        score += scrable_values[word[i]-97];
    }
    return score;
}
int main()
{
    string word;
    cin>>word;
    cout<<wordScore(word);
    
    return 0;
}
