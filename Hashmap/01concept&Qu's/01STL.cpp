
// ________________NOTES

//stl containers which stores key-value pairs
// it is that kind of data structure.

// the elements are stored in ascending/descending order.

// ex. phone book type   (Name : Number)

//maps cannot have duplicate keys. they should be unique in oneself.

//   * header file required  
//   * #include<map>

//declaration  : map < key_datatype , value_datatype  map_name ; 


// by-default the order is ascending. and if want descending order   write  map <datatype1,  datatype2 , greater< datatype1> > map_name;

// initialization :
//  map<datatype1, datatype2 > map_name = { 
//     { key1, value1} ,
//     { key2, value2} ,
//     { key3 , value3}
// }

// insertion : 
// map_name.insert(  make_pair( "abc" , 368) );  // *******if make_pair(alraedy exit key_pair)  will do nothing;
// map_name[key] = value;

// printing the element 

// for ( autto element : map1 ){
//     // element is a key-value pair
//     key = element.first
//     value = element.second
// }


// erase()
// map_name(key) or
// map_name(itr) or 
// map_name ( start_itr , end_itr ) // erase in range  ********important point   end_itr will not delelete.*****

// swap()
// if both have same datatype
// m1.swap(m2) or
// swap(m1, m2)


// empty();
//  m.empty() // return 1 when empty.

// size()
// m.size();


// max_size() 


// find():
// m1.find(key); // return itr to element if present, else it returns map.end() itr.

//coun();
//  no.of occurrences of keys
// m.count(key);


// upper_bound() 
// returns an itr to next greater element ;

// m.upper_bound(20);
// // it means jo keys pass kiye hai upper_bound pr uske next key ki value ko return krega 



//lower_bound()

// m.lower_bound(20)
// it means jo keys pass kiye hai lower_bound pr uske previous key ki value ko return krega 



//begin() and end();

// m.begin() // returns itr to the first element 

// m.end() // returns **********  returns the itr to position after the last element.



// rbegin() and rend();






//MCQ---

// map<int, char> a = { {1 , 'a'}, {2 , 'b'}, {3 , 'c'} ,{4 , 'd'}};

// for (auto i : n)
// cout<<i.first<<" -"<<i.second<<"\n";


// a. 1-a  2-b 4-d      b. 1-a 2-b   c. 1-a 2-b  3-c 4-d   d. compilatio error 


// ans :  b.    1-a 2-b











#include<iostream>
#include<map>

using namespace std;


int main(){

map <string, int> phonebook;

phonebook["samarth"] = 344;
phonebook["shreya"] = 4566;
phonebook["ritu"] = 23445;


for( auto element : phonebook)
{

    cout<<"Name : "<<element.first<<endl;
    cout<<"Number : "<< element.second<<endl;

}

map< string, int> :: iterator itr;

for( itr = phonebook.begin(); itr!=phonebook.end(); itr++){
    cout<<itr->first<<" -" << itr->second<<endl;
}

return 0; 


}


    




