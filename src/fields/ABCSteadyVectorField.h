// Arnold-Beltrami-Childress (ABC) flow
#ifndef ABC_STEADY_VECTOR_FIELD_H
#define ABC_STEADY_VECTOR_FIELD_H

#include "archtypes/ParameterizedSteadyVectorField.h"

class ABCVectorField : public ParameterizedVectorField
{
	private:
		double a;
		double b;
		double c;
	public:
		ABCVectorField(double a, double b, double c)
		{
			this->a = a;
			this->b = b;
			this->c = c;
		}
		double getDeltaXComponentValue(double x, double y, double z);
		double getDeltaYComponentValue(double x, double y, double z);
		double getDeltaZComponentValue(double x, double y, double z);
};

#endif