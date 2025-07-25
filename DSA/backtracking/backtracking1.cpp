#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

// Backtracking maze solver function
list<int> solveMaze(list<int> maze[], int start, int finish) {
    unordered_set<int> visited;
    list<int> path;

    path.push_back(start);
    visited.insert(start);
    int currentPoint = start;

    while (path.back() != finish && !path.empty()) {
        currentPoint = path.back();
        list<int>::iterator iter = maze[currentPoint].begin();
        bool foundOutlet = false;

        // Try all connected nodes
        while (iter != maze[currentPoint].end() && !foundOutlet) {
            if (visited.count(*iter) == 0) {
                foundOutlet = true;
            } else {
                iter++;
            }
        }

        if (foundOutlet) {
            path.push_back(*iter);         // Go to the next point
            visited.insert(*iter);         // Mark as visited
        } else {
            path.pop_back();               // Backtrack
        }
    }

    return path;
}

void printPath(const list<int>& path) {
    if (path.empty()) {
        cout << "No path found!" << endl;
        return;
    }
    cout << "Path found: ";
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;
}

int main() {
    const int N = 4; // Number of nodes (0 to 3)

    // Define maze as adjacency list
    list<int> maze[N];

    maze[0].push_back(1);
    maze[0].push_back(2);
    maze[1].push_back(3);
    maze[2].push_back(3);
    // maze[3] has no neighbors (finish point)

    int start = 0;
    int finish = 3;

    list<int> result = solveMaze(maze, start, finish);

    printPath(result);

    return 0;
}
