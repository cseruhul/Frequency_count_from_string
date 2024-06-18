/*
Find frequencies of individual words
Given a string of words, the task is to find the frequencies of the individual words:

Input: str = “geeks for geeks geeks quiz practice qa for”;
Output: Frequencies of individual words are
             (practice, 1)
             (for, 2)
            (qa, 1)
            (quiz, 1)
            (geeks, 3)

*/

#include<bits/stdc++.h>
using namespace std;

void count_word_frequency(string str){
    stringstream strstream(str);    //converting the string into stringstream
    unordered_map<string, int>mp;   //Declaration of a unordered map to store word frequency
    string word;                    //Declaration of a string name word

    while(strstream >> word){
        mp[word]++;
    }
    map_output(mp);
}

int main(){
    string str = "geeks for geeks geeks quiz practice qa for";

    count_word_frequency(str);

    return 0;
}
