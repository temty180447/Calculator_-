#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

void sQuadratic(double a, double b, double c) {
    double dcmn = b * b - 4 * a * c;
    if (dcmn > 0) {
        double x1 = (-b + sqrt(dcmn)) / (2 * a);
        double x2 = (-b - sqrt(dcmn)) / (2 * a);
        cout << "roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (dcmn == 0) {
        double x = -b / (2 * a);
        cout << "Repeated root: x = " << x << endl;
    } else {
        cout << "No roots" << endl;
    }
}

void sCubic(double a, double b, double c, double d) {
    double q = (3 * a * c - b * b) / (9 * a * a);
    double r = (9 * a * b * c - 27 * a * a * d - 2 * b * b * b) / (54 * a * a * a);
    double dcmn = q * q * q + r * r;

    if (dcmn> 0) {
        double s = cbrt(r + sqrt(dcmn));
        double t = cbrt(r - sqrt(dcmn));
        double x1 = -b / (3 * a) + (s + t);
        cout << "root: x = " << x1 << endl;
    } else if (dcmn == 0) {
        double x1 = -b / (3 * a) - 2 * cbrt(r);
        double x2 = -b / (3 * a) + cbrt(r);
        cout << "Repeated root: x1 = x2 = " << x1 << endl;
        cout << "Root: x3 = " << x2 << endl;
    } else {
        double theta = acos(r / sqrt(-(q * q * q)));
        double x1 = -2 * sqrt(q) * cos(theta / 3) - b / (3 * a);
        double x2 = -2 * sqrt(q) * cos((theta + 2 * M_PI) / 3) - b / (3 * a);
        double x3 = -2 * sqrt(q) * cos((theta - 2 * M_PI) / 3) - b / (3 * a);
        cout << "Root: x1 = " << x1 << endl;
        cout << "Root: x2 = " << x2 << endl;
        cout << "Root: x3 = " << x3 << endl;
    }
}

void sLinear(double a, double b) {
    if (a == 0) {
        if (b == 0) {
            cout << "Infinite solutions" << endl; 
        } else {
            cout << "No solution" << endl;
        }
    } else {
        double x = -b / a;
        cout << "Solution: x = " << x << endl;
    }
}

    double a, b, c, d;
        //(ax^3 + bx^2 + cx + d)
            sCubic(a, b, c, d);

        //(ax^2 + bx + c)
            sQuadratic(a, b, c)

        //(ax + b)
            sLinear(a, b);
