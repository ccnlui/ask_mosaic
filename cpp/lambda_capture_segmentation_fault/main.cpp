#include <cstdio>
#include <stdexcept>

struct Event {
  double x;
};

template <typename T> struct Worker {
  Worker(const T &publish) : publish{publish} {}

  void observe(const Event &) { publish(); }

private:
  const T &publish;
};

int main() {
  int count{};
  Worker worker{[&count]() { count++; }};
  worker.observe(Event{100L});
  printf("count: %d\n", count);
}
