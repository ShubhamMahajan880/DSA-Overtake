#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>

using namespace std;
int main()
{
    // Map Data Structure in CPP -
    /*
    📒Map is very useful data structures which takes bothh values. Key & valu Pairs. Map also sort the data in Ascending order by default

    Syntax for map -
    map <key_datatype, value_datatype> map_name;
    map<key, value> mp;

    Printing values
    cout<<map_name[key_number]<<endl;

    map size -
    cout<<map_name.size()<<endl;

    remove element from map-
    using erase function
    map_name.erase(element)

    insert value in map -
    map_name.insert(make_pair('key', Value))
OR  map_name.insert({'Key', valupair});
    */

    //     map<int, string> mp;
    //     mp[51] = "Shubham Mahajan";
    //     mp[40] = "Manas Mahajan";
    //     mp[24] = "Shell Mahajan";

    // // print vallue
    //     cout << mp[24] << endl; // Shell Mahajan
    //     cout << mp[51] << endl; // Shubham Mahajan

    //     cout << mp.size() << endl; // 3
    //     cout << mp[20] << endl;    // without the value map will create a key with emepty value and added witht the mpa funtion
    //     cout << mp.size() << endl; // 4

    //     // remove value
    //     mp.erase(40);
    //     for (auto i : mp)
    //     {
    //         cout << i.first << " " << i.second;
    //     }
    //     cout<<endl;
    //     /*
    //     Shell Mahajan
    //     Shubham Mahajan
    //     */
    //     // Inseret Value -
    //     mp.insert(make_pair(22, "Ronak Mahajan"));
    //     for (auto i : mp)
    //     {
    //         cout << i.first << "-> " << i.second;
    //     }
    //     cout<<endl;

    //     // map with char datatype-

    //     map<int, string> mp1;
    //     mp1[0] = "zero";
    //     mp1[2] = "two";
    //     mp1.insert(make_pair(1, "one"));  // correct
    //     // or mp.emplace(3, "three");

    //     for (auto x : mp1) {
    //         cout << x.first << " -> " << x.second << endl;
    //     }

    // ____________ ____________

    //     map<int, int> mp2;
    //     mp2[1] = 0;
    //     mp2[10] = 1;
    //     mp2[100] = 2;
    //     mp2[1000] = 3;

    //     // map printing all values through simple for loop
    //     for (int i = 0; i < mp2.size(); i++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    //     // 0 1 2 3

    //     // map printing all values through RANGE BASED FOR LOOP
    //     for (auto x : mp2)
    //     {
    //         // cout<<x<<" ";
    //         // by using x directly will not able to print because x is alone here and in the map data structure its a paior
    //         // so for printing keys or values seperately we need to use dot operator for printing with allocated variable
    //         cout << x.first << " "; // 1 10 100 1000 - frits for printing the keys
    //     }
    //     cout << endl;
    //     for (auto x : mp2)
    //     {
    //         cout<<x.second<<" ";// 0 1 2 3  - for printing the values
    //     }
    //     cout<<endl;
    //     for(auto x: mp2)
    //     {
    //         cout<<x.first<<" "<<x.second<<" ";
    //     }
    //     cout<<endl; // 1 0 10 1 100 2 1000 3  - for printing keys & value pairs both

    //     for(pair<int,int> x: mp2)
    //     {
    //         cout<<x.first<<" "<< x.second<<" ";//1 0 10 1 100 2 1000 3
    //     }
    //     cout<<endl;

    //     for(pair<int,string> x: mp)
    //     {
    //         cout<<x.first<<" "<< x.second<<" ";//20  24 Shell Mahajan 40 Manas Mahajan 51 Shubham Mahajan
    //     }
    //     cout<<endl;

    // // 📌 - so instrad of mentioning this much syntax as pair<daatatype1,datatype2> just need to use auto keyword

    // ____________ ____________ ____________ ____________ ____________

    // Qun - for a string print all its characterrs that how mny times its rrpeating.

    // string s;
    // cout << "what do you think baby..!!" << endl;
    // cin >> s;

    // map<char, int> mp;
    // cout << "the, stirng which you've inserted is - " << endl;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     mp[s[i]]++;

    // }
    // cout << endl;

    // for(auto i: mp)

    // {
    //     cout<<i.first<<" "<<i.second<<" "<<endl;
    // }

    /*
    what do you think baby..!!
    naman
    the, stirng which you've inserted is -
    a 2
    m 1
    n 2

    what do you think baby..!!
    Microsoft Hyderabad
    the, stirng which you've inserted is -
    M 1
    c 1
    f 1
    i 1
    o 2
    r 1
    s 1
    t 1
    */
    // ____________ ____________ ____________ ____________ ____________

    // Time complexities for VECTOR, SET & MAP -
    /*
    1) SET -T.C - for both Insertion & Deletion : - O(log(n)) where n - is size of SET
    2) Vector - T.C - for both Insertion & Deletion : -  constant - O(1)
    3) Map - T.c - for both Insertion & Deletion : - O(log(n)) where n - is size of SET
    */
    // ____________ ____________ ____________ ____________ ____________

    // Unordered Map -
    /*
    In ordered map chaahe =kisi bhi order me elemnts do vo hmesha increasing or ac=scending order me hi mileneg
    Leking Unorderd map me koi suroty nhi he ascending ya sorted way me aane ki
    T.C - for both Insertion & Loop up : -  constant - O(1)
    In inserttion - always the complecity is not O(1)-- iy's unorederd so elemnt found at once or sometime may be in n-times
    */

    // Understanding for Unoirderdd Map -
//     map<char, int> mp;
//     mp['s'] = 26;
//     mp['e'] = 38;
//     mp['x'] = 143;
//     mp['a'] = 69;

//     mp.insert({'p', 75});
//     for (auto i : mp)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout << endl;
//     /*
//     a 69
//     e 38
//     p 75
//     s 26
//     x 143 - so using order3ed map it got print oin a order automatically , but when we use Unordfered Map -
//     */

//     unordered_map<char, int> mp1;
//     mp1['s'] = 26;
//     mp1['e'] = 38;
//     mp1['x'] = 143;
//     mp1['a'] = 69;

//     mp1.insert({'p', 75});
//     for (auto i : mp1)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
//     /*
//     s 26
//     x 143
//     p 75
//     e 38
//     a 69 - Order is not fixed
//     */
//     // ____________ ____________
//     // Look up for a particular char -
//     string s;
//     cout << "What's the next plan dude" << endl;
//     cin >> s;

//     unordered_map<char, int> mp2;
//     for (size_t i = 0; i < s.size(); i++)
//     {
//         mp2[s[i]]++;
//     }
//     cout<<mp2.count('s')<<endl;
//     if (mp2.count('c') > 0)
//     {
//         cout <<"c is present here";
//     }
//     else{
//         cout<<"not present buddy";
//     }
// /*
// What's the next plan dude
// chintamani
// c is present here

// What's the next plan dude
// janhaviguta
// not present buddy
// */    
// ____________ ____________ 
// from now onwards instead of array we'll be creating always Vector - 

// int n; cout<<"Enter size of vector"<<endl; cin>>n;

// vector<int> v(n);
// for (int i = 0; i <n; i++)
// {
//     cin>>v[i];
// }

// cout<<"So, the inserted elements of vector are following - "<<endl;
// for (int i = 0; i < n; i++)
// {
//     cout<<v[i]<<" ";
// }
// cout<<endl;
// cout<<v.size();




}