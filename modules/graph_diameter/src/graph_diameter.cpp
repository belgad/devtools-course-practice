// Copyright 2022 Gleb "belgad" Danshin
#include "include/graph_diameter.h"

#include <algorithm>
#include <vector>

Graph::Graph()
    : graph_size_(0),
      weights_(Matrix(0, Vector(0))) {}

Graph::Graph(size_t graph_size)
    : graph_size_(graph_size), weights_(
      Matrix(graph_size, Vector(graph_size, 0))) {}

Graph::Graph(Matrix& weights)
    : graph_size_(weights.size()), weights_(weights) {}

size_t Graph::GetSize() const {
  return graph_size_;
}

void Graph::SetSize(size_t new_size) {
  auto n = std::min(graph_size_, new_size);
  Matrix new_weights(new_size, Vector(new_size, 0));
  for (size_t i = 0; i < n; ++i) {
    new_weights[i][i] = weights_[i][i];
    for (size_t j = i + 1; j < n; ++j) {
      new_weights[i][j] = new_weights[j][i] = weights_[i][j];
    }
  }
  weights_ = new_weights;
  graph_size_ = new_size;
}

void Graph::SetEdge(size_t first, size_t second, int weight) {
  auto n = std::max(first, second);
  if (n > graph_size_) {
    this->SetSize(n + 1);
  }
  weights_[first][second] = weights_[second][first] = weight;
}
