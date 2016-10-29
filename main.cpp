#define EIGEN_USE_MKL_ALL
// #define EIGEN_VECTORIZE_SSE4_2

#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <time.h>

using namespace std;
using namespace Eigen;

// use Eigen+Intel MKL
int main(int argc, char *argv[])
{
    MatrixXd a = MatrixXd::Random(3000, 3000);  // random init matrix
    MatrixXd b = MatrixXd::Random(3000, 3000);

    double start = clock();
    MatrixXd c = a * b;
    double endd = clock();
    double thisTime = (double)(endd - start) / CLOCKS_PER_SEC;

    cout << thisTime << endl;

    std::cin.get();
    return 0;
}
