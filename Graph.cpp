#include "Graph.h"

int main() {
    Graph g;
    g.addEdge("Paris", "Lyon", 100);
    g.addEdge("Paris", "Marseille", 150);
    g.addEdge("Lyon", "Nice", 80);
    g.addEdge("Marseille", "Nice", 70);
    g.addEdge("Nice", "Paris", 200);

    std::cout << "Graph:" << std::endl;
    g.printGraph();

    std::cout << "\nDFS Recursive from Paris:" << std::endl;
    std::unordered_map<std::string, bool> visited;
    g.dfsRecursive("Paris", visited);

    std::cout << "\nDFS Iterative from Paris:" << std::endl;
    g.dfsIterative("Paris");

    std::cout << "\nBFS from Paris:" << std::endl;
    g.bfs("Paris");

    return 0;
}