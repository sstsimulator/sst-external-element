
CXX=$(shell sst-config --CXX)
CXXFLAGS=$(shell sst-config --ELEMENT_CXXFLAGS)
LDFLAGS=$(shell sst-config --ELEMENT_LDFLAGS)

all: libsimpleExternalElement.so install

libsimpleExternalElement.so: simpleExternalElement.cc
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $<

install:
	echo "Installing simpleExternalElement into the SST registry..."
	sst-register simpleExternalElement simpleExternalElement_LIBDIR=$(CURDIR)

clean:
	rm *.o libsimpleExternalElement.so
