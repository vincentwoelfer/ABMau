#ifndef ABMAU_MODEL_H
#define ABMAU_MODEL_H


class Model
{
public:
	Model();
	void run_model();
	virtual void step();
	void stop();
		
protected:
	bool is_running;

};


#endif //ABMAU_MODEL_H
