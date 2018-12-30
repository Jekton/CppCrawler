
#include "slice.h"

#include "gtest/gtest.h"

using namespace jekton;

TEST(SLICE_TEST, default_ctor) {
  jekton::Slice s;
}
TEST(SLICE_TEST, default_slice) {
  jekton::Slice s;
  ASSERT_EQ(s.size(), 0);
}
