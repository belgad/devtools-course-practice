// Copyright 2022 Gleb "belgad" Danshin

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(DanshinGlebComplexNumberTest, DefaultConstructor) {
  ASSERT_NO_THROW(ComplexNumber());
}

TEST(DanshinGlebComplexNumberTest, ParameterizedConstructor) {
  ASSERT_NO_THROW(ComplexNumber(1.0, 2.0));
}

TEST(DanshinGlebComplexNumberTest, CopyConstructor) {
  auto origin = ComplexNumber();
  ASSERT_NO_THROW(ComplexNumber(number_1));
}
