/*
 * ====================================================================================
 *
 *                              CP QUICK REFERENCE
 *
 * ====================================================================================
*/


// =======================================================
//      0. TEMPLATE
// =======================================================

// Compile command: g++ -std=c++17 -Wall -o main file_name.cpp

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}

// Extra macros:
typedef pair<int,int> pi;
typedef vector<pi> vpi;


// =======================================================
//      1. BASIC DATA STRUCTURES & METHODS
// =======================================================

void ds_reference() {

    // --- vector<T> --- Dynamic Array
    vector<int> v;
    // Methods
    v.push_back(val);      // Add to end (amortized O(1))
    v.pop_back();          // Remove from end (O(1))
    v.size();              // Get number of elements
    v.empty();             // Check if empty
    v[i];                  // Access i-th element (O(1))
    v.front(); v.back();   // Access first/last element
    v.clear();             // Remove all elements
    // Iterators
    v.begin(); v.end();    // For forward iteration/algorithms
    v.rbegin(); v.rend();  // For reverse iteration/algorithms


    // --- pair<T1, T2> --- Tuple of two elements
    pair<T, T> p;
    p.first;               // Access first element
    p.second;              // Access second element


    // --- stack<T> --- LIFO (Last-In, First-Out)
    stack<int> s;
    // Methods
    s.push(val);           // Add to top
    s.pop();               // (void) Remove top element
    s.top();               // Access top element
    s.empty(); s.size();   // Check state, impt to prevent errors


    // --- queue<T> --- FIFO (First-In, First-Out)
    queue<int> q;
    // Methods
    q.push(val);           // Add to back
    q.pop();               // (void) Remove front element
    q.front();             // Access front element
    q.back();              // Access back element
    q.empty(); q.size();   // Check state


    // --- deque<T> --- Double-Ended Queue
    deque<int> d;
    // Has all vector methods plus:
    d.push_front(val);     // Add to front
    d.pop_front();         // Remove from front


    // --- priority_queue<T> --- Heap
    // By default: Max-Heap (greatest --> least)
    priority_queue<int> max_pq;
    // Min-Heap (least --> greatest) syntax: 
    priority_queue<T, vector<T>, greater<T>> min_pq;
    // Heaps that stores pairs:
    priority_queue<pair<T,T>> pair_max_pq // Max-Heap
    priority_queue<pair<T,T>>, <vector<pair<T,T>>, greater<pair<T,T>> pair_min_pq; // Min-Heap

    // Methods (all O(log N) except top, empty, size)
    max_pq.push(val);      // Insert element
    max_pq.pop();          // (void) Remove top element (max/min)
    max_pq.top();          // Access top element (O(1))
    max_pq.empty(); max_pq.size();


    // --- set<T> / multiset<T> --- Sorted, Unique/Duplicated Elements
    set<int> st; multiset<int> ms;
    // All methods are O(log N)
    st.insert(val);        // Add element
    st.erase(val);         // Remove by value (all occurrences in multiset)
    st.erase(iterator);    // Remove by iterator (one occurrence in multiset)
    st.count(val);         // Count occurrences (returns count, 0 if not found)
    // use st.find(val) != st.end() (evaluates true if val is found in set)
    st.find(val);          // Returns iterator to val, or .end() if not found
    st.lower_bound(val);   // Iterator to first element >= val
    st.upper_bound(val);   // Iterator to first element > val
    st.empty(); st.size();


    // --- map<Key, Value> --- Sorted Key-Value Pairs
    map<int, int> m;
    // All methods are O(log N)
    m[key] = val;          // Access/insert, creates key if it doesn't exist.
    m.insert({key, val});  // Insert pair
    m.erase(key);          // Remove by key
    m.count(key);          // Check existence (returns 0 )
    m.find(key);           // Returns iterator to pair, or .end() if not found
    m.empty(); m.size();
    // DO NOT use: if (my_map[key]) to check if key exists, it will create a new key
    // automatically and will mess some things up
    // Iteration: for(auto const& [key, val] : m) { ... }
}


// =======================================================
//      2. IMPORTANT STL FUNCTIONS & CUSTOM SORTING
// =======================================================

void stl_functions() {
    // sort() - O(N log N)
    sort(v.begin(), v.end());             // Ascending: {1, 1, 3, 4, 5, 9}
    sort(v.rbegin(), v.rend());           // Descending: {9, 5, 4, 3, 1, 1}
    sort(arr, arr + n);                   // For regular arrays

    // next_permutation; WARNING: RARELY USED, TIME COMPLEXITY OF O(N!)
    vector<int> s = {1,2,3,4}; // Has to be sorted
    
    do {
      // Do whatever in with the vector, every iteration changes the actual vector 
    } while (next_permutation(s.begin(), s.end()));
}


// =======================================================
//      3. DERIVED DS & TEMPLATES
// =======================================================

// --- Prefix Sums ---
// Use case: Many sum queries on a STATIC array. O(N) build, O(1) query.
// Formula: sum(L, R) = pref[R+1] - pref[L] (using 1-based prefix array for 0-indexed original)
void prefix_sum() {
  // NOTE: This prefix sum is 1-indexed
  vector<int> v(5) = {1,2,3,4,5};
  vector<int> p_sum(5 + 1, 0);

  for(int i = 1; i <= N; i++){
      p_sum[i] = v[i - 1];
      if(i > 1){
        p_sum[i] += p_sum[i - 1];
      }
  }
  // Sum of elements from L to R (inclusive):
  cout << p_sum[R] - p_sum[L-1] << '\n'; // [L - 1] to make it inclusive
}


// =======================================================
//      4. TECHNIQUES & TEMPLATES
// =======================================================

// --- Greedy ---
// Making locally optimal choice that leads to a global optimum
// Trigger: "Maximize/minimize...", "smallest/largest...", "earliest/latest..."
// Common strategy: Sort the input by some value (e.g., end times, weights) and process


// --- Binary Search the Answer (BSTA) ---
// Idea: Binary search for the optimal value itself.
// Trigger: "Minimize the maximum ..." or "Maximize the minimum ..."
// The hard part is writing the check() function.
void bsta() {
  int  l = 1, r = 1e10; // l is min possible val, r is max possible value
  
  while (l < (r - 1))
  {
    int mid = (l + r) / 2;
    if (valid(mid))
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
    /*
      l & r are adjacent
      l is the boundary of valid(x) == false region
      r is the boundary of valid(x) == true region
    
      e.g., valid(x) checks for numbers > 5
      [1,2,3,4,5,6,7,8,9,10]
                l r
    */
    cout << r;
  }
}


// --- Sliding Window ---
// Idea: Maintain a "window" (subarray/substring) over the data.
// Use case: Find longest/shortest subarray/substring with a certain property.
void sliding_window() {
  int l = 0;

  int sum = 0;
  int ans = 0;

  for (int r=0; r<N; r++){
    sum += v[r]; // expand window to right

    while (condition){
      sum -= v[l]; // shrink window from left
      l++;
    }
    
    if (sum > ans){
      ans = sum; // save best valid window
    }
  }
}

// =======================================================
//      Contest Mindset (By Venkatesan Sriram, aka vs358)
// =======================================================
// 1. READ THE PROBLEM CAREFULLY. Twice. Note sample cases
// 2. CHECK CONSTRAINTS. N <= 10^5 -> O(N) or O(N log N). N <= 20 -> O(2^N)
// 3. THINK ABOUT EDGE CASES. N=0, N=1, all elements same, negative numbers
// 4. IF STUCK > 15 MINS, SWITCH PROBLEMS
// 5. USE THE TOILET FREQUENTLY