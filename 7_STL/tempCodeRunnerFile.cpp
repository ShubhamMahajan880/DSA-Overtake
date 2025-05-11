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
    vector<int> v(3, 1);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // 1 1 1
    
    // pushing elements
    v.push_back(3);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl;
    // 1 1 1 3
    v.push_back(5);
    v.push_back(10);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl;
    // 1 1 1 3 5 10 

    // Removing elements - 
    v.pop_back();
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // 1 1 1 3 5  - while removing element ysing no need to mention which eloement need to remove becuase pop by defauolt removes the last elemnt only
    