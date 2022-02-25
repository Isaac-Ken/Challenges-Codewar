#Initial
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
  return round(a*100) == round(b*100);
}

#Simple sol
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
  return abs(a - b) < 0.001;
}

#Complex sol
#include <cmath>
using namespace std;

bool approx_equals (double a, double b, double rel_tol=1e-09, double abs_tol=0.001){
    return abs(a-b) <= max(rel_tol * max(abs(a), abs(b)), abs_tol);
  }
