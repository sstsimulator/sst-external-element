
#ifndef _SIMPLE_EXTERNAL_ELEMENT_H
#define _SIMPLE_EXTERNAL_ELEMENT_H

#include <sst/core/component.h>
#include <sst/core/elementinfo.h>

class SimpleExternalElement : public SST::Component {

public:
	SimpleExternalElement( SST::ComponentId_t id, SST::Params& params );
	~SimpleExternalElement();

	void setup();
	void finish();

	bool clockTick( SST::Cycle_t currentCycle );

	SST_ELI_REGISTER_COMPONENT(
		SimpleExternalElement,
		"simpleExternalElement",
		"SimpleExternalElement",
		"Demonstration of an External Element for SST",
		COMPONENT_CATEGORY_PROCESSOR
	)

	SST_ELI_DOCUMENT_VERSION( 1, 0, 0 )

	SST_ELI_DOCUMENT_PARAMS(
		{ "printFrequency", "How frequently to print a message from the component", "5" },
		{ "repeats", "Number of repetitions to make", "10" }
	)

	SST_ELI_DOCUMENT_STATISTICS( )
	SST_ELI_DOCUMENT_PORTS( )
	SST_ELI_DOCUMENT_SUBCOMPONENT_SLOTS( )

private:
	SST::Output output;
	SST::Cycle_t printFreq;
	SST::Cycle_t maxRepeats;
	SST::Cycle_t repeats;

};


#endif
