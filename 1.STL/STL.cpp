#include<bits/stdc++.h>
using namespace std;      // We write this to avoid writing std:: before any cout,cin statement

void print()            // This is a function, This does not returns anything
{
  cout<<"Hey Pranav";
}

int sum(int a, int b)   // This is also a function, but it returns and there can be int,double,float anything you want
{
  return a+b;
}
  

int main()
{
  print();
  int s = sum(1,5); // call the sum function and get the sum by passing the value
  cout<<s;
  
  return 0;
}




// STL is divided into 4 parts -
//  Algorithms
// Container
// Function
// Iterators






// PAIRS


void explainpair()
{
  //Just a pair
  pair<int,int> p={1,2};
  // In order to accesss the first element of pair will be called as first,
  // In order to access the second element of pair will be called as second
  cout<<p.first<<" " <<p.second


  //Pair of pair
  pair< int, pair<int,int> p={ 1, < 2,3>>;
  // Now in order to access the 1 we call it like p.first,
  // But now when we try to access 2 we will call it as p.second.first   (its second pairs, first element),
  // Now in order to access 3 we will call it like p.second.second
  cout<<p.first<<p.second.first<<p.second.second;


  //Array of pairs
  pair <int, int> arr[]= { {1,2}, {3,4}, {4,5} }
  // Now in order as this is a Array this will be accessed by Indexes!!
  cout<< arr[1}.second // Output will be 4
  cout<< arr[0}.first // Output will be 1

    }





// VECTOR//

    // okay, so basically why there was a need of vector so basically before vector, we are used to use  array for storing the elements, 
    //but what the problem was that if we declare array of integer [5], then there was no chance of modifying that.

    // int arr[5]={ 1,2,3,4,5} // we cant add even one int in this array bcz the size is 5 only


// when we don't know how much space we required, then only we use vectors.


void explainvector()
{
  vector<int> v; // Declartion of Vector, 'v' is the name of vector

  v.pushback(1);
  v.emplaceback(2);


  vector<pair<int, int>> vec;
  // in order to add element in vector pair there are two options

  v.pushback({1,2})
  v.emplacebac(3,4) // this is fastt



  vector<int> v(5,100);    // (100,100,100,100,100)   This wll create 5 instances of 100 in Container

  vector<int> v(5);     // We can you this only to create 5 numbner of space filled with garbage value

  vector<int> v1(5,20);  // {20,20,20,20,20}
  vector<int> v2(v1);    // when we pass the V1 in V2, the V1 output will be copied in V2   {20,20,20,20,20}

  cout<<v[1];  // to access element in vector
  cout<<v.at(1); //this generally we dont use!


  vector<int>::iterator it= v.begin();   // okay, so basically here IT is just a name. It can be anything.
                                         // v.begin it generally features the memory address of that particular element

  cout<< *(it);   // after applying Astris, it access the element, but if you don't add actress, then it only fetches the memory address!


  //exmaple= {10,20,30,40}

  vector<int>::iterator it= v.end(); // this will point the location after the element 40.
  vector<int>::iterator it= v.rend(); // this will reverse the end and shift it to element before 10 as {40,30,20,10}
  vector<int>::iterator it= v.rbegin(); // this will reverse the beginning that means the new beginning is 40 as {40,30,20,10}



  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << * it << " ";
  }


  //{10,20,30,40}
  v.erase(v.begin()+1);
  //{10,30,40}

  
  //to erase multiple at once 'v.erase(start,end)'
  v.erase(v.begin()+1,v.begin()+3);
  //output will be {10,40}

  v.insert(v.begin(), 5);
  // {5,10,40}


  // In-order to insert multiple at a position
  v.insert(v.begin()+1, 2,10);
  // {5,10,10,10,40}

  cout<<v.size(); //prints the size of vector

  //v1={10,20}
  //v2={30,40}
  v1.swap(v2);      // Swaps 2 vector elements
  //v1=30,40
  //v2=10,20

  v1.clear(); // Erases entire vector






  //LIST//

  void explainList()
  {
    list<int> ls;

    ls.push_back(2);    //{2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front();

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
  }


//DQ//

void explainDeque()
  {
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back();  // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();

    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend , clear, insert, size, swap
  }


//***Stack --> LIFO (Last in First out)//

void explainStack() // O(1) --> everythig happens in constant time
{
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.push(3);    // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // it gives 5 but 5 is still on the top                                  //0(1) Time complexity for every operation in stack
                      // when st.pop() it deletes

    st.pop();           // st looks like {3,3,2,1}
    cout << st.top();   // 3
    cout << st.size();  // 4
    cout << st.empty(); // false

    stack<int> st1, st2;
    st1.swap(st2);
}


//Queue//

void explainQuue()
{ // similar to stack but FIFO --> First in First Out
  // O(1) --> all happens in constant time
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;    // 9 --> here back will mean 4   {1,2,4+5(9)}
    cout << q.back(); // prints last element 9

    // Q is {1,2,9}
    cout << q.front(); // prints 1

    q.pop(); // {2,9} --> deletes the front one

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

//Priority Queue//
/* -> that has the largest value statys at the top
    push --> O(log n)
    top --> O(1)
    pop --> O(log n)
*/

void explainPQ()
{
    // Maximum Heap (Maximum at the top of queue)
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}                                                                
    pq.emplace(10); // {10,8,5,2}                                                              

    cout << pq.top(); // prints 10

    pq.pop(); // {8,5,2} --> 10 poped (removed)

    cout << pq.top(); // prints 8

    // size, swap, empty function same as others

    // Minimum Heap (Minimum at the top of queue)
    priority_queue<int, vector<int>, greater<int>> pq; // -> for minimum element at the top

    pq.push(5);     // {5}
    pq.push(2);     // {2,5}
    pq.push(8);     // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); // prints 2
}



/*
    ** Set Container **
    -> It stores everything in the sorted order
    -> Stores unique // *UNIQUE

*/

void explainSet() // O(lon n)
{
    set<int> st;

    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns to the iterator which point to the 3

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // if an element is not here in the set ,
    // it will always return st.end(); --> an iterator which point to right after the end

    // {1,4,5}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(1); // if 1 occerence it will gives 1 nor 0 as it stores only unique 

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1,4,5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does

    // This is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);
}

void explainMultiSet()
{
    // everything is same as set
    // only stores duplicate elements also

    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); // -> counts number of 1 in the multiset

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(2)); // erase(start address, end address) // errase both of them

    // rest of all functions same as set
}


