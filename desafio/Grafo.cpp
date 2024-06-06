#include "Grafo.hpp"
#include <iostream>

Grafo::Grafo(int vertices) : numVertices(vertices) {
    listaAdj.resize(vertices);   
}

void Grafo::addAresta(int v, int w) {
    listaAdj[v].push_back(w);
    listaAdj[w].push_back(v);
}

bool Grafo::saoVizinhos(int v, int w) {
    for (int vizinho : listaAdj[v]) {
        if (vizinho == w) {
            return true;
        }
    }
    return false;
}

std::list<int> Grafo::getVizinhos(int v) {
    return listaAdj[v];
}

void Grafo::imprimeGrafo() {
    for (int v = 0; v < numVertices; ++v) {
        std::cout << "Vértice " << v << " conectado a:";
        for (int vizinho : listaAdj[v]) {
            std::cout << " " << vizinho;
        }
        std::cout << std::endl;
    }
}
