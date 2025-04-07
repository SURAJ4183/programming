#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue
    q.push(10);  // Adds 10
    q.push(20);  // Adds 20
    q.push(30);  // Adds 30

    // Peek
    cout << "Front element: " << q.front() << endl;  // Output: 10

    // Dequeue
    q.pop();  // Removes 10
    cout << "After dequeue, front: " << q.front() << endl;  // Output: 20

    // Check size
    cout << "Queue size: " << q.size() << endl;  // Output: 2

    // IsEmpty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; //using ternary operator 

    return 0;
}
