#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
using namespace std;


class Hashing{
    vector<list<int>> hashtable;
    int buckets;


    public:
    
    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key % buckets; // devision method;
    }

    void add(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchkey(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(), key);
    }

    void deletekey(int key){
        int idx = hashvalue(key);
    if(searchkey(key) != hashtable[idx].end()){
        //key is present;
        cout<<key<<"  is deleted"<<endl;
    }
    else{
        cout<<"key is not present in the hashtable"<< endl;
    }
    }



};
int main(){

    Hashing h(10);
    h.add(5);
    h.add(3);
    h.add(4);
    h.add(5);
    h.add(14);
    h.deletekey(3);

return 0;


}