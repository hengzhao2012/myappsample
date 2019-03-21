
#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

int main(int argc, const char * argv[]) {

	MatrixXd m(2, 2);
	
	//add new module 
	m(0, 0) = 3;
	m(1, 0) = 2.5;
	m(0, 1) = -1;
	m(1, 1) = m(1, 0) + m(0, 1);
	std::cout << m << std::endl;
            

	int nothing = 0;
	return 0;
}
