#include "core.h"
#include <cassert>

namespace {
void run() {
  using gemstones::Int32;

  const int32_t a = Int32{42}.add(Int32{24}).template into<int32_t>();
  assert(a == 66);
}
} // namespace

int main() { run(); }