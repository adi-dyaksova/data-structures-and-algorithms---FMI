#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#define MAX 5000000
using namespace std;
long long n, a[MAX],b[MAX];
    

int main() {
    
    int count = 0;
    multiset<long long> s;
    cin>>n;
    for(int i=0; i<n-1; i++) cin>>b[i];    
    for(int i=0; i<n-1; i++) cin>>a[i];

    for(int i=0; i<n-1; i++) {
        s.insert(b[i]);
        auto iter = s.find(a[i]); 
        if (iter == s.end()) {
            count++;
        } else {
            s.erase(iter);
        }
    }
    cout<<count<<"\n";
    return 0;
}