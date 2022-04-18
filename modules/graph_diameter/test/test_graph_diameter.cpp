// Copyright 2022 Gleb "belgad" Danshin
#include "include/graph_diameter.h"

#include <gtest/gtest.h>
#include <vector>

TEST(GraphConstructors, DefaultConstructor) {
  ASSERT_NO_THROW(Graph{});
}

TEST(GraphConstructors, ParameterizedConstructorSizeT) {
  size_t graph_size{10};
  ASSERT_NO_THROW(Graph(graph_size));
}

TEST(GraphConstructors, ParameterizedConstructorVector) {
  std::vector<std::vector<int>> weights =
    {{0, 1, 2, 3},
     {1, 0, 1, 6},
     {2, 1, 0, 3},
     {3, 6, 3, 0}};
  ASSERT_NO_THROW(Graph(weights));
}
