// Copyright 2022 Gleb "belgad" Danshin
#include "include/graph_diameter.h"

#include <vector>

Graph::Graph()
    : graph_size_(0),
      weights_(Matrix(0, Vector(0))) {}

Graph::Graph(size_t graph_size)
    : graph_size_(graph_size), weights_(
      Matrix(graph_size, Vector(graph_size, 0))) {}

Graph::Graph(Matrix& weights)
    : graph_size_(weights.size()), weights_(weights) {}
