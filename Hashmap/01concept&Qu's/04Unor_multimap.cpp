
// STL container, stores key values pairs 
// ***elements are not Ordered;
// ***Duplicate keys are Allowed;


// Insertion Deletion Search 
// Average case Time Complexity : O(1);
// Worst case Time Complexity : O( n )


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_multimap<string, int> box;

    box.insert( make_pair("apple", 3));
    box.insert( make_pair( "banana", 7));
    box.insert( make_pair( "papaya", 45));
    box.insert( make_pair("bananas",28));
    box.insert( make_pair("apple", 78));

    for( auto pair : box){
        cout<<"Fruit Name : "<<pair.first<<" "<<"Quantity : "<<pair.second<<endl;
    }
}