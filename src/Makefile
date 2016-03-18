# ALMA - Atacama Large Millimeter Array
# (c) European Southern Observatory, 2007 - 2008 
# (c) Associated Universities Inc., 2009 - 2011
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
# 
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA

#
# Generated Code Name
# --------------------
MODULE_NAME = MountVertexLLama

#
# user definable C-compilation flags
USER_CFLAGS =

#
# Includes (.h) files (public only)
# ---------------------------------
INCLUDES         = MountVertexLLamaHWSimImplAxis.h 
INCLUDES	+= MountVertexLLamaHWSimImplDrive.h 
INCLUDES	+= MountVertexLLamaHWSimBase.h 
INCLUDES	+= MountVertexLLamaHWSimImpl.h 
INCLUDES        += MountVertexBase.h 
#
# Libraries (public and local)
# ----------------------------
LIBRARIES       = MountVertexLLamaHWSim MountVertexLLama MountVertexLLamaCompSim MountVertexLLamaCompSimSS

MountVertexLLamaBaseStubs_LIBS = MountStubs MountVertexStubs

MountVertexLLamaStubs_LIBS  = MountVertexLLamaBaseStubs
MountVertexLLama_OBJECTS = MountVertexLLamaBase MountVertexLLamaImpl
MountVertexLLama_LIBS    = Mount MountVertex MountVertexLLamaStubs ControlExceptions 

MountVertexLLamaHWSim_OBJECTS  = MountVertexLLamaHWSimImplAxis MountVertexLLamaHWSimImplDrive 
MountVertexLLamaHWSim_OBJECTS += MountVertexLLamaHWSimBase MountVertexLLamaHWSimImpl
MountVertexLLamaHWSim_LIBS     = ambsim MountHWSim MountVertexHWSim

MountVertexLLamaCompSimBaseStubs_LIBS = MountVertexLLamaBaseStubs MountVertexLLamaStubs
MountVertexLLamaCompSim_OBJECTS = MountVertexLLamaCompSimBase MountVertexLLamaCompSimImpl2
MountVertexLLamaCompSim_LIBS    = MountVertex MountVertexHWSim MountVertexCompSimBaseStubs MountVertexLLama MountVertexLLamaHWSim MountVertexLLamaCompSimBaseStubs SimulatedSerialNumber
# Necessary to make semaphores work on RHEL5.3
MountVertexLLamaCompSim_LIBS    += pthread

MountVertexLLamaCompSimSS_OBJECTS = MountVertexLLamaCompSimBase MountVertexLLamaCompSimImplSS
MountVertexLLamaCompSimSS_LIBS    = MountVertex MountVertexHWSim MountVertexCompSimBaseStubs  MountVertexLLama MountVertexLLamaHWSim MountVertexLLamaCompSimBaseStubs SimulatedSerialNumber
# Necessary to make semaphores work on RHEL5.3
MountVertexLLamaCompSimSS_LIBS   += pthread

#
# Python stuff (public and local)
# ----------------------------
PY_PACKAGES        = CCL

#
# Configuration Database Files
# ----------------------------
CDB_SCHEMAS = MountVertexLLamaBase MountVertexLLama

# 
# IDL Files and flags
# 
IDL_FILES = MountVertexLLamaBase MountVertexLLama MountVertexLLamaCompSimBase

#
# other files to be installed
#----------------------------
INSTALL_FILES = ../config/TMCDBMountVertexLLamaAdd.xml

#
# list of all possible C-sources (used to create automatic dependencies)
# ------------------------------
CSOURCENAMES = \
	$(foreach exe, $(EXECUTABLES) $(EXECUTABLES_L), $($(exe)_OBJECTS)) \
	$(foreach rtos, $(RTAI_MODULES) , $($(rtos)_OBJECTS)) \
	$(foreach lib, $(LIBRARIES) $(LIBRARIES_L), $($(lib)_OBJECTS))

#
#>>>>> END OF standard rules

