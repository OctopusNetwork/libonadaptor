rootdir := $(shell pwd)/../../..
project := ubuntu-base

include $(rootdir)/build/common/inc.mk
ifeq ($(hostmaketype), windows)
rootdir := ../../..
endif

####
##  Application targets
####
DEP_HEADERS += $(incdir)/libonadaptor

apps = libonadaptor

mt_adaptor_SRCS = $(rootdir)/libonadaptor/test/mt/main.c
mt_adaptor_ARCHIVES = libonadaptor libonbus
mt_adaptor_LDLIBS = -pthread -lm
mt_adaptor_DISTSOLIBS =

include $(rootdir)/build/utils/app.mk
