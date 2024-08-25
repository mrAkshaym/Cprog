#include<iostream>
#include<vector>
#include<list>

using namespace std;

void test_container_vector(){
    //vector<int>v;
    //vector<int>v(5,10); // 5 elements with value 10
    vector<int>v{2,4,5,7,9};

    cout<<"Size of vector:"<< v.size()<<endl; // 0
    cout<<"Capacity of vector:"<< v.capacity()<<endl; //0
    cout<<"max size of vector : "<<v.max_size()<<endl; // some huge number

    cout<< "printing all the vector elements"<<endl;
    for (auto i : v){
        cout<<i<<",";
    }
    cout<<endl;

    v.push_back(10);
    cout<<"Size of vector:"<< v.size()<<endl; // 0
    cout<<"Capacity of vector:"<< v.capacity()<<endl; //0
    cout<<"max size of vector : "<<v.max_size()<<endl; // some huge number

    cout<< "printing all the vector elements"<<endl;
    for (auto i : v){
        cout<<i<<",";
    }
    cout<<endl;

    v.erase(v.begin()); // erase first element
    cout<< "Erase first element"<<endl;
    for (auto i : v){
        cout<<i<<",";
    }
    cout<<endl;

    cout<<"element at index 2: "<<v.at(2)<<endl; //7

}

void test_container_list(){

    list<char> l;

    cout<< "Size of list: "<<l.size()<<endl;
    cout << "Max size of list:" << l.max_size()<<endl;

    l.push_back('a');
    l.push_back('b');
    for (auto i : l){
        cout<<i<<",";
    } //a,b,
    cout <<endl;

    l.push_front('z');
    for (auto i : l){
        cout<<i<<",";
    }// z,a,b,
    cout<<endl;

    // note l.begin() +1 wont work. You need to use "advance()"
    list<char>::iterator it = l.begin();
    advance(it, 1);
    l.insert(it, 'x');
    for (auto i : l){
        cout<<i<<",";
    }// z,x,a,b,
    cout<<endl;
}
