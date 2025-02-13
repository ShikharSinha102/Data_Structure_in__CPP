// Check Whether  two strings are isomorphic of each oher. Returntrue if they are else return false. 

// Two strings are isomorphic of each other if there is a one-to-one mapping possible for every 
// characer of the first string to every chacter of second string and all occurrencesof every character in first string 
// maps to the same character in the second string;


// input : aab 
//         xxy
// output : True;

// input : abcdec
//         viouog
// output : false;


bool checkNo_OneToManyMapping( string s1, string s2 ){

    unordered_map<char, char> m;
    for( int i=0 ; i< s1.length(); i++){
        if( m.find( s1[i] ) != m.end() ){
            if( m[s1[i]] != s2[i]){
                return false;
            }

        }
        else {
            m[s1[i]] = s2[i];
        }
    }
    return true ;

}

bool checkIsomorphic(string s1, string s2){
    if (s1.length() != s2.length()){
        return false;

    }
    

    //checking one-to-many from s1->s2

    bool s1s2 = checkNo_OneToManyMapping(s1, s2);


    // checking one-to-many from s2->s1

    bool s2s1 = checkNo_OneToManyMapping(s2, s1);

    

    // return (s1s2 && s2s1 ? true : false); 

    return s1s2 && s2s1 ;

}

#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


int main(){
    string s1, s2;

    cout << "String 1 : ";
    cin >> s1;
    cout << endl;


    cout << "string 2 : ";
    cin >> s2;
    cout << endl;


    cout<< (checkIsomorphic(s1, s2)  ? "Isomorphic" : "Not Isomorphic");


    return 0;
}

