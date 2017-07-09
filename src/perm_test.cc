#include "catch.hpp"

#include "base.h"
#include "perm.h"

namespace mps {

constexpr Int n = 536870909; // Prime.

TEST_CASE("PermBasic", "") {
  Perm perm(n, 10000000, 10000000);
  REQUIRE(perm.Forward(10000000) == 287006024);
  REQUIRE(perm.Backward(287006024) == 10000000);
}

TEST_CASE("PermRandom", "") {
  Perm perm(n);
  Perm perm2(n);
  REQUIRE(perm.a() != perm2.a());
  REQUIRE(perm.b() != perm2.b());
}

}  // namespace mps