
// Can you make the strings equal?
// Given an array of strings. You just have to make all of them equal.
// Print "yes" if you can make every string in the array equal by using any number of operations otherwise print "NO"


// input [" collegee", "coll", "collegge"]
// output yes;

// input : [ "wall", "ah", "wallahah"]
// output no.



#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity:
// O(N) : where no. of all element;

// Space Complexity:
// no. of unique characters

bool canMakeEqual( vector<string> &v){
    unordered_map<char, int> m;
    for( auto str : v){
        for( char c : str){
            m[c]++;

        }

    }
    int n = v.size();
    for(auto ele:m){
        if(ele.second % n != 0 ){
            return false;
        }
    }

    return true ;
}

int main(){


    int n;
    cin>>n ;

    vector<string> v(n);
    int i =0;
    while(i<n){
        cin>>v[i];
        
        i++;
    }

cout<< (canMakeEqual(v) ? "yes" : "NO")<<endl;
    return 0;
}
