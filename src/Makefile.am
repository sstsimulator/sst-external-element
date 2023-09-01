# AM_CPPFLAGS += \
# 	$(MPI_CPPFLAGS) \
# 	-I$(top_srcdir)/src

compdir = $(pkglibdir)
comp_LTLIBRARIES = libsimpleExternalElement.la

# SIMPLEEXTERNALELEMENT_SRC_FILES = \
# 	simpleExternalElement.cc \
# 	simpleExternalElement.h

# EXTRA_DIST =

libsimpleExternalElement_la_SOURCES = \
	simpleExternalElement.cc \
	simpleExternalElement.h

install-exec-hook:
	$(SST_REGISTER_TOOL) simpleExternalElement  simpleExternalElement_LIBDIR=$(abs_srcdir)
	$(SST_REGISTER_TOOL) SST_ELEMENT_SOURCE     simpleExternalElement=$(abs_srcdir)
	$(SST_REGISTER_TOOL) SST_ELEMENT_TESTS      simpleExternalElement=$(abs_srcdir)/tests