#
# INCLUDE STANDARDS
# -----------------

MAKEDIRTMP := $(shell searchFile include/acsMakefile)
ifneq ($(MAKEDIRTMP),\#error\#)
   MAKEDIR := $(MAKEDIRTMP)/include
   include $(MAKEDIR)/acsMakefile
endif

#
# Location of Control's code generation framework.
# ------------------------------------------------
GenHwLocation := $(shell searchFile lib/ControlGenHwDevice/lib/ControlGenHwDevice.jar)
ifeq ($(GenHwLocation), \#error\#)
   GenHwLocation := $(INSTALL_ROOT)
endif

GEN_CLASSPATH = $(GenHwLocation)/lib/ControlGenHwDevice/lib/ControlGenHwDevice.jar:$(GenHwLocation)/lib/ControlGenHwDevice:$(GenHwLocation)/lib/ControlGenHwDevice/config/templates:$(GenHwLocation)/lib/ControlGenHwDevice/config/workflow:$(GenHwLocation)/lib/ControlGenHwDevice/lib/antlr.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/asdmIDLTypes.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/asdmRuntime.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/commons-cli-1.0.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/commons-lang-2.1.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/commons-logging.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/log4j-1.2.8.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/maciSchemaBindings.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/oaw411.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/oaw411beta.jar:$(GenHwLocation)/lib/ControlGenHwDevice/lib/ojdbc14.jar

DEVICE_NAME=MountVertexLLama

# List of generated files and directories.
GEN_LIST := ../doc/$(DEVICE_NAME)* \
	    ../config/CDB/schemas/$(DEVICE_NAME)Base.xsd \
	    ../idl/$(DEVICE_NAME)Base.idl \
	    ../idl/$(DEVICE_NAME)CompSimBase.idl \
	    ../idl/$(DEVICE_NAME)Add.sql \
	    ../include/$(DEVICE_NAME)Base.h \
	    ../include/$(DEVICE_NAME)IfBase.h \
	    ../include/$(DEVICE_NAME)CompSimBase.h \
	    ../include/$(DEVICE_NAME)HWSimBase.h \
	    ../test/Test$(DEVICE_NAME)HWSimImpl.cpp \
	    CCL/$(DEVICE_NAME)Base.py \
	    $(DEVICE_NAME)CompSimBase.cpp \
	    $(DEVICE_NAME)HWSimBase.cpp \
	    $(DEVICE_NAME)IfBase.cpp \
	    $(DEVICE_NAME)Base.cpp
GEN_LIST += alma/Control/device/gui/$(MODULE_NAME)/$(MODULE_NAME)ControlPointPresentationModel.java
GEN_LIST += alma/Control/device/gui/$(MODULE_NAME)/$(MODULE_NAME)ControlPoints.java
GEN_LIST += alma/Control/device/gui/$(MODULE_NAME)/$(MODULE_NAME)MonitorPointPresentationModel.java
GEN_LIST += alma/Control/device/gui/$(MODULE_NAME)/$(MODULE_NAME)MonitorPoints.java
GEN_LIST += alma/Control/device/gui/$(MODULE_NAME)/$(MODULE_NAME)Panel.java

#
# TARGETS
# -------
all:	gen compile
	@echo " . . . 'all' done" 

compile: do_all
	@echo " . . . 'Compile' done"

clean_gen:
	$(RM) $(GEN_LIST)

clean : clean_gen clean_all 
	@rm -rf $(GEN_LIST)
	@echo " . . . clean done"

clean_dist : clean_all clean_dist_all 
	@echo " . . . clean_dist done"

man   : do_man 
	@echo " . . . man page(s) done"

install : install_all
	@echo " . . . installation done"

gen	: 
	@echo Generating $(DEVICE_NAME)
	java -classpath $(GEN_CLASSPATH) alma.buildtime.gen.LinuxGen $(DEVICE_NAME)
	@echo " . . . code generation done"
