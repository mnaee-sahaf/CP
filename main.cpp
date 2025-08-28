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

        cout << a << "\n"; 
    }
    
return 0;

}

