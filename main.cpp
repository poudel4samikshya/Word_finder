/*challange description:
 * Ask the user to enter a word
 * process the Romeo and Juliet file and determine how many total words are there
 * and how many times the word the user enterd apppears as a substring of s word in the play
 * for example:
 * if the user enters: love
 * Then the words love, lovely, and beloved will all be considered matches
 * you decide whether you want to be case sensative or not my solution is case sensative
 *
 * sample:
 * enter the substring to search for : love
 * 25919 words were searched
 * The substring love was found 171 times
*/

#include <iostream>
#include<string>
#include<fstream>
#include"functions.h"
using namespace std;

int main() {
    fstream infile;
    infile.open("../Romeo_Juliet.txt");
    if (!infile){
        cerr<<"error opening file"<<endl;
    }
   string user_word {};
   string word;
   int words_count = 0;
   int searched_words = 0;

   cout<<"Enter the substring to search for:  "<<user_word<<endl;
   cin>>user_word;
   while(infile>>word){
       bool value = word_checker(word,user_word);
       searched_words++;

           if(value){
               words_count += 1;
           }

   }
   cout<<searched_words<<" were searched."<<endl;
   cout<<"The substring "<<user_word<<" was found "<<words_count<<" times"<<endl;

infile.close();
}
