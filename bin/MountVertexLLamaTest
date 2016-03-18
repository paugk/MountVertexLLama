#!/usr/bin/env python
# @(#) $Id: MountACATest.py 192600 2013-07-18 17:18:34Z rmarson $
#******************************************************************************
# ALMA - Atacama Large Millimeter Array
# (c) Associated Universities Inc., 2010
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

import sys
import unittest
import shutil
shutil.rmtree("../lib/python/site-packages", True)
import Acspy.Clients.SimpleClient
import Control

class automated(unittest.TestCase):
    def makeOperational(self):
        m = client.getComponent('CONTROL/DV02/Mount');
        if (m.getHwState() != Control.HardwareDevice.Operational):
            m.hwStop();
            m.hwStart();
            m.hwConfigure();
            m.hwInitialize();
            m.hwOperational();
        return m;
    
    def test01(self):
        '''
        This basic test just loads the component and brings it
        operational. It finds errors due to missing symbols and the
        hardware lifecycle.
        '''
        m = self.makeOperational();
        m.hwStop();
        m.hwStart();
        client.releaseComponent(m._get_name())

    def test02(self):
        '''
        This tests all functions in the IDL interface
        '''
        m = self.makeOperational();
        m.hwStop();
        m.hwStart();
        client.releaseComponent(m._get_name())

# **************************************************
# MAIN Program
if __name__ == '__main__':
    ''' Usage: MountTest <testname>
    <testname> defaults to all tests
    eg., MountTest test01 
    '''

# Just get a client. Each test starts up and shuts down the component
# to test that we can bring it up and down multiple times.
    client = Acspy.Clients.SimpleClient.PySimpleClient()

# Now run the tests
    runner = unittest.TextTestRunner()
    if len( sys.argv ) > 1:
        suite = unittest.makeSuite(automated, sys.argv[1])
    else:
        suite = unittest.makeSuite(automated)
    runner.run(suite)

