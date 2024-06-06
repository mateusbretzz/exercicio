#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <vector>
#include <list> //Lista

class Grafo {


private:
    int numVertices; // Número de vértices
    std::vector<std::list<int>> listaAdj; // Lista de adjacência

    public:
    Grafo(int vertices);
    void addAresta(int v, int w);
    bool saoVizinhos(int v, int w);
    std::list<int> getVizinhos(int v);
    void imprimeGrafo();
};

#endif 
