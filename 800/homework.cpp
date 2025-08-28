#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;
    
    int t; 
    cin >> t;
    while(t--) {

        string a,b,c;
        int n,m;

        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;

        //we want to run the loop for b, aur humne check karna hai string c ke saath ke kiski bari hai 

        for (int i = 0; i <m; i++) {

            //now we use string c to check kiski bari hai 

            if ( c[i] == 'V') {
                a = b[i] + a;
                }
            else {
                a = a + b[i];
            }
        }

        cout << a; 
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

//note; for this one I was really having trouble understanding the last line of the input and why
// and why we need string c
// basically string C humay bata raha hai ke bari kiski hai 
// there is a difference between single and double quotes in c++ 
