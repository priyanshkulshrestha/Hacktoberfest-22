// // C++ program to demonstrate default behaviour of
// // sort() in STL.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

	
// 	sort(arr, arr + n);
//     reverse(arr, arr+n);
// 	cout << "\nArray after sorting using "
// 			"default sort is : \n";
// 	for (int i = 0; i < n; ++i)
// 		cout << arr[i] << " ";

// 	return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address of var1
    cout << "Address of var1: "<< *&var1 << endl;

    // print address of var2
    cout << "Address of var2: " << *&var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;

    int *p = &var1;
    char ew = 'e';
    char *k = &ew;
    cout<<p<<endl;
    cout<<k;
}