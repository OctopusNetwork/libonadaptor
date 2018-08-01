rootdir := $(shell pwd)/../../..
project := ubuntu-base

include $(rootdir)/build/common/inc.mk
ifeq ($(hostmaketype), windows)
rootdir := ../../..
endif

TARGETSPEC = libonadaptor
TARGET_LIB = libonadaptor.$(staticlibsuffix)
MODULE = libonadaptor
MODULEVERSION = 0.0.1

include ../source.mk
include $(rootdir)/build/utils/archive.$(hostmaketype).mk
