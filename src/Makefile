
CXX=$(shell sst-config --CXX)
CXXFLAGS=$(shell sst-config --ELEMENT_CXXFLAGS)
LDFLAGS=$(shell sst-config --ELEMENT_LDFLAGS)

all: libsimpleExternalElement.so install

libsimpleExternalElement.so: simpleExternalElement.cc
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $<

install:
	sst-register simpleExternalElement simpleExternalElement_LIBDIR=$(CURDIR)
	sst-register SST_ELEMENT_SOURCE simpleExternalElement=$(CURDIR)
	sst-register SST_ELEMENT_TESTS  simpleExternalElement=$(CURDIR)/../tests

clean:
	rm -f *.o libsimpleExternalElement.so
