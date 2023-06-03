#include <iostream>
#include <list>

using namespace std;

// Class representing a directed graph
class Graph {
    int V;              // Number of vertices

    // Pointer to an array containing adjacency lists
    list<int>* adjList;

public:
    // Constructor to initialize the graph
    Graph(int numVertices) {
        V = numVertices;
        adjList = new list<int>[V];
    }

    // Destructor to free the dynamically allocated memory
    ~Graph() {
        delete[] adjList;
    }

    // Function to add an edge to the graph
    void addEdge(int src, int dest) {
        // Add destination to source's adjacency list
        adjList[src].push_back(dest);
    }

    // Function to remove an edge from the graph
    void removeEdge(int src, int dest) {
        // Remove destination from source's adjacency list
        adjList[src].remove(dest);
    }

    // Function to check if an edge exists between two vertices
    bool hasEdge(int src, int dest) {
        // Iterate over the adjacency list of the source vertex
        for (auto it = adjList[src].begin(); it != adjList[src].end(); ++it) {
            // If destination vertex is found, edge exists
            if (*it == dest)
                return true;
        }
        return false;
    }

    // Function to print the graph
    void printGraph() {
        for (int i = 0; i < V; ++i) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (auto it = adjList[i].begin(); it != adjList[i].end(); ++it) {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph graph(5);

    // Add edges to the graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Print the graph
    graph.printGraph();

    // Check if edges exist
    cout << "Edge between 1 and 3: " << (graph.hasEdge(1, 3) ? "Yes" : "No") << endl;
    cout << "Edge between 2 and 4: " << (graph.hasEdge(2, 4) ? "Yes" : "No") << endl;

    // Remove an edge
    graph.removeEdge(1, 3);

    // Print the graph again to verify removal
    cout << "After removing an edge:" << endl;
    graph.printGraph();

    return 0;
}
