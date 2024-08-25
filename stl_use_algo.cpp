#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void test_algo_sort(void){
    vector<int> v = {1, 3, 2, 5, 4};
    //sort(v.begin(), v.end()); // This will sort to 1,2,3,4,5
    //sort(v.rbegin(), v.rend()); // This will sort to 5,4,3,2,1
    //sort(v.begin(), v.end(), std::greater<int>()); // This will sort to 5,4,3,2,1
    //sort(v.begin(), v.end(), std::less<int>()); // This will sort to 1,2,3,4,5
    //sort(v.rbegin(), v.rend(), std::greater<int>()); // This will sort to 1,2,3,4,5

    // Sorting partial array, sort only from index 2 to end
    sort(v.begin()+2, v.end()); // This will sort to 1,3,2,4,5
    cout <<"Running option 6"<<endl;
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

void show_array(int a[], int array_size);
void test_algo_search(){
    int array[] = {1,5,8,9,6,7,3,4,2,0};
    int size_of_array = sizeof(array)/sizeof(array[0]);

    cout<<"Array before sorting";
    show_array(array, size_of_array);

    //sort(array, array+size_of_array); // works with binary_search
    sort(array, array+size_of_array, std::greater<int>()); // doesn't work with binary_search without using greater<int>()
    cout<<"Array after sorting";
    show_array(array, size_of_array);

    // binary_search only works on a sorted array (smaller-> greater)
    //bool found = binary_search(array, array+size_of_array, 8);

    // For reverse sorted array use this binary search
    bool found = binary_search(array, array+size_of_array, 8, std::greater<int>());

    if (found){
        cout<< "found the element"<<endl;
    }else{
        cout<<"Did not find the element"<<endl;
    }

}

void show_array(int a[], int array_size){
    for (int i = 0; i < array_size-1; i++){
        cout<<a[i]<<",";
    }
    cout<<a[array_size-1]<<endl;

}


void test_algo_partition(){
    vector<int>v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int>v2 = {2,8,4,10,5,7,9,1,3};
    vector<int>v3 = {2,8,4,3,10,5,7,9,1};

#if 0
    // Check of v1 is partitioned on the condition that the element <=7
    cout<<"Check if v1 is partitioned on the condition that the element <=7"<<endl;
    is_partitioned(v1.begin(), v1.end(), [](int x){return x<=7;})? cout<<"Yes\n": cout<<"No\n"; // Yes
    cout<<endl;

    // Check of v2 is partitioned on the condition that the elements are even
    cout<<"Check if v2 is partitioned on the condition that the elements are even"<<endl;
    is_partitioned(v2.begin(), v2.end(), [](int x){return x%2 == 0;})? cout<<"Yes\n": cout<<"No\n"; // Yes
    cout<<endl;
#endif
    // Check of v3 is partitioned on the condition that the elements are even
    cout<<"Check of v3 is partitioned on the condition that the elements are even"<<endl;
    is_partitioned(v3.begin(), v3.end(), [](int x){return x%2 == 0;})? cout<<"Yes\n":cout <<"No\n"; //No
    cout <<endl;


    // Now we are going to partition v3
    partition(v3.begin(), v3.end(), [](int x){ return x%2 == 0;});
    cout<<"Check of v3 is NOW partitioned on the condition that the elements are even"<<endl;
    is_partitioned(v3.begin(), v3.end(), [](int x){return x%2 == 0;})? cout<<"Yes\n":cout <<"No\n"; //No
    cout <<endl;

}