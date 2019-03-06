//
//  Graph.hpp
//  DataStructured
//
//  Created by Mumford, Ethan on 3/6/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp
#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph

private:
static const int MAXIMUM = 50;
bool adjacencyMatrix [MAXIMUM][MAXIMUM];
int weightCostMatrix [MAXIMUM][MAXIMUM];
Type graphData[MAXIMUM];
int vertexCount;
void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);

public:
Graph();
void addVertex(const Type& value);
void addEdge(int source, int target);
void addEdgeUndirected(int source, int target);
void addEdgeCost(int source, int target, int cost);
void removeEdge(int source, int target);
void removeEdgeUndirected(int source, int target);
void removeEdgeCost(int source, int target);
Type& operator [] (int vertex);
Type operator [] (int vertex) cosnt;
int size() cosnt;

bool hasUndirectedConnection(int source, int target) const;
bool areConnected(int source, int target) const;
std::set<int> neigbors(int vertex) const;
void depthFirstTraversal(Graph<Type> & graph, int vertex);
void breadthFirstTraversal(Graph<Type> & graph, int vertex);
int costTraversal(Graph<Type> & graph, int vertex);

template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
Graph<Type> :: Graph()
{
    this->vertexCount = 0;
}

template <class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}
template <class Type>
Type& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}
template <class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount <  MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otheVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNubmer][otherVertexNumber] = false;
    }
    graphData[newVertexNumber] = value;
}
template <class Type>
void Graph<Type> :: addEdge(int source, int target)








template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & current Graph, int vertex)
{
    bool visitedVertices[MAXIMUM];
    assert(vertex < currentGraph.size());
    std::fill_n(visitedVertices, currentGraph.size(), false);
    depthFirstTraversal(currentGraph, vertex, visitedVertices);
}
template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex, bool * visited)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>::iterator setIterator;
    
    visited[vertex] = true;
    cout<<
    for (setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        
        
        }



#endif /* Graph_h */
