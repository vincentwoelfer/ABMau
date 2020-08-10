#ifndef ABMAU_AGENT_H
#define ABMAU_AGENT_H

#include "Pos.h"

class Model;

class Agent
{
private:
	static int id_counter;

public:	
	Agent(Model* model);
	virtual void step();
	
protected:
	int id;
	Model* model;
	Pos pos;
	
};


#endif //ABMAU_AGENT_H
