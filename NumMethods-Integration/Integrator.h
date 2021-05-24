#pragma once

#include <functional>
#include <math.h>


class Integrator {
public:
	double a, b;
	int n_partitions;

	Integrator(double _a, double _b, int n_p) {
		a = _a; b = _b; n_partitions = n_p; 
	}
	
	double MiddleRectangIntegral(const std::function<double(double)> &f) {
		double h = (b - a) / n_partitions;

		double rectangularIntegral = 0;
		for (int step = 0; step < n_partitions; step++) {
			double x1 = a + step * h;
			double x2 = a + (step + 1) * h;

			rectangularIntegral += h * f(0.5 * (x1 + x2));
		}
		return rectangularIntegral;
	}
	
	double TrapezoidalIntegral(const std::function<double(double)>& f) {
		 
		double h = (b - a) / n_partitions;

		double trapezoidal_integral = 0;
		for (int step = 0; step < n_partitions; step++) {
			double x1 = a + step * h;
			double x2 = a + (step + 1) * h;

			trapezoidal_integral += 0.5 * h * (f(x1) + f(x2));
		}
		return trapezoidal_integral;
	}

	double SimpsonIntegral(const std::function<double(double)>& f) {
		double h = (b - a) / n_partitions;

		double simpson_integral = 0;
		for (int step = 0; step < n_partitions; step++) {
			const double x1 = a + step * h;
			const double x2 = a + (step + 1) * h;

			simpson_integral += h / 6.0 * (f(x1) + 4.0 * f(0.5 * (x1 + x2)) + f(x2));
		}
		return simpson_integral;
	}

};

class QuadratureInt {
public:
	double alpha_param;			//параметры [0,1]
	//double eps;					//точность вычислений
	int number_of_recursions;	//сложность вычисления, кол-во вызовов функции
	double result;			//результат вычисления квадратурой

	QuadratureInt(double _alpha){
		alpha_param = _alpha;
		result = 0; number_of_recursions = 0;
	}


	void QuadratureFunc(double a, double b, double eps, double x, const std::function<double(double, double, double, double)>& methods) {
		number_of_recursions = 0;
		result = 0;
		Quadrature(a, b, eps, x, methods);
	}
	
	void Quadrature(double a, double b, double eps,double x, const std::function<double(double,double, double, double)> &methods) {
		double whole_segment = methods(a, b, x, alpha_param);
		double half_segment_1 = methods(a, (a + b) / 2.0, x, alpha_param);
		double half_segment_2 = methods((a + b) / 2.0, b, x, alpha_param);
		if (abs(half_segment_1 + half_segment_2 - whole_segment) < eps)
			result += whole_segment;
		else {
			number_of_recursions += 2;
			Quadrature(a, (a + b) / 2.0, eps / 2.0, x, methods);
			Quadrature((a + b) / 2.0, b, eps / 2.0, x, methods);
		}
	}

};