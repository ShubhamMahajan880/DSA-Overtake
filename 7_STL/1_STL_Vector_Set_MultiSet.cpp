#include<bits/stdc++.h>
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
    // 📒 STL stands for Standard Template Library which prives an in-built functionality of already available functions, thods, techniques and libraroes.

    // 1 - Implementing STL for Binary Search

    // int n;
    // cout << "Mention the Array size" << endl;
    // cin >> n;

    // int arr[n];
    // cout << "What are the elemenmts - " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // Sort
    // sort(arr, arr + n);
    // cout << "THe inserted array with sort elements is - " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int findelement;
    // cout << "which element you want to get" << endl;
    // cin >> findelement;

    // // Binary Search -
    // // Binary Search predefined functionality in STL -
    // // binary_search(arr,arr+n,find) - for that eleemnt which we need to find.
    // if (binary_search(arr, arr + n, findelement))
    // {
    //     cout << "Yes, Element found at " << endl;
    // }
    // else
    // {
    //     cout << "Not FOund" << endl;
    // }

    /*
    Mention the Array size
    7
    What are the elemenmts -
    15 10 45 89 32 99 115
    THe inserted array with sort elements is -
    10 15 32 45 89 99 115
    which element you want to get
    99
    Yes, Element found at
    ----------------------
    Mention the Array size
    7
    What are the elemenmts -
    15 10 45 89 32 99 115
    THe inserted array with sort elements is -
    10 15 32 45 89 99 115
    which element you want to get
    75
    Not FOund
    */

    // ____________ ____________ ____________ ____________ ____________

    // 2 - using STL for unique and Non-repeating elements by using SET.
    // Vector,Set & map are very useful Data Structures.
    /* If in array I need to delete the repeating elemnents and want oonly unique elements which also in
    sorted manner then it 's little bit complecated and having more complecxity, so using STL and pre defined functions */
    // 📒 SET - using SET data structure we can directly store the Non-repeating and unique characters
    // 📒 VECTOR - Vector is also an array but specififcally it's an DYNAMIC ARRAY. A normal array is Static Array where size can't change for any operation of any element insertion or deletion, but in vector Array it's clearly possible
    // 📒 MAP - Easy operations like count frequesncy
    // 📒 Queue -
    // 📒 Stack -

    // ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________

    // Vector -

    /* Initializing of a Vector -
    Vector basdic syntax -
    1) vector <data_type> vector_name;
    2) vector <data_type> vector_name(size);
    3) vector <data_type> vector_name(size, element)
    */

    // vector<int> v1;
    // cout << v1.size() << endl; // 0 - by default size is always 0 in declared vector
    // vector<int> v2(5);
    // cout << v2.size() << endl; // 5 - size as per given by user for the vector

    // int arr[5]; // then it ma y include the GB - garbage value, so for avoiding this we initializze it by defaly with 0 for all elements or enter the elements manually;
    // int arr1[5] = {0};// for avoiding the garbage value we initialize by any elemnt valur or by defauly by 0
    // // Similarly in vector, after declaring the vector we use element value for avoiding the GB

    // vector<int> v3(4, 23); // all 4 elements of vector v3 having value 23
    // for (int i = 0; i < v3.size(); i++)
    // {
    //     cout << v3[i] << " ";
    // }
    // cout<<endl;
    // // 23 23 23 23
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout<<v2[i]<< " ";
    // }
    // cout<<endl;
    // // 0 0 0 0  - agr size declare kiya h or koi elmnt ki value pass nhi ki to by default 0 for all elements

    // ____________ ____________

    // /*by using STL here  is another way of writing for loop in short, it's known as RANGE BASED LOOPPS
    // for (data_type i: NAMEOFVARIABLE jisme iteratekrna he)
    // {
    //     cout<<i<<" ";
    // }
    // */
    // vector<int> v4(4, 11);
    // for (int i : v4)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // // 11 11 11 11  - print all values of vector v4 using RANGE BASED FOR LOOP by STL
    // // here in this for loop i is not about 0,1,2,3...till limit. here i is clearly no. of times elements of given vector

    // vector<int> v5(4);
    // v5[0] = 20;
    // v5[1] = 81;
    // v5[2] = 111;
    // v5[3] = 15;
    // for (int i : v5)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // // 20 81 111 15  - printing elements i wise
    // ____________ ____________

    // Taking input in vector -

    //     int n;
    //     cout << "The sixe of vectopr is - " << endl;
    //     cin >> n;
    //     vector<int> v6(n);

    //     cout << "Enter elements of the vector" << endl;
    //     for (int i = 0; i < v6.size(); i++)
    //     {
    //         cin >> v6[i];
    //     }

    //     cout << "So, enetered vector we have os - " << endl;
    //     for (auto i : v6)// if we're not sure about datatype then use auto for any conditon
    //     {
    //         cout << i << " ";
    //     }
    // /*
    // The sixe of vectopr is -
    // 5
    // Enter elements of the vector
    // 23 56 89 45 12
    // So, enetered vector we have os -
    // 23 56 89 45 12
    // */
    // ____________ ____________

    // inseretion and remove in vector -

    // vector<int> v(3, 1);
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // // 1 1 1

    // // pushing elements
    // v.push_back(3);
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout<<endl;
    // // 1 1 1 3
    // v.push_back(5);
    // v.push_back(10);
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout<<endl;
    // // 1 1 1 3 5 10

    // // Removing elements -
    // v.pop_back();
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // // 1 1 1 3 5  - while removing element ysing no need to mention which eloement need to remove becuase pop by defauolt removes the last elemnt only
    // ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________

    // Set -
    /*

    📒 - set is uses for set the elements in ascending order by default.
    In set addig eleemnt at any locaition not exist because set already elements ko set kr deta h.
    In set removing duplicate elemt is also not exist qki set by default unique eleemnts ko adscending order me arfrange kr deta h
    In set we can't use simple for loop - it doen;t exust for set function. need to use only RANGE BASED LOOPS for printing elements

    Initialization of set -
    Set syntax -
    set <data_type> set_name;

    inserting element in set -
    set_name.insert(value);

    get size of set -
    cout<<set_name.size();

    removing element fromset -
    set_name.erase(valueofelementwhichneedtoremove);

    */

    // insert eleemnts through set
    set<int> st;
    st.insert(1010);
    st.insert(1167);
    st.insert(24);
    st.insert(1010);
    // for printoing elemts inset -
    for (int i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    // 24 1010 1167  - elemets arranged in ascedinging order by itself using set function & even duplicated element removed

    // size of set -
    cout << st.size(); 
    cout << endl;
    // 3 - with unique elemets

    // remove element
    st.erase(24);
    for (int i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    //1010 1167 
    
    // ____________ ____________

    //Qun 1) SET - Remove duplicate elements of array and arrange array in increasing order
    // int n;
    // cout << "hey smita, Array size" << endl;
    // cin >> n;

    // int arr[n];
    // cout << "Bro, elements is also necessary to perform" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // now for sorting w/o using sort and for duplcate w/o uisng any logic direct;ly by using SET
    // set<int> se;
    // for (int i = 0; i < n; i++)
    // {
    //     se.insert(arr[i]); // inserting all array elements into sset function
    // }
    // cout << "So, the unique elements in increasing order of array are following - " << endl;

    // for (int i : se)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // /*
    // hey smita, Array size
    // 8
    // Bro, elements is also necessary to perform
    // 11 2 31 5 11 99 47 11
    // So, the unique elements in increasing order of array are following -
    // 2 5 11 31 47 99
    // */
    // // ____________ ____________
    // // Par agar me saare elements chahta hu sorted way me but duuplicates remopve nhi krna chahta, so i'll use multiset.
    // // with duplicates -
    // multiset<int> sm;
    // for (int i = 0; i < n; i++)
    // {
    //     sm.insert(arr[i]);
    // }
    // cout << "Now, another operaiton : Printing in increasing order only w/o removing the duplicate ones" << endl;
    // for (auto i : sm)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // /*
    // hey smita, Array size
    // 8
    // Bro, elements is also necessary to perform
    // 11 2 31 5 11 99 47 11
    // So, the unique elements in increasing order of array are following -
    // 2 5 11 31 47 99
    // Now, another operaiton : Printing in increasing order only w/o removing the duplicate ones
    // 2 5 11 11 11 31 47 99
    // */

    // // for the size of set.
    // cout << se.size(); // 6 -  return the size of set -which is all unique elements only
    // cout << endl;
    // cout << sm.size(); // 8 - returns the size of multiset - which is of all the elemts not removed anyone includes duplicates too
    // cout << endl;


// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________

}
