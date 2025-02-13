// Check Whether two strigs are angram of each other. Return true if they are else return flase.
// An anagram of a string is another string that contains the same characters, only the order of
// characters can be different can be different. For example, "abcd" and "dabc" afe an anagram of each other.

// input: triangle
// integral
// output : Ture;

// input : anagram
// grams
// output : False;

#include <iostream>
#include <unordered_map>
using namespace std;

bool checkAnagram(string s1, string s2)
{

    if (s1.length() != s2.length())
    {
        return false;
    }

    unordered_map<char, int> m;

    for (auto c1 : s1)
    {
        m[c1]++; // storing characters and their frequency in s1
    }

    for (auto c2 : s2)
    {
        if (m.find(c2) == m.end())
        {
            return false;
        }

        else
        {
            m[c2]--;
        }
    }

    // check that all frequency of map is zero or not

    for (auto itr : m)
    {
        if (itr.second != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1, s2;

    cout << "Check Anagram :"<<endl;

    cout << "String 1 : ";
    cin >> s1;
    cout << endl;


    cout << "string 2 : ";
    cin >> s2;
    cout << endl;

    cout << (checkAnagram(s1, s2) ? "Anagram" : "Not Anagram");

    return 0;
}
