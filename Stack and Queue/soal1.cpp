#include <iostream>
#include <stack>
using namespace std;

int main() {
    int num;
    cin >> num;
    

    stack<int> st;
    for (int i = 0; i < num; i++) {
        string perintah;
        cin >> perintah;
        if (perintah == "push") {
            int n;
            cin >> n;
            st.push(n);
        } else if (perintah == "pop" && !st.empty()) {
            st.pop();
        }
        if (!st.empty()) {
            stack<int> show = st;
            while (!show.empty()) {
                cout << show.top() << " ";
                show.pop();
            }
            cout << endl;
        }
    }
    return 0;
}
