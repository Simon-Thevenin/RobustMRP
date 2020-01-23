#pragma once
#include "Data.h"

class GRASP
{
	Data* data;

	public:
		GRASP(void);
		~GRASP(void);
		double*** translateLeadTime(int** L);
		int** generateLeadTime();
		bool CheckLeadTimeInBudget(int** L);
};

