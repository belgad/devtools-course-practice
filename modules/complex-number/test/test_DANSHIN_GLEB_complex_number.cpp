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

TEST(DanshinGlebComplexNumberTest, AssignmentOperator) {
  auto origin = ComplexNumber(1.0, 2.0);
  auto copy = ComplexNumber();
  ASSERT_NO_THROW(copy = origin);
}

TEST(DanshinGlebComplexNumberTest, EqualityOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(1.0, 2.0);
  ASSERT_EQ(first, second);
}

TEST(DanshinGlebComplexNumberTest, CopyEqualsToOrigin) {
  auto origin = ComplexNumber(1.0, 2.0);
  auto copy = origin;
  ASSERT_EQ(origin, copy);
}

TEST(DanshinGlebComplexNumberTest, InequalityOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(3.0, 4.0);
  ASSERT_NE(first, second);
}
