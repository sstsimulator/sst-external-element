
#include <sst/core/sst_config.h>
#include "simpleExternalElement.h"

SimpleExternalElement::SimpleExternalElement( SST::ComponentId_t id, SST::Params& params ) :
	repeats(0) {

	printFreq  = params.find<SST::Cycle_t>("printFrequency", 5);
	maxRepeats = params.find<SST::Cycle_t>("repeats", 10);

	if( ! (printFreq > 0) ) {
		output.fatal(CALL_INFO, -1, "Error: printFrequency must be greater than zero.\n");
	}
}

SimpleExternalElement::~SimpleExternalElement() {

}

void SimpleExternalElement::setup() {
	printf("Component is being setup.\n");
}

void SimpleExternalElement::finish() {
	printf("Component is finished.\n");
}

bool SimpleExternalElement::clockTick( SST::Cycle_t currentCycle ) {

	if( currentCycle % printFreq == 0 ) {
		output.verbose(CALL_INFO, 1, 0, "Hello World!\n");
		repeats++;
	}

	if( repeats == maxRepeats ) {
		return true;
	} else {
		return false;
	}
}
