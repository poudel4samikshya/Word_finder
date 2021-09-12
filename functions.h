//
// Created by samikshya poudel on 9/12/21.
//
using namespace std;
#ifndef WORD_FINDER_FUNCTIONS_H
#define WORD_FINDER_FUNCTIONS_H

bool is_substring(string word,string user_word){
    if (word.find(user_word) != string::npos) { // finding word in word until the end of the string
        return true;
    }
    else
        return false;
}


bool word_checker(string word,string user_word){


    if (user_word == word || is_substring(word,user_word)){
        return true;
    }

    return false;
}

#endif //WORD_FINDER_FUNCTIONS_H
