#pragma once
#define _USE_MATH_DEFINES
#include <functional>
#include <math.h>

namespace utils
{
	typedef const std::function<double(double,double,double)> func;
	
	double f_x(double x) {
		return sin(x) * cos(2 * x);
	}

	double f_x_oscil_cos10(double x) {
		return sin(x) * cos(2 * x) + cos(10 * x);
	}

	double f_x_oscil_cos100(double x) {
		return sin(x) * cos(2 * x) + cos(100 * x);
	}

	double f_t_x(double t, double x, double alpha) {
		double A[14], B[14]; //независимые коэффициенты в отрезке [-1,1]
		for (int i = 0; i < 14; i++) {
			A[i] = -1 + double(i) / 14;
			B[i] = double(i) / 14;
		}
		double sum = 0;
		for (int i = 1; i <= 14; i++) {
			sum += A[i - 1] * sin(2 * M_PI * i * (alpha - x) * t) + B[i - 1] * cos(2 * M_PI * i * (alpha - x) * t);
		}
		return sum;
	}
	
	double QuadMiddleRectangIntegral(double a, double b,double x, double alpha) {
		return (b - a) * f_t_x(0.5 * (a + b),x,alpha);
	}

	double QuadTrapezoidalIntegral(double a, double b, double x, double alpha) {
		return 0.5 * (b - a) * (f_t_x(a,x,alpha) + f_t_x(b,x, alpha));
	}

	double QuadSimpsonIntegral(double a, double b, double x, double alpha) {
		return (b - a) / 6.0 * (f_t_x(a,x, alpha) + 4.0 * f_t_x(0.5 * (a + b),x, alpha) + f_t_x(b,x, alpha));
	}


}
