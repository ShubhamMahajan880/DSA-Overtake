#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
using namespace std;

// Qun 1 - Bubble Sort Implementation
// void bubbleSort(vector<int> &arr) // calling througb call by address - mtlb yaha change hua to niche bhi array me change hona chahiye
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++) // vo loop jo saare elemenets ke liye chlega
//     {
//         for (int j = 0; j < n-1; j++)
//         {
//             // agar agli value chhoti  he to swipe kre
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j + 1], arr[j]);
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "Size of the vector - " << endl;
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the Vector Elements " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl;
//     cout << "Hence the sorted arrau is - " << endl;

//     bubbleSort(arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// /*
// Size of the vector -
// 5
// Enter the Vector Elements
// 333 1 3208 33 69

// Hence the sorted arrau is -
// 1 33 69 333 3208
// */
// }

// ____________ ____________

// Qun 1.1 - Bubble Sort Implementation for decrasing sorting

//  void bubbleSort(vector<int> &arr) // calling througb call by address - mtlb yaha change hua to niche bhi array me change hona chahiye
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++) // vo loop jo saare elemenets ke liye chlega
//     {
//         for (int j = 0; j < n - 1; j++)
//         {
//             // agar agli value chhoti  he to swipe kre
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j + 1], arr[j]);
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "Size of the vector - " << endl;
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the Vector Elements " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl;
//     cout << "Hence the sorted arrau is - " << endl;

//     bubbleSort(arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

// ____________ ____________

// W/o uisng function -

// int main()
// {
//     int n;
//     cout << "Vector Size" << endl;
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Values of Vector Elemnets" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // trying bubble sort without using function
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }

//     cout<<"So, the new sorted array is -  "<<endl;
//     for(int i: arr)
//     {
//         cout<<i<<" ";
//     }
// /*
// Vector Size
// 6
// Values of Vector Elemnets
// 56 89 10 5 12 36
// So, the new sorted array is -
// 5 10 12 36 56 89
// */
// }

// ____________ ____________ ____________ ____________ ____________

// Qun 2 - Selection Sort Implementaiton -

// void insertSort(vector<int> &arr)
// {
//     int n = arr.size();
//     // insertion sort

//     for (int i = 0; i < n; i++)
//     {
//         int min = INT_MAX;
//         int minindx = -1;
//         // min value
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//                 minindx = j;
//             }
//         }
//         // Swapping minimum element from unsorted starting index
//         swap(arr[i], arr[minindx]); // pure me se min dhundh k use first waaali value se swap kr do
//     }
// }

// int main()
// {
//     int n;
//     cout << "Vector Size" << endl;
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Mention the elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     insertSort(arr);
//     cout << "So, the sorted array using Selection Sort is - " << endl;
//     for (int i : arr)
//     {
//         cout << i << " ";
//     }
//     /*
//     Vector Size
//     6
//     Mention the elements
//     99 2 11 2222 64 1726
//     So, the sorted array using Insertion Sort is -
//     2 11 64 99 1726 2222
//     */
// }
// ____________ ____________

// 2.1 -Implement Selection Sort for Decreasing Order

// void insertSort(vector<int> &arr)
//  {
//      int n = arr.size();
//      // insertion sort

//     for (int i = 0; i < n; i++)
//     {
//         int max = INT_MIN;
//         int maxindx = -1;
//         // Max value
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] > max)
//             {
//                 max = arr[j];
//                 maxindx = j;
//             }
//         }
//         // Swapping maximum element from unsorted starting index
//         swap(arr[i], arr[maxindx]); // pure me se max dhundh k use first waaali value se swap kr do
//     }
// }

// int main()
// {
//     int n;
//     cout << "Vector Size" << endl;
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Mention the elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     insertSort(arr);
//     cout << "So, the sorted array using Selection Sort is - " << endl;
//     for (int i : arr)
//     {
//         cout << i << " ";
//     }
/*
Vector Size
6
Mention the elements
99 2 11 2222 64 1726
So, the sorted array using Insertion Sort is -
2222 1726 99 64 11 2
*/
//}

// ____________ ____________ ____________ ____________ ____________

// Qun 3 - Insertion Sort Implementation -

// void insertionSort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 1; i < n; i++)
//     {
//         int el = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > el)
//         {
//             // Shift
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         // Correct possition of element - 
//         arr[j+1]=el;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Mention the Vector size" << endl;
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the vector elements " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     insertionSort(arr);
//     cout << "So, the sorted array after applying insertion sort is -" << endl;
//     for (int i : arr)
//     {
//         cout << i << " ";
//     }

// /*
// Mention the Vector size
// 6
// Enter the vector elements 
// 99 2 11 2222 64 1726
// So, the sorted array after applying insertion sort is -
// 2 11 64 99 1726 2222 
// PS D:\Placed,Congratul
// */

// // ____________ ____________ ____________ ____________ ____________

// }