#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "Lakshya";

    int vowels = 0;
    int consonants = 0;

    for(char ch : s){

        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' ||
           ch == 'O' || ch == 'U'){

            vowels++;
        }
        else{
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}