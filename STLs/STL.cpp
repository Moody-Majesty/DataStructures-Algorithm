#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {5, {9, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{4, 5}, {2, 3}, {7, 9}};
    cout << arr[1].second;
}

void explainVector(){
    vector<int> v;

    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<pair<int, int>> v1;
    v1.push_back({4, 5});
    v1.emplace_back(5, 6);

    vector<int> v2(5, 100);    // {100, 100, 100, 100, 100}

    vector<int> v3(5);    // vector will have 0 or any garbage value -> depending on compiler

    vector<int> v4(5, 20);
    vector<int> v5(v4);

    vector<int>::iterator it = v.begin();    // will point to memory address of 1st element in v

    it++;
    cout << *(it) << " ";

    it += 2;
    cout << *(it) << endl;

    auto it1 = v.end();    // will point to element right after last element in v
    auto it2 = v.rend();    // will point to element right before first element in v
    auto it3 = v.rbegin();

    cout << v[0] << " " << v.at(0);

    cout << "Front of Vector v: " << v.front() << endl;
    cout << "Back of Vector v: " << v.back() << endl;

    // print vector
    for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = v4.begin(); it != v4.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    
    // erase/delete vector element
    // {10, 20, 30, 40, 50}
    v.erase(v.begin() + 1);    // {10, 30, 40, 50}

    // {10, 20, 30, 40, 50}
    v.erase(v.begin() + 2, v.begin() + 4);    // {10, 20, 50} [start, end] -> start = inclusive index and end = exclusive

    
    
    //insert function
    vector<int> v7(2, 100);    // {100, 100}
    v7.insert(v7.begin(), 200);    // {300, 100, 100}
    v7.insert(v7.begin() + 1, 2, 10);    // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);    // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());    // {50, 50, 300, 10, 10, 100, 100}

    
    // # of elements in vector
    cout << "Size of vector v: " << v.size() << endl;

    // remove last element
    v.pop_back();

    // swap two vectors
    v.swap(v2);

    // erase all elements of vector
    v.clear();

    // check if vector is empty or not
    cout << v.empty() << endl;
}

void explainList(){
    list<int> ls;

    ls.push_back(5);  // {5}
    ls.emplace_back(7);  // {5, 7}
    cout << "List ls: ";
    for(auto i : ls){
        cout << i << " ";
    }
    cout << endl;



    ls.push_front(3);    // {3, 5, 7} better then vector's insert function
    ls.emplace_front(9);  // {9, 3, 5, 7}
    cout << "List ls: ";
    for(auto i : ls){
        cout << i << " ";
    }
    cout << endl;

    /* rest functions are same as vector
       begin, end, rbegin, rend, clear, insert, size, swap, empty
    */
}

void explainSet(){
    set<int> s;

    s.insert(1);    // {1}
    s.insert(2);    // {1, 2}
    s.insert(2);    // {1, 2}
    s.insert(4);    // {1, 2, 4}
    s.emplace(3);    // {1, 2, 3, 4}

    /* Functionality of insert in vector
       can be used also, that only increases
       efficiency
    */

    /* begin(), end(), rend(), rbegin(), size(),
       empty(), swap() are same as above
    */

    // {1, 2, 3, 4, 5}
    auto it = s.find(3);  // returns iterator which will point to 3

    // {1, 2, 3, 4, 5}
    auto it1 = s.find(6);  // if element is not present, iterator will point to st.end()

    // {1, 4, 5}
    s.erase(5);    // erases 5, takes log time

    int cnt = s.count(1);

    auto it2 = s.find(3);
    s.erase(it2);    // constant time

    // {1, 2, 3, 4, 5}
    auto it3 = s.find(2);
    auto it4 = s.find(4);
    s.erase(it3, it4);    // after erase {1, 4, 5}  [start, end]

    // lower_bound and upper_bound works in same way
    // as in vector.

    auto itl = s.lower_bound(2);
    auto itu = s.upper_bound(4);
}

void explainMultiSet(){
    /* Everything is same as set
       only diff is it stores duplicates also
    */

    multiset<int> ms;

    ms.insert(1);  // {1}
    ms.insert(1);  // {1, 1}
    ms.insert(1);  // {1, 1, 1}
    ms.insert(2);  // {1, 1, 1, 2}

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(2));

    ms.erase(1);   // erases all 1s

    // rest all functions are same as set
}

void unorderedSet(){
    unordered_set<int> st;

    /*  Stores only unique elements
    
        lower_bound and upper_bound functions
        doesn't works. rest all funcs are same
        as above, it does not stores in any
        particular order. it has better complexity
        than set in most cases, except some when
        collision happens
    */

}

void explainDeque(){

    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(5);

    dq.push_front(9);
    dq.emplace_front(3);

    dq.front();

    dq.back();

    /* rest functions are same as vector
       begin, end, rbegin, rend, clear, insert, size, swap, empty
    */
}

void explainStack(){

    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2, 1}
    st.push(3);    // {3, 2, 1}
    st.push(4);    // {4, 3, 2, 1}
    st.emplace(5);    // {5, 4, 3, 2, 1}

    cout << "Top of stack is " << st.top() << endl;  // prints 5  **IMP**  st[2] is not allowed

    st.pop();    // // {4, 3, 2, 1}

    cout << "Top of stack is " << st.top() << endl;    // 4

    cout << "Size of stack is " << st.size() << endl;    // 4

    cout << "Is stack empty?? " << st.empty() << endl;

    stack<int> s1, s2;
    s1.swap(s2);

}

void explainQueue(){

    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(4);    // {1, 2, 4}

    q.back() += 5;

    cout << "Back of Queue " << q.back() << endl;    // prints 9

    // Q is {1, 2, 9}
    cout << "Front of Queue "<< q.front() << endl;    // prints 1

    q.pop();

    cout << "Front of Queue " << q.front() << endl;    // prints 2

    // size swap empty same as stack
}

void explainPQ(){

    priority_queue<int> pq;

    pq.push(5);    // {5}
    pq.push(2);    // {5, 2}
    pq.push(8);    // {8, 5, 2}
    pq.emplace(10);    // {10, 8, 5, 2}

    cout << "Top of Priority Q is: " << pq.top() << endl;  // prints 10

    pq.pop();    // {8, 5, 2}

    cout << "Top of Priority Q is: " << pq.top() << endl;  // prints 8

    // size swap empty functions are same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> mpq;

    mpq.push(5);    // {5}
    mpq.push(2);    // {2, 5}
    mpq.push(8);    // {2, 5, 8}
    mpq.emplace(10);    // {2, 5, 8, 10}

    cout << "Top of Priority Q is: " << mpq.top() << endl;  // prints 2
}

void explainMap(){
    /* O(log n)
    */
    map<int, int> mpp;

    map<int, pair<int, int>> mpq;

    map<pair<int, int>, int> mpa;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    mpa[{2, 3}] = 10;

    /*
    {
        {1, 2},
        {2, 4},
        {3, 1}
    }
    */

    for (auto it : mpp){
        cout << "Map is: " << it.first << " " << it.second;
    }
    cout << endl;

    cout << mpp[1];
    cout << mpp[2];

    auto i = mpp.find(100);   // it it's not present, it will return mpp.end()

    auto itl = mpp.lower_bound(3);
    auto itu = mpp.upper_bound(5);

    // erase, size, swap, empty are same as above
}

void explainMultiMap(){
    /*
    everything same as map, only it can store multiple keys
    only mpp[key] cannot be used here
    */
}

void explainUnorderedMap(){
    /*
    O(1) -> O(n) rarely
    same as set and unordered_set difference.
    */
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    
    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra(){
    int n = 4;
    int a[n] = {1, 5, 3, 2};
    
    sort(a, a + n);
    sort(a + 1, a + 3);
    sort(a, a + n, greater<int>());  // sort in descending order

    vector<int> v = {1, 2, 4, 2, 1};
    sort(v.begin(), v.end());

    int m = 3;
    pair<int, int> pa[m] = {{1, 2}, {2, 1}, {4, 1}};

    /* sort it according to second element
       if second element is same, then sort
       it according to first element but in descending
    */
    sort(pa, pa + m, comp);
    // {4, 1}, {2, 1}, {1, 2}

    int num = 7;
    int cnt = __builtin_popcount(num);  // returns set bits in binary of 7
    cout << "Number of bits of: " << num << " " << cnt << endl;

    long long lnum = 165786578687;
    int lcnt = __builtin_popcountll(lnum);  // for long long type
    cout << "Number of bits of: " << lnum << " " << lcnt << endl;

    /*
    it will return permuatations of a given string but
    string needs to be sorted if we want all permutations of a
    string. as next_permutatio will start generating permutation
    from the given string order.
    */
    string s = "123";
    sort(s.begin(), s.end());

    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
    cout << "Maximum is : " << maxi << endl;

    int mini = *min_element(a, a + n);
    cout << "Minimum is : " << mini << endl;
}

int main(){
    // Containers and Ierators
    explainPair();
    explainVector();    // built on singly linked list
    explainList();      // built on doubly linked list
    explainSet();       // stores elements in a sorted + unique way
    explainMultiSet();  // stores elements in a sorted way
    unorderedSet();     // O(1) in most cases
    explainDeque();
    explainStack();     // O(1) complexity for all operations
    explainQueue();     // O(1) complexity for all operations
    explainPQ();        // Not linear. Tree data structure maintained
    explainMap();       // stored in a sorted order of key
    explainMultiMap();  // allows duplicate key but stores in sorted order
    explainUnorderedMap();  // not sorted not unique

    // Algos
    explainExtra();
    return 0;
}