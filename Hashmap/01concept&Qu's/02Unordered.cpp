// ******Important things*******

// In Unordered map

// Time complexity in Average case is : O(1) constant Time Complexity 
// Time Complexity in Worst   case is : 0(n)  when collistion occurred
// for Insertion Deletion and Retrieval or Search  

// and for Ordered map 
// Time Complexity is O( log(n) );

// header file for unordered list is : 
// #include <unordered_map>



#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int, string> record;
    record.insert( make_pair(1, "Ria")); // first way of initializatio
    record[2] = "bela" ; // second way of intialization
    record[3]= "sakshat";
    record[4] = "sameeksha";
    record[5] = "saransh";
    record[6] = "Tejas";



    for( auto pair : record ) {
        cout<< "Roll NO." << pair.first<<endl;
        cout<< "Name : " << pair.second<<endl;
    }


    
    return 0; 

}
