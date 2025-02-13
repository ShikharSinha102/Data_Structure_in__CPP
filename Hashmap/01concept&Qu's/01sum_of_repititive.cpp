#include<iostream>
#include<map>
#include<vector>
using namespace std;


// Time Complexity
// O(n) where n is no of elements in our vector

int main(){

    cout<<"Enter the no. of Elements"<<endl;

    int n ;
    cin>> n;

    vector<int> input(n);

    cout<<"Enter your n numbers "<<endl;


    for( int i = 0 ; i<n ; i++){
        cin>> input[i];
    }


    map<int, int> m;
    for( int i=0 ; i<n ; i++){
        //storing frequency of every element in input array
        m[input[i]]++;  // if doubt search for it pw hashing part 2 57:30 c++ dsa
    }

    int sum = 0;
    //finding sum of repetitive elements;

    for( auto pair : m ){

        // finding sum of repetitive elements;
        // pair - element, frequency 
        if( pair.second >1) {

            // element is repetivive
            sum+= pair.first;
        }
    }


cout<<"sum of repetitive elements "<< sum<< endl;

    return 0;

}
