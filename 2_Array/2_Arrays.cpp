#include<bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
using namespace std;
int main()
{
    // Array in CPP -
    // Array declaration and array syntax -
    // DATATYPE ARRAY_NAME [Size]

    // int arr[5];
    // // initialization of an array -
    // int arrr[6] = {6, 5, 4, 3, 2, 1};

    // array printing
    /*
    cout<<arrr[0]<<endl;//6
    cout<<arrr[1]<<endl;//5
    cout<<arrr[2]<<endl;//4
    cout<<arrr[3]<<endl;//3
    cout<<arrr[4]<<endl;//2
    cout<<arrr[5]<<endl;//1
    cout<<arrr[6]<<endl;//6422280 - error as memory not specified so any bvalue produces toa avpid error
    */

    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << arrr[i] << endl;
    // }

    
// ____________ ____________

    // Taking input for array size

    // int size; cout<<"mrntion the size of arry you want to take for elements"<<endl; cin>>size;
    // int arey[size];
    // cout<<"Now enter the array values one by one"<<endl;

    // for (int j = 0; j < size; j++)
    // {
    //     cin>>arey[j];
    // }
    // cout<<"You entered array values as following - "<<endl;

    // for (int j = 0; j < size; j++)
    // {
    //     cout<<arey[j]<<endl;
    // }

// ____________ ____________

    // sun of array's elements

    // int sum=0;
    // int aruy[5] = {10,20,30,40,50};
    // for (int k = 0; k < 5; k++)
    // {
    //     sum=sum+aruy[k];
    // }
    // cout<<sum<<endl;

// ____________ ____________

    // Mltiplication of all elenewntds of an array

    // int product=1;
    // int aruyy[5] = {10,20,30,40,50};
    // for (int k = 0; k < 5; k++)
    // {
    //     product=product*aruyy[k];
    // }
    // cout<<"So the multiplication result is - "<<product<<endl;

// ____________ ____________

    // Avg of an array

    // int avg=0,summ=0;
    // int aruyyy[5] = {10,20,30,40,50};
    // for (int k = 0; k < 5; k++)
    // {
    //     summ=summ+aruyyy[k];
    //     avg = sum/5;
    // }
    // cout<<"So the sum  is - " <<summ<<" and the avg is - "<<avg<<endl;

// ____________ ____________

    // Now usign this sum/Ml/Avg printing approach by taking input from the user manualy

    // int size;
    // cout<<"Enter the size of array you wwant"<<endl;
    // cin>>size;

    // int arrey[size];
    // cout<<"It's  time to enter the values of your array dude"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arrey[i];
    // }
    // cout<<"So the insereted eleemnts are - "<<endl;
    // for (int j = 0; j < size; j++)
    // {
    //     cout<<arrey[j]<<endl;
    // }
    // int totalsum=0, mul=1,avgg=0;
    // for (int k = 0; k < size; k++)
    // {
    //     totalsum = totalsum+arrey[k];
    //     mul=mul*arrey[k];
    //     avgg = float(totalsum/size);
    // }
    // cout<<" The sum of inserted elements is "<<totalsum<<endl;
    // cout<<" So the multiplication result is - "<<mul<<endl;
    // cout<<" and the most epic avg of elements is "<<avgg<<endl;
// ____________ ____________ ____________ ____________ ____________

    // Array Basic QUnstions -
    // 1) - max. Element from Arrray

    // int n;
    // cout << "ENtert no. of elements in your array " << endl;
    // cin >> n;
    // int arr1[n];
    // cout<<"Enter elements of an array - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr1[i];//15,2,89,75,63
    // }

    // // for max. element among all 
    // int maxelmnt = arr1[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr1[i] < maxelmnt)
    //     {
    //         maxelmnt = arr1[i];
    //     }
    // }
    // cout << "max element among this is - " << maxelmnt << endl;// - 2

// Uaing Min Funciton -

    // int size;
    // cout<<"Enter the size of your array - "<<endl;
    // cin>>size;

    // int arr[size];
    // cout<<"Now enter the array elements - "<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arr[i];
    // }

    // int minelement = arr[0];
    // for (int i = 0; i < size; i++)
    // {
    //     minelement = min(minelement, arr[i]);
    // }
    
    // cout<<"Soo, the maximum element which we have is - "<<minelement<<endl;

/*
Enter the size of your array - 
5
Now enter the array elements - 
45 89 12 23 654
Soo, the maximum element which we have is - 12
*/    

// ____________ ____________ ____________ ____________ ____________

    // 2) - Max. Element from array -

    // int n;
    // cout << "ENtert no. of elements in your array " << endl;
    // cin >> n;
    // int arr2[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr2[i];//15,2,89,75,63
    // }
    // // Max eleemnt  -
    // int maxelemnt = arr2[0];
    // for (int i = 0; i < n; i++)
    // {

    //     if (arr2[i] > maxelemnt)
    //     {
    //         maxelemnt = arr2[i];
    //     }
    // }
    // cout << "Maximum element is - " << maxelemnt << endl;// - 89

    // These two quns were about aRRAY traverse or array iterate

// Uaing Max Funciton -

    // int size;
    // cout<<"Enter the size of your array - "<<endl;
    // cin>>size;

    // int arr[size];
    // cout<<"Now enter the array elements - "<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arr[i];
    // }

    // int maxelement = arr[0];
    // for (int i = 0; i < size; i++)
    // {
    //     maxelement = max(maxelement, arr[i]);
    // }
    
    // cout<<"Soo, the maximum element which we have is - "<<maxelement<<endl;

/*
Enter the size of your array - 
5
Now enter the array elements - 
45 89 12 23 65
Soo, the maximum element which we have is - 89
*/

// ____________ ____________ ____________ ____________ ____________

    // 3) FInd any element present in the array or not 

    // int n;
    // cout << "ENtert no. of elements in your array " << endl;
    // cin >> n;
    // int arr1[n];    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Enter the "<<i<<" element value "<<endl;
    //     cin >> arr1[i];
    // }
    // // Find ELement  - 
    // int searchingelement = 50;    
    // // cout<<"Enter the elemnt you want to search"<<endl;
    // // cin>>searchingelement;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr1[i] == searchingelement)
    //     {
    //         cout<<"Element "<<searchingelement<<" found successfully at indexing "<<i<<endl;
    //         return 0;
    //     }       
        
    // }
    // cout<<"Sorry Beaste, Elment you wewre looking for din't found"<<endl;
    
// ____________ ____________ ____________ ____________ ____________

// 4) FInd elemnt at which indexing - 

    // int n; cout<<"What is the size of an array"<<endl;
    // cin>>n;
    // int arru[n];
    // cout<<"Give the array elementts"<<endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arru[i];
    // }

    // int x; cout<<"x you wnat to search for "<<endl;
    // cin>>x;
    // for (int i = n-1; i >= 0; i--) //or for(int i=0; i<n; i++) - its just another ways for iterating inside an array
    // {
    //     if (arru[i] == x)
    //     {
    //         cout<<"found at indexing "<<i<<endl; // If element exist multiple times it'll give indexing for each time
    //     }
        
    // }
    // return -1;
// ____________ ____________ 

// 4.1) Find FIrst index of element searched

    // int n; cout<<"What is the size of an array"<<endl;
    // cin>>n;
    // int arru[n];
    // cout<<"Give the array elementts"<<endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arru[i];
    // }

    // int x; cout<<"x you wnat to search for "<<endl;
    // cin>>x;
    // for(int i=0; i<n; i++) //or  - for getting the indexing from last
    // {
    //     if (arru[i] == x)
    //     {
    //         cout<<"found at indexing "<<i<<endl; // If element exist multiple times it'll give only for the first indexing as we programmed
    //         return 0;
    //     }
        
    // }
    // return -1;   
/*
O/p - 
What is the size of an array
5
Give the array elementts
89
45
89
78
23
x you wnat to search for 
89
found at indexing 0
*/    
// ____________ ____________ 

// 4.2) Find last index of element searched

    // int n; cout<<"What is the size of an array"<<endl;
    // cin>>n;
    // int arru[n];
    // cout<<"Give the array elementts"<<endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arru[i];
    // }

    // int x; cout<<"x you wnat to search for "<<endl;
    // cin>>x;
    // for (int i = n-1; i >= 0; i--) // for getting the indexing from last
    // {
    //     if (arru[i] == x)
    //     {
    //         cout<<"found at indexing "<<i<<endl; // If element exist multiple times it'll give only for the first indexing as we programmed
    //         return 0;
    //     }
        
    // }
    // return -1;   
/*
O/p - 
What is the size of an array
5
Give the array elementts
89
45
89
78
23
x you wnat to search for 
89
found at indexing 2
*/

// ____________ ____________ 

// OR METHOD 2 - MAIN METHOD

// int n; cout<<"What is the size of an array"<<endl;
//     cin>>n;
//     int arru[n];
//     cout<<"Give the array elementts"<<endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arru[i];
//     }

//     int x; cout<<"x you wnat to search for "<<endl;
//     cin>>x;
//     int index = -1;
//     for(int i=0; i<n; i++) 
//     {
//         if (arru[i] == x)
//         {
//             index = i; // For getting indexing from last updating  
//         }
        
//     }
//     cout<<index<<endl;

/*
What is the size of an array
5
Give the array elementts
89
45
89
78
89
x you wnat to search for 
89
4
*/
// ____________ ____________ ____________ ____________ ____________

// 5) Find Frequency of x in array - howe many times any element is repeating
    
// int n; cout<<"What is the size of an array"<<endl;
// cin>>n;
// int arru[n];
// cout<<"Give the array elementts"<<endl;

// for (int i = 0; i < n; i++)
// {
//     cin>>arru[i];
// }

// int x; cout<<"x you wnat to search for "<<endl;
// cin>>x;
// int gotit=0;
// for(int i=0; i<n; i++) 
// {
//     if (arru[i] == x)
//     {
//         gotit++;
//     }
    
// }
// cout<<"frequency of element is - "<<gotit<<endl;

/*
What is the size of an array
5
Give the array elementts
89
78
89
45
89
x you wnat to search for 
89
frequency of element is - 3
*/
// ____________ ____________ ____________ ____________ ____________

// 6) Reverse and Sorting of an Array
    // For reversing an array we must include a header file named as algorithms
    // by using the universal header file no need to use any other library heading - #include<bits/stdc++.h>

    // int n; cout<<"What is the size of an array"<<endl;
    // cin>>n;
    // int arru[n];
    // cout<<"Give the array elementts"<<endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arru[i];
    // }
    // For Reverseing an array - 
    // Syntax for reverse - reverse(ARRAYNAME, ARRAYNAME+ARRAYSIZE)
    // Modified syntax as per trials - reverse(ARRAYNAME+jaha tk reverse krna ho, ARRAYNAME+jaha se reverse krna ho)
    
    // reverse(arru, arru+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arru[i]<<" ";
    // }

/*
What is the size of an array
5
Give the array elementts
15
89
23
78
56
56 78 23 89 15 
*/    

// ____________ ____________ ____________ ____________ ____________

// 6.1) For sorting an array - 
// Syntax for sort - sort(ARRAYNAME, ARRAYNAME+ARRAYSIZE)
// Modified syntax as per trials - sort(ARRAYNAME+jaha tk sort krna ho, ARRAYNAME+jaha se sort krna ho)

// sort(arru, arru+n);
// for (int i = 0; i < n; i++)
// {
//     cout<<arru[i]<<" ";
// }

/*
What is the size of an array
5
Give the array elementts
89
78
56
21
45
21 45 56 78 89 
*/

// ____________ ____________ 

//  for sorting in decreasing order. First sort then usereverse

// sort(arru, arru+n);
// reverse(arru, arru+n);
// for (int i = 0; i < n; i++)
// {
//     cout<<arru[i]<<" ";
// }

/*
What is the size of an array
5
Give the array elementts
45
98
100
20
78
100 98 78 45 20 
*/

// ____________ ____________ 

// max & Max using Sort in Array - 

// sort(arru, arru+n);
// for (int i = 0; i < n; i++)
// {
//     cout<<arru[i]<<" ";
// }
// cout<<endl;
// cout<<"max is  "<<arru[0]<<endl;
// cout<<"MaX is  "<<arru[n-1]<<endl;

/*
What is the size of an array
5
Give the array elementts
89
32
56
12
47
12 32 47 56 89 
max is  12
MaX is  89
*/

// ____________ ____________ 

//  Find kth Max & Kth max in Array - 

// sort(arru, arru+n);
// int k;
// cout<<"Which max or max element you want to get"<<endl;
// cin>>k;

// sort(arru, arru+n);
// for (int i = 0; i < n; i++)
// {
//     cout<<arru[i]<<" ";
// }
// cout<<endl;
// cout<<k<<"th maximun element is "<<arru[k-1]<<endl;
// cout<<k<<"th Maximum element is "<<arru[n-k]<<endl;

/*
What is the size of an array
5
Give the array elementts
12
56
78
32
99
Which max or max element you want to get
2
12 32 56 78 99 
2th maximun element is 32
2th Maximum element is 78
*/
// ____________ ____________ ____________ ____________ ____________

// What if the Interviewer yold that you can;t use Sort or inbuilt library functions. Method 2 for kth max & kth Max - 
// For the 2nd max fun 

    // int n;
    // cout<<"Mention the size of an array"<<endl;
    // cin>>n;

    // int arr[n];

    // cout<<"Insrt the array elements - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    
    // cout<<"So, the entered array is - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] <<" ";
    // }
    
    // cout<<endl;
    

    // // For the first max
    // int mx = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>mx)
    //     {
    //         mx=arr[i];
    //     }        
    // }
    // cout<<"The Maximuum element is "<<mx<<endl;
    
    // // For the second max 
    // int secondmax = INT_max;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != mx)
    //     {
    //         if (arr[i]>secondmax)
    //         {
    //             secondmax = arr[i];
    //         }
    //     }        
    // }
    // cout<<"So, the second max element is - "<<secondmax<<endl;
    
/*
Mention the size of an array
5
Insrt the array elements - 
78
89
56
12
23
So, the entered array is - 
78 89 56 12 23 
The Maximuum element is 89
So, the second max element is - 78
*/  

// ____________ ____________ 
// For the 2nd max - 

    // int n;
//     cout<<"Mention the size of an array"<<endl;
//     cin>>n;

//     int arr[n];

//     cout<<"Insrt the array elements - "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

    
//     cout<<"So, the entered array is - "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] <<" ";
//     }
    
//     cout<<endl;
    

//     // For the first max
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]<max)
//         {
//             max=arr[i];
//         }        
//     }
//     cout<<"The maximum element is "<<max<<endl;
    
//     // For the second max
//     int secondmax = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != max)
//         {
//             if (arr[i]<secondmax)
//             {
//                 secondmax = arr[i];
//             }
//         }        
//     }
//     cout<<"So, the second max element is - "<<secondmax<<endl;
    
/*
Mention the size of an array
5
Insrt the array elements - 
78
89
56
12
23
So, the entered array is - 
78 89 56 12 23 
The maximum element is 12
So, the second max element is - 23
*/    

// ____________ ____________ ____________ ____________ ____________

// Similarly for 3rd Max

// int n;
//     cout<<"Mention the size of an array"<<endl;
//     cin>>n;

//     int arr[n];

//     cout<<"Insrt the array elements - "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

    
//     cout<<"So, the entered array is - "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] <<" ";
//     }
    
//     cout<<endl;
    

//     // For the first max
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>max)
//         {
//             max=arr[i];
//         }        
//     }
//     cout<<"The maximum element is "<<max<<endl;
    
//     // For the second max 
//     int secondmax = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != max)
//         {
//             if (arr[i]>secondmax)
//             {
//                 secondmax = arr[i];
//             }
//         }        
//     }
//     cout<<"So, the second max element is - "<<secondmax<<endl;

//     // For the third max
//     int thirddmax = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != secondmax && arr[i] != max)
//         {
//             if (arr[i]>thirddmax)
//             {
//                 thirddmax = arr[i];
//             }
//         }        
//     }
//     cout<<"So, the third max element is - "<<thirddmax<<endl;

    
/*
Mention the size of an array
5
Insrt the array elements - 
89
78
56
12
23
So, the entered array is - 
89 78 56 12 23 
The maximum element is 89
So, the second max element is - 78
So, the third max element is - 56
*/  

