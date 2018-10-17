// Graph.h

// Same as graph.c -> make sure all functions are in correctly, and any alterations we make to graph.c exist
// in graph.h (struct definition etc.)


// Graph header file: parts taken from week 5 exercise graph.h file:


#include <stdbool.h>

typedef struct GraphRep *Graph;

typedef int Vertex;

typedef struct edge {
    Vertex v;
    Vertex w;
} Edge;


Graph newGraph(int);

void insertEdge(Graph, Edge);

void removeEdge(Graph, Edge);

bool adjacent(Graph, Vertex, Vertex);

void showGraph(Graph);

void freeGraph(Graph);



