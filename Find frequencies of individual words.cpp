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

int main(){
    string str = "geeks for geeks geeks quiz practice qa for";

    count_word_frequency(str);

    return 0;
}
