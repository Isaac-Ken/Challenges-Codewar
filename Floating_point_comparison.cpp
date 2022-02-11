#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
  return round(a*100) == round(b*100);
}
