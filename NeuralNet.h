#ifndef NEURALNET_H
#define NEURALNET_H


#include <string> 
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>

#define DEBUG 0

class NeuralNet
{
	private:
		void RandomizeWeights();

		inline double transformfunc(double x);

	public:
		NeuralNet();
		~NeuralNet();
		void LoadWeights(std::string filename);

};

#endif //NEURALNET_H