
// STL container stores keys-values pairs 
// elemnets are stored in an order-ascending/decending;
// ******* duplicate keys are allowed;

// example: Ek hi naam ke 2 persons ke phone no. different ho sakte hai.


// ************** Insertion Deletion Search : Time Complexity is O( log(n) );

#include<iostream>
#include<map>
using namespace std;




int main(){

    multimap<string, int> directory;  //***** Multimap declaration  */

    // *****Point to Note is that :  we have (not) initialized the multimap using   multi_map[ key] = value;
    // Reason is that : if we initialize like it not generate the multimap,
    //  what happens that it will update the value of same key. Again and Again.

        //   *** [] initialization is nt allowed in Multipmap
    
    directory.insert(make_pair("saarthi",79));
    directory.insert(make_pair("saarthi", 90 ));
    directory.insert(make_pair("saarthi", 90 ));
     
    

    for( auto pair: directory){
        cout<<"Name : "<< pair.first<<" "<<"Number : "<<pair.second<<endl;
    }


    return 0;
}




