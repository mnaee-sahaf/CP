#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;
    
    int t; cin >> t;
    //hh mm
    //24 00 = 00 00 
    // (24-h)60 + (60-m)mm = total mins

    while(t--) {

        int h, m;
        cin >> h;
        cin >> m;

        int total_mins = (24 * 60) - (h * 60 + m);
        cout << total_mins << "\n";

    }
    
    return 0;
}
// Understand the problem clearly
// Read the statement carefully
// Rephrase it in your own words.
// Work through small examples.
// Manually solve the problem for tiny inputs.
// Look for patterns.
// Figure out constraints & complexity
// What’s the max input size?
// Do we need O(n), O(n log n), or is O(n²) fine?
// Plan and implement the algorithm.
// Write down the steps in plain words first.
// Translate them into code.
// Test on sample and custom cases.

// new thing im learning, or want to learn here is how to manage multiple types of inputs
// seems like again this requires basic mathematical implementation of code, no specific "patterns"
// "tricks" or even Data structures are requried 