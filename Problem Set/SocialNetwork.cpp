#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    deque<int> op;
    unordered_set<int> present; 

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (present.find(a) == present.end()) {  
            if (op.size() == k) {  
                int removed = op.back();
                op.pop_back(); 
                present.erase(removed); 
            }
            op.push_front(a);  
            present.insert(a);  
        }
    }
    cout<< op.size()<<endl;
    for (int elem : op) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
