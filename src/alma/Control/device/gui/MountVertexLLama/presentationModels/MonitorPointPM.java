
/* ALMA - Atacama Large Millimeter Array
 * (c) Associated Universities Inc., 2008 
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
 *
 * WARNING! DO NOT MODIFY THIS FILE!
 *  -------------------------------------------------------------
 * | This is generated code!  Do not modify this file.           |
 * | Any changes will be lost when the file is re-generated.     |
 * | CONTROL/Common/GenHwDevice/config/templates/amb/GUIMonitorPointPMDotJava.xpt |
 *  -------------------------------------------------------------
 */

package alma.Control.device.gui.MountVertexLLama.presentationModels;

import alma.Control.MountVertexLLamaBaseOperations;
import alma.Control.device.gui.common.DevicePresentationModel;
import alma.Control.device.gui.common.IMonitorPoint;
import alma.Control.device.gui.common.IcdMonitorPointPresentationModel;
import alma.common.log.ExcLog;

import java.util.logging.Logger;

import org.omg.CORBA.LongHolder;

/**
 * @author  Scott Rankin  srankin@nrao.edu   
 * @since   ALMA 5.0.3
 */

public class MonitorPointPM<T> extends IcdMonitorPointPresentationModel<T> {
    
    public MonitorPointPM(
        Logger logger, 
        DevicePresentationModel containingDevicePM, 
        IMonitorPoint monitorPoint
    ) {
        super(logger, containingDevicePM, monitorPoint);
    }

    protected void setUpdateMethod() {
        try {
            this.monitorPointUpdateMethod = MountVertexLLamaBaseOperations.class.getMethod(
                monitorPointUpdateMethodName, new Class[] { LongHolder.class }
            );
            if (this.monitorPointUpdateMethod == null)
                logger.severe(
                    "MonitorPointPM.setUpdateMethod() - failed to get monitorPointUpdateMethod for method named: " +
                    monitorPointUpdateMethodName
                );
        } catch (SecurityException e) {
            logger.severe(
                "MonitorPointPM.setUpdateMethod() - no access rights for method named: " + 
                monitorPointUpdateMethodName +
                ExcLog.details(e)
            );
        } catch (NoSuchMethodException e) {
            logger.severe(
                "MonitorPointPM.setUpdateMethod() - no method found named: " + 
                monitorPointUpdateMethodName +
                ExcLog.details(e)
            );
        }
    }
}

//
// O_o
        
