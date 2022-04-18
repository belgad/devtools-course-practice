// Copyright 2022 Gleb "belgad" Danshin
#ifndef MODULES_GRAPH_DIAMETER_INCLUDE_GRAPH_DIAMETER_H_
#define MODULES_GRAPH_DIAMETER_INCLUDE_GRAPH_DIAMETER_H_

#include <vector>

class Graph {
  using Vector = std::vector<int>;
  using Matrix = std::vector<Vector>;
 public:
  Graph();
  Graph(size_t);
  Graph(Matrix&);
 private:
  size_t graph_size_;
  Matrix weights_;
};

#endif // MODULES_GRAPH_DIAMETER_INCLUDE_GRAPH_DIAMETER_H_
