# Graph Data Structure

This is a C++ implementation of a graph data structure using an adjacency list representation. It provides methods to add edges, remove edges, check if an edge exists between two vertices, and print the graph.

## Usage

1. Clone the repository or copy the code into your C++ project.

2. Include the `Graph.h` header file in your code:

```cpp
#include "Graph.h"
```

3. Create a `Graph` object by specifying the number of vertices:

```cpp
Graph graph(numVertices);
```

4. Use the provided methods to manipulate the graph:

- `addEdge(int src, int dest)`: Adds a directed edge from source vertex to destination vertex.

- `removeEdge(int src, int dest)`: Removes the directed edge from source vertex to destination vertex.

- `hasEdge(int src, int dest)`: Checks if an edge exists between the source vertex and the destination vertex.

- `printGraph()`: Prints the adjacency list representation of the graph.

5. Compile and run your program.

## Example

Here's an example usage of the graph data structure:

```cpp
#include <iostream>
#include "Graph.h"

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
    std::cout << "Edge between 1 and 3: " << (graph.hasEdge(1, 3) ? "Yes" : "No") << std::endl;
    std::cout << "Edge between 2 and 4: " << (graph.hasEdge(2, 4) ? "Yes" : "No") << std::endl;

    // Remove an edge
    graph.removeEdge(1, 3);

    // Print the graph again to verify removal
    std::cout << "After removing an edge:" << std::endl;
    graph.printGraph();

    return 0;
}
```

This code creates a graph with 5 vertices and adds some edges. It then prints the graph, checks if specific edges exist, removes an edge, and prints the graph again to verify the removal.

## License

This code is available under the [MIT License](LICENSE).

Feel free to use and modify this code for your own purposes. If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request. When contributing, please follow these guidelines:

1. Fork the repository and create your branch from `main`.
2. Make your changes and test thoroughly.
3. Ensure your code follows the existing code style and conventions.
4. Document any changes or additions you make.
5. Submit a pull request explaining the changes you've made.

## Limitations

This graph data structure implementation has a few limitations to consider:

- It supports directed graphs, where edges have a specific direction from source to destination vertices. If you need an undirected graph, you would have to add edges in both directions manually.
- It does not handle self-loops (edges from a vertex to itself) or multiple edges between the same pair of vertices. If your use case requires handling these scenarios, you would need to modify the code accordingly.

## Acknowledgments

This implementation is a basic example of a graph data structure using an adjacency list representation. It can serve as a starting point for more advanced graph algorithms and applications.