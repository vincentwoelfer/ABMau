#include <cstdio>
#include "Model.h"

Model::Model() {
	// TODO: set seed for random; is_running, scheduler and current_id

	is_running = true;

}

void Model::run_model() {
	while(is_running) {
		step();
	}
}

void Model::stop() {
	is_running = false;
}

void Model::step() {
	printf("Warning: Model step function is not defined!");
}

