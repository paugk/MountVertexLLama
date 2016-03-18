
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
 *  ---------------------------------------------------------
 * | This is generated code!  Do not modify this file.       |
 * | Any changes will be lost when the file is re-generated. |
 * | CONTROL/Common/GenHwDevice/config/templates/amb/GUIControlPointsDotJava.xpt |
 *  ---------------------------------------------------------
 */

package alma.Control.device.gui.MountVertexLLama;

import alma.Control.device.gui.common.IControlPoint;

/**
 * List all Control Points implemented in this device.
 *
 * See IControlPoint for docs.
 * 
 * @author  Scott Rankin  srankin@nrao.edu
 * @since   ALMA 5.0.3
 */
 
public enum IcdControlPoints implements IControlPoint {


  
    
        
    SUBREF_DELTA_ROT(
            
                
        int[].class, 3,
                
            
        "operational"
            
                
            
            
        , "degree"
            
    ),
        
    
  

  
    
  

  
    
        
    SELFTEST_STOP(
             
        "operational"
            
            
    ),
        
    
  

    ;

    public int getArrayLength() {
        return arrayLength;
    }

    public String getOperatingMode() {
        return operatingMode;
    }
    
    public Double getRangeLowerBound() {
        return rangeLowerBound;
    }
    
    public Double getRangeUpperBound() {
        return rangeUpperBound;
    }
    
    public Class getTypeClass() {
        return typeClass;
    }
    
    public String getUnits() {
        return units;
    }
    
    public boolean supportsRangeChecking() {
        return ((null != rangeLowerBound) && (null != rangeUpperBound));
    }
    
    public boolean supportsUnits() {
        return (!units.equals(""));
    }

    private IcdControlPoints (
        Class typeClass, 
        String operatingMode,
        double rangeLowerBound, 
        double rangeUpperBound 
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = 1;
        this.rangeLowerBound = rangeLowerBound;
        this.rangeUpperBound = rangeUpperBound;
        this.units = "";
    }
    
    private IcdControlPoints (
        Class typeClass, 
        int arrayLength,
        String operatingMode,
        int rangeLowerBound, 
        int rangeUpperBound
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = arrayLength;
        this.rangeLowerBound = (double)rangeLowerBound;
        this.rangeUpperBound = (double)rangeUpperBound;
        this.units = "";
    }
    
    private IcdControlPoints (
        Class typeClass, 
        int arrayLength,
        String operatingMode,
        double rangeLowerBound, 
        double rangeUpperBound,
        String units
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = arrayLength;
        this.rangeLowerBound = rangeLowerBound;
        this.rangeUpperBound = rangeUpperBound;
        this.units = units;
    }
    
    //
    // Working around code generation framework's tendancy to changes "0.0" to 0.
    private IcdControlPoints (
        Class typeClass, 
        int arrayLength,
        String operatingMode,
        int rangeLowerBound, 
        double rangeUpperBound,
        String units
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = arrayLength;
        this.rangeLowerBound = (double)rangeLowerBound;
        this.rangeUpperBound = rangeUpperBound;
        this.units = units;
    }
    
    private IcdControlPoints (
        Class typeClass, 
        String operatingMode,
        double rangeLowerBound, 
        double rangeUpperBound,
        String units
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = 1;
        this.rangeLowerBound = rangeLowerBound;
        this.rangeUpperBound = rangeUpperBound;
        this.units = units;
    }
    
    private IcdControlPoints (
        Class typeClass, 
        String operatingMode
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = 1;
        this.rangeLowerBound = null;
        this.rangeUpperBound = null;
        this.units = "";
    }
    
    private IcdControlPoints (
        Class typeClass, 
        int arrayLength,
        String operatingMode
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = arrayLength;
        this.rangeLowerBound = null;
        this.rangeUpperBound = null;
        this.units = "";
    }
    
    private IcdControlPoints (
        Class typeClass, 
        String operatingMode,
        String units
    ) {
        this.typeClass = typeClass;
        this.operatingMode = operatingMode;
        this.arrayLength = 1;
        this.rangeLowerBound = null;
        this.rangeUpperBound = null;
        this.units = units;
    }
    
    private IcdControlPoints (
        String operatingMode
    ) {
        this.typeClass = null;
        this.operatingMode = operatingMode;
        this.arrayLength = 0;
        this.rangeLowerBound = null;
        this.rangeUpperBound = null;
        this.units = "";
    }
    
    private final int arrayLength;
    private final String operatingMode;
    // Doubles are used below to prevent loss of precision.
    private final Double rangeLowerBound;    
    private final Double rangeUpperBound;
    private final Class typeClass;
    private final String units;    
}

//
// O_o
        
