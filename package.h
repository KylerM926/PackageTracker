#pragma once
#ifndef PACKAGE_H
#define PACKAGE_H

void enter_packages(double* weights, int size);
void display_packages(const double* weights, int size);
double calculate_total(const double* weights, int size);
double find_heaviest(const double* weights, int size);

#endif
