#include <iostream>
#include <queue>
using namespace std;

int main() {
    int num;
    cin >> num;
    

    queue<int> que;
    for (int i = 0; i < num; i++) {
        string perintah;
        cin >> perintah;
        if (perintah == "push") {
            int n;
            cin >> n;
            que.push(n);
        } else if (perintah == "pop" && !que.empty()) {
            que.pop();
        }
        if (!que.empty()) {
            queue<int> show = que;
            while (!show.empty()) {
                cout << show.front() << " ";
                show.pop();
            }
            cout << endl;
        }
    }
    return 0;
}