void explainUSet()
{   
     // unordered set
    unordered_set<int> st; // everything is similar to set

    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity  // O(1) ; blue moon happens in worst case O(N)
    // than set in most cases, except some when collision happens
}


void explainMap()
{
    // * map stores unique keys in sorted order

    map<int, int> mpp; // {key,value}

    map<int, pair<int, int>> mpp; // here key is integer, value is 2 integer

    map<pair<int, int>, int> mpp; // here key is 2 integer, value is 1 integer

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // mpp[{2, 3}] = 10;

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5); // if 5 not there it point to nothing but mpp.end();
                           // .end() means after the mpp

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase(), swap(), size(), empty(), are same as above
}
  

void explainMultimap()
{
    // everything is same as map, only it can store multiple keys
    // only mpp[key] can not be used here
}

void explainUnorderedMap()
{
    // unique keys but not stored
    // same as set and unordered_Set differnce.
}


//Algorithmss//

//*** SORTING ***//

void explainExtra()
{
    // {10,20,30,40}
    sort(a, a + n); // [start,end)      Sort (10, aage ke 3 excluding end)
  
    sort(v.begin(), v.end());   // for vector sortinggg

    sort(a + 2, a + 4); // we can sort a portion onlyy in case {30,40} will be sorted

    sort(a, a + n, greater<int>); // sort in descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in decreasing

    sort(a, a + n, comp);

    int num = 6;
    int cnt = __builtin_popcount(); // returns 2 , the number of set bits
                                    // 1 1 0

    long long num = 165786578687;
    int cnt = __builtin_popcountll(); // if the number is long long

    string s = "123";
    sort(s.begin(), s.end()); // always start from sorted

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
    // without * gives max elemement address ; with * gives element

    int mini = *min_element(a, a + n);
    //  without * gives min elemement address ; with * gives element
}

int main()
{
    // explainPairs();
    // explainVectors();

    return 0;
}
























