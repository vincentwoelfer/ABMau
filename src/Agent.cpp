#include <cstdio>
#include "Agent.h"

int Agent::id_counter = 0;

Agent::Agent(Model* model) :
		id(id_counter++),
		model(model),
		pos()
{

}

void Agent::step() {
	printf("Warning: Agent step function is not defined!");

}

