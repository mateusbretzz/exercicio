#include <iostream>
#include "Grafo.hpp"

using std::cout;

int main() {
    // Criando um grafo com 5 vértices
    Grafo g(5);

    // Adicionando algumas arestas
    g.addAresta(0, 1);
    g.addAresta(0, 4);
    g.addAresta(1, 2);
    g.addAresta(1, 3);
    g.addAresta(1, 4);
    g.addAresta(2, 3);
    g.addAresta(3, 4);

    // Imprimindo o grafo
    std::cout << "Grafo:" << std::endl;
    g.imprimeGrafo();

    // Testando se dois vértices são vizinhos. Ainda não consegui desenhar ele na tela 
    cout << "Os vértices 0 e 1 são vizinhos?" << (g.saoVizinhos(0, 1) ? " Sim" : " Não") << std::endl;
    cout << "Os vértices 0 e 2 são vizinhos?" << (g.saoVizinhos(0, 2) ? " Sim" : " Não") << std::endl;

    // Obtendo e imprimindo a lista de vértices vizinhos 
    cout << "Os vértices vizinhos do 1 são: ";
    std::list<int> vizinhos = g.getVizinhos(1);
    for (int vizinho : vizinhos) {
        std::cout << vizinho << " ";
    }
    cout << std::endl;

    return 0;
}
