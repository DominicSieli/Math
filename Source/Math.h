#pragma once

namespace Math
{
	template <typename T>
	inline T Power(T base, T exponent)
	{
		T power = 1;

		for (unsigned int i = 0; i < exponent; i++)
		{
			power *= base;
		}

		return power;
	}

	unsigned long long Factorial(unsigned int n)
	{
		if (n > 1)
		{
			return n * Factorial(n - 1);
		}
		else
		{
			return 1;
		}
	}

	template <typename T>
	inline T Logarithm(T base, T power)
	{
		T exponent = 0;

		while (Power(base, exponent) < power)
		{
			exponent++;
		}

		return exponent;
	}

	inline unsigned int Summation(unsigned int indexStart, unsigned int indexStop, int exponent = 1)
	{
		unsigned int sum = 0;

		for (unsigned int index = indexStart; index < indexStop + 1; index++)
		{
			sum += Power<unsigned int>(index, exponent);
		}

		return sum;
	}
}