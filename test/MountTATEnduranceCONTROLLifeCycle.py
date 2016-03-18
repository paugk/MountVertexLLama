#!/usr/bin/env python
#*******************************************************************************
# ALMA - Atacama Large Millimiter Array
# (c) Associated Universities Inc., 2002 
# (c) European Southern Observatory, 2002
# Copyright by ESO (in the framework of the ALMA collaboration)
# and Cosylab 2002, All rights reserved
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
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, 
# MA 02111-1307  USA
#
# @(#) $Id: MountTATEnduranceCONTROLLifeCycle.py 192598 2013-07-18 16:45:07Z rmarson $
#------------------------------------------------------------------------------

'''
Mount component CONTROL life cycle test.
'''
import unittest
from PyUCommonTestCases import *
import Control

class TestCase(PyUCommonTestCase):
    def __init__(self, methodName='runTest'):
        self.name = None
        PyUCommonTestCase.__init__(self,methodName,self.name)

    def test_CONTROLLifeCycle(self):
        # No parent
        self.check_CONTROLLifeCycle("CONTROL/Mount",100)

        # HW Controller parent
        mount_config = Control.DeviceConfig("Mount",
                                                  [])
        hwc_config = Control.DeviceConfig("TEST_HWCONTROLLER",
                                                   [mount_config])
        self.configuration = hwc_config
	self.verbose=1
        self.check_CONTROLLifeCycle("CONTROL/TEST_HWCONTROLLER",100)
        
if __name__ == '__main__':
    unittest.main()            
