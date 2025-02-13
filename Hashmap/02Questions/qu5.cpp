// // Given an array arr[] of height N, find the height of the longest subarray with a sum equal to 0;
// input: n=8;
//  arr[] = { 15, -2, 2, -8, 1, 7, 10, 23}




 #include<iostream>
 #include<unordered_map>
 #include<vector>
 #include<limits.h>
 using namespace std;

 int maxLengthZeroSumSubarray(vector<int> &v){
    unordered_map<int, int> m;
    int prefixsum = 0;
    int maxlen = INT_MIN;

    for(int i=0 ;i<v.size() ; i++){
      prefixsum += v[i];

      if(prefixsum ==  0){
        maxlen++;
      }
      
      if(m.find( prefixsum) != m.end() ){
        maxlen = max(maxlen, i - m[prefixsum]);
      }
      else{
        m[prefixsum] = i;
      }
    }
    return maxlen;
}
 int main(){

    int n;
    cin>>n;
    
vector<int> v(n);
    for(int i= 0 ; i<n; i++){
        cin>>v[i];
    }

    cout<<maxLengthZeroSumSubarray(v)<<endl;
    return 0; 
 }