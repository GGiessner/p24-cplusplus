#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <string>

# pragma once

class Graph {
private:
    std::unordered_map<std::string, std::vector<std::pair<std::string, double>>> adjList;

public:
    // Ajouter une arête au graphe
    void addEdge(const std::string& départ, const std::string& arrivé, double distance) {
        adjList[départ].emplace_back(arrivé, distance);
    }

    // Parcours en profondeur (DFS) récursif
    void dfsRecursive(const std::string& départ, std::unordered_map<std::string, bool>& visited) {
        visited[départ] = true;
        std::cout << départ << " ";

        for (const auto& voisin : adjList[départ]) {
            if (!visited[voisin.first]) {
                std::cout << "Edge: " << départ << " -> " << voisin.first << " avec un poid de " << voisin.second << std::endl;
                dfsRecursive(voisin.first, visited);
            }
        }
    }

    // Parcours en profondeur (DFS) itératif
    void dfsIterative(const std::string& départ) {
        std::unordered_map<std::string, bool> visited;
        std::stack<std::string> stack;

        stack.push(départ);

        while (!stack.empty()) {
            std::string sommet = stack.top();
            stack.pop();

            if (!visited[sommet]) {
                visited[sommet] = true;
                std::cout << sommet << " ";

                for (const auto& voisin : adjList[sommet]) {
                    if (!visited[voisin.first]) {
                        std::cout << "Edge: " << sommet << " -> " << voisin.first << " avec un poid de " << voisin.second << std::endl;
                        stack.push(voisin.first);
                    }
                }
            }
        }
    }

    // Parcours en largeur (BFS)
    void bfs(const std::string& départ) {
        std::unordered_map<std::string, bool> visited;
        std::queue<std::string> queue;

        queue.push(départ);
        visited[départ] = true;

        while (!queue.empty()) {
            std::string sommet = queue.front();
            queue.pop();
            std::cout << sommet << " ";

            for (const auto& voisin : adjList[sommet]) {
                if (!visited[voisin.first]) {
                    std::cout << "Edge: " << sommet << " -> " << voisin.first << " avec un poid de " << voisin.second << std::endl;
                    visited[voisin.first] = true;
                    queue.push(voisin.first);
                }
            }
        }
    }

    // Afficher le graphe
    void printGraph() const {
        for (const auto& sommet : adjList) {
            std::cout << sommet.first << ": ";
            for (const auto& voisin : sommet.second) {
                std::cout << "(" << voisin.first << ", " << voisin.second << ") ";
            }
            std::cout << std::endl;
        }
    }
};
