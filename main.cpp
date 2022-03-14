

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