// ____________ ____________ 

// Similarly for 3rd min

//     int n;
//     cout<<"Mention the size of an array"<<endl;
//     cin>>n;

//     int arr[n];

//     cout<<"Insrt the array elements - "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

    
//     cout<<"So, the entered array is - "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] <<" ";
//     }
    
//     cout<<endl;
    

//     // For the first max
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]<max)
//         {
//             max=arr[i];
//         }        
//     }
//     cout<<"The maximum element is "<<max<<endl;
    
//     // For the second max 
//     int secondmax = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != max)
//         {
//             if (arr[i]<secondmax)
//             {
//                 secondmax = arr[i];
//             }
//         }        
//     }
//     cout<<"So, the second max element is - "<<secondmax<<endl;

//     // For the third max
//     int thirddmax = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != secondmax && arr[i] != max)
//         {
//             if (arr[i]<thirddmax)
//             {
//                 thirddmax = arr[i];
//             }
//         }        
//     }
//     cout<<"So, the third max element is - "<<thirddmax<<endl;

    
/*
Mention the size of an array
Mention the size of an array
5
Insrt the array elements - 
78 
89
56
12
23
So, the entered array is - 
78 89 56 12 23 
The maximum element is 12
So, the second max element is - 23
So, the third max element is - 56
*/  

    
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
    
}

