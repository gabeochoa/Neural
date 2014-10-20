#include "NeuralNet.h"

NeuralNet::NeuralNet()
{
	//Constructor


	//create input list
	//create weight list
	//create output list

	//initialize weights
	RandomizeWeights();
}

NeuralNet::~NeuralNet()
{
	//Deconstructor

	//delete input list
	//delete weight list
	//delete output list
}

void NeuralNet::LoadWeights(std::string filename)
{
	std::ifstream wfile(filename);
	std::vector<std::string> v;
	for(std::string line = ""; std::getline(wfile, line); line.erase())
	{
		v.push_back(line);
	}
}

void NeuralNet::RandomizeWeights()
{

}

inline double NeuralNet::transformfunc(double x)
{
	return 1/(1+exp(-x));
}