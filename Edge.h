#ifndef EDGE_H
#define EDGE_H

class Edge
{
    public:
        int source;
        int destination;
        int weight;
        Edge(int source, int destination, int weight);
        virtual ~Edge();
};

#endif // EDGE_H
