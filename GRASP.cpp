#include "../../OneDrive/Documents/UncertainLT/UncertainLT/stdafx.h"
#include "GRASP.h"
#include <stdlib.h>

GRASP::GRASP(void)
{
}


GRASP::GRASP(Data* d)
{
	this->data = d;
}


GRASP::~GRASP(void)
{
}


double*** GRASP::translateLeadTime(int** L)
{
	

}


int** GRASP::generateLeadTime()
{
	int** LT = new int*[this->data->NPer()]; 
	 for(int t=1; t<data->getNPer()+1; t++)
	{
		
			for(int s=1; s<=data->getNSup(); s++)
			{
				LT[t][s] = rand()+;
		    }
	 }

}


bool GRASP::CheckLeadTimeInBudget(int** L)
{


}