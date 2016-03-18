SET SERVEROUTPUT ON;

DECLARE
    compTypeId componenttype.componenttypeid%TYPE:=0;
    lruNameCount NUMBER;
    componentTypeIdCount NUMBER;
    assemblyNameCount NUMBER;
    defaultComponentCount NUMBER;
    defaultBACIPropertyCount NUMBER;
    defCompId NUMBER;
    defaultBACIPropId NUMBER;
    defaultMonPointId NUMBER;
    monitorPropCount NUMBER;
    indice NUMBER;

BEGIN
dbms_output.put_line('Transaction BEGIN');

SELECT COUNT(lruName) INTO lruNameCount FROM lruType WHERE lruName='MountVertexLLama';
IF lruNameCount=0 THEN
dbms_output.put_line('Inserting LRU');
INSERT INTO LRUType VALUES (
    'MountVertexLLama',
    'Antenna Control Unit',
    'ICD-1014043-31430-01-01_ABM-ACU_r1-0',
    '4927996800000000000',
    'The purpose of this document is to define the interface between the mount component running in an ABM and the ACU. The ICD provides the interface definitions for all monitor and control points accepted by the ACU as part of the low level functionality which is identified at present for the control of the antenna.',
    ''
);
ELSE
    dbms_output.put_line('LRU already exists... continue');
END IF;

SELECT COUNT(componentTypeId) INTO componentTypeIdCount FROM componentType WHERE idl='IDL:alma/Control/MountVertexLLama:1.0';
IF componentTypeIdCount=0 THEN
    dbms_output.put_line('Inserting component type IDL:alma/Control/MountVertexLLama:1.0');
    INSERT INTO componentType VALUES (
        ComponT_seq.NextVal,
        'IDL:alma/Control/MountVertexLLama:1.0'
    );

ELSE 
    dbms_output.put_line('Component type IDL:alma/Control/MountVertexLLama:1.0 already exists... continue');
END IF;
SELECT componenttypeid INTO compTypeId FROM componentType WHERE idl='IDL:alma/Control/MountVertexLLama:1.0';

SELECT count(assemblytypename) INTO assemblyNameCount FROM assemblytype WHERE assemblytypename='MountVertexLLama';
IF assemblyNameCount=0 THEN
    dbms_output.put_line('Inserting assembly type MountVertexLLama');
    INSERT INTO AssemblyType (
        ASSEMBLYTYPENAME,
        BASEELEMENTTYPE,
        LRUNAME,
        FULLNAME,
        DESCRIPTION,
        NOTES,
        COMPONENTTYPEID,
	PRODUCTIONCODE,
	SIMULATEDCODE)
    VALUES (
        'MountVertexLLama', 
        'Antenna',
        'MountVertexLLama', 
        'Antenna Control Unit', 
        'The purpose of this document is to define the interface between the mount component running in an ABM and the ACU. The ICD provides the interface definitions for all monitor and control points accepted by the ACU as part of the low level functionality which is identified at present for the control of the antenna.', 
        '',
        compTypeId,
        'MountVertexLLamaImpl',
        'MountVertexLLamaCompSimImpl'
    );
ELSE
    dbms_output.put_line('Assembly type MountVertexLLama already exists... continue');
END IF;

SELECT count(defaultcomponentid) INTO defaultComponentCount FROM defaultComponent WHERE assemblytypename='MountVertexLLama';
IF defaultComponentCount=0 THEN
    dbms_output.put_line('Inserting default component MountVertexLLama');
    SELECT MAX(defaultcomponentid) INTO defCompId FROM defaultComponent;
    defCompId:=COALESCE(defCompId,0)+1;
    INSERT INTO DefaultComponent VALUES (
        defCompId,
        compTypeId, 
        'MountVertexLLama', 
        'cpp', 
        '1',
        'MountVertexLLamaImpl.cpp',
        'MountVertexLLamaImpl.cpp',
        '0',
        '0',
        '0',
        '5',
        '4',
        '4',
        ''
    );
ELSE
    SELECT defaultcomponentid INTO defCompId FROM defaultcomponent WHERE assemblytypename='MountVertexLLama';

    dbms_output.put_line('Default component MountVertexLLama already exists... continue');

END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_DISP' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_DELTAS_DISP');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_DELTAS_DISP',
                        'Get AZ and EL delta correction applied by the metrology system based on the readout of the sensors at the El encoder mounts',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_DELTAS_DISP already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_DISP' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_DELTAS_DISP',
                            '0',
                            'integer',
                            '0x7010',
                            '0',  
                            'int32',
                            'int',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get AZ and EL delta correction applied by the metrology system based on the readout of the sensors at the El encoder mounts'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_DELTAS_DISP. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_SPEM' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_DELTAS_SPEM');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_DELTAS_SPEM',
                        'Get AZ and EL delta correction applied by the metrology system based on the systematic error model',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_DELTAS_SPEM already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_SPEM' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_DELTAS_SPEM',
                            '0',
                            'integer',
                            '0x7011',
                            '0',  
                            'int32',
                            'int',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get AZ and EL delta correction applied by the metrology system based on the systematic error model'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_DELTAS_SPEM. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_TILT' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_DELTAS_TILT');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_DELTAS_TILT',
                        'Get AZ and EL delta correction applied by the metrology system based on the readout of the tiltmeters',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_DELTAS_TILT already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_TILT' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_DELTAS_TILT',
                            '0',
                            'integer',
                            '0x7012',
                            '0',  
                            'int32',
                            'int',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get AZ and EL delta correction applied by the metrology system based on the readout of the tiltmeters'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_DELTAS_TILT. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_TILTTEMP' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_DELTAS_TILTTEMP');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_DELTAS_TILTTEMP',
                        'Get AZ and EL delta correction applied by the metrology system based on the model for temperature compensation of the tiltmeter offset (?tilt offset model?)',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_DELTAS_TILTTEMP already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_DELTAS_TILTTEMP' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_DELTAS_TILTTEMP',
                            '0',
                            'integer',
                            '0x7013',
                            '0',  
                            'int32',
                            'int',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get AZ and EL delta correction applied by the metrology system based on the model for temperature compensation of the tiltmeter offset (?tilt offset model?)'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_DELTAS_TILTTEMP. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_19' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_TEMPS_19');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_TEMPS_19',
                        'Get value of metrology temperature sensor pack 19',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_TEMPS_19 already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_19' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_TEMPS_19',
                            '0',
                            'integer',
                            '0x4019',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get value of metrology temperature sensor pack 19'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_TEMPS_19. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1A' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_TEMPS_1A');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_TEMPS_1A',
                        'Get value of metrology temperature sensor pack 1A',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_TEMPS_1A already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1A' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_TEMPS_1A',
                            '0',
                            'integer',
                            '0x4020',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get value of metrology temperature sensor pack 1A'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_TEMPS_1A. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1B' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_TEMPS_1B');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_TEMPS_1B',
                        'Get value of metrology temperature sensor pack 1B',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_TEMPS_1B already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1B' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_TEMPS_1B',
                            '0',
                            'integer',
                            '0x4021',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get value of metrology temperature sensor pack 1B'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_TEMPS_1B. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1C' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_TEMPS_1C');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_TEMPS_1C',
                        'Get value of metrology temperature sensor pack 1C',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_TEMPS_1C already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1C' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_TEMPS_1C',
                            '0',
                            'integer',
                            '0x4022',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get value of metrology temperature sensor pack 1C'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_TEMPS_1C. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1D' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_TEMPS_1D');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_TEMPS_1D',
                        'Get value of metrology temperature sensor pack 1D',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_TEMPS_1D already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1D' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_TEMPS_1D',
                            '0',
                            'integer',
                            '0x4023',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get value of metrology temperature sensor pack 1D'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_TEMPS_1D. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1E' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_TEMPS_1E');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_TEMPS_1E',
                        'Get value of metrology temperature sensor pack 1E',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_TEMPS_1E already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1E' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_TEMPS_1E',
                            '0',
                            'integer',
                            '0x4024',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get value of metrology temperature sensor pack 1E'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_TEMPS_1E. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1F' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property METR_TEMPS_1F');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'METR_TEMPS_1F',
                        'Get value of metrology temperature sensor pack 1F',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property METR_TEMPS_1F already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='METR_TEMPS_1F' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'METR_TEMPS_1F',
                            '0',
                            'integer',
                            '0x4025',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Get value of metrology temperature sensor pack 1F'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property METR_TEMPS_1F. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='SUBREF_DELTA_ROT' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property SUBREF_DELTA_ROT');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'SUBREF_DELTA_ROT',
                        'Subreflector rotation delta position.',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property SUBREF_DELTA_ROT already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='SUBREF_DELTA_ROT' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'SUBREF_DELTA_ROT',
                            '0',
                            'integer',
                            '0x0026',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Subreflector rotation delta position.'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property SUBREF_DELTA_ROT. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='OTHER_STATUS' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property OTHER_STATUS');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'OTHER_STATUS',
                        'Cabin and auxiliary status information. Conditions may be Fault conditions (F) or Status information (S). Each condition is marked below; fault conditions require the use of the CLEAR_FAULT_CMD to clear, while status information will clear when the hardware condition is cleared.',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property OTHER_STATUS already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='OTHER_STATUS' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'OTHER_STATUS',
                            '0',
                            'integer',
                            '0x8003a',
                            '0',  
                            'ubyte',
                            'unsigned char',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'Cabin and auxiliary status information. Conditions may be Fault conditions (F) or Status information (S). Each condition is marked below; fault conditions require the use of the CLEAR_FAULT_CMD to clear, while status information will clear when the hardware condition is cleared.'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property OTHER_STATUS. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_ALARMS' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_ALARMS');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_ALARMS',
                        'UPS2 Alarm status of UPS system. Conditions may be fault conditions or status information. Fault conditions require the use of the CLEAR_FAULT_CMD to clear, while status information will clear when the hardware condition is cleared.',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_ALARMS already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_ALARMS' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_ALARMS',
                            '0',
                            'integer',
                            '0x004c',
                            '0',  
                            'ubyte',
                            'unsigned char',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS2 Alarm status of UPS system. Conditions may be fault conditions or status information. Fault conditions require the use of the CLEAR_FAULT_CMD to clear, while status information will clear when the hardware condition is cleared.'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_ALARMS. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_BATTERY_OUTPUT' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_BATTERY_OUTPUT');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_BATTERY_OUTPUT',
                        'UPS 2 Battery voltage and current',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_BATTERY_OUTPUT already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_BATTERY_OUTPUT' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_BATTERY_OUTPUT',
                            '0',
                            'integer',
                            '0x0048',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Battery voltage and current'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_BATTERY_OUTPUT. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_BATTERY_STATUS' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_BATTERY_STATUS');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_BATTERY_STATUS',
                        'UPS 2 Nominal battery autonomy',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_BATTERY_STATUS already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_BATTERY_STATUS' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_BATTERY_STATUS',
                            '0',
                            'integer',
                            '0x0049',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Nominal battery autonomy'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_BATTERY_STATUS. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_BYPASS_VOLTS' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_BYPASS_VOLTS');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_BYPASS_VOLTS',
                        'UPS 2 Bypass voltages by phase',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_BYPASS_VOLTS already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_BYPASS_VOLTS' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_BYPASS_VOLTS',
                            '0',
                            'integer',
                            '0x004a',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Bypass voltages by phase'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_BYPASS_VOLTS. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_FREQS' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_FREQS');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_FREQS',
                        'UPS 2 Bypass and inverter frequencies',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_FREQS already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_FREQS' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_FREQS',
                            '0',
                            'integer',
                            '0x004b',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Bypass and inverter frequencies'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_FREQS. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS1_INVERTER_SW' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS1_INVERTER_SW');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS1_INVERTER_SW',
                        'UPS 1 Inverter switch position',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS1_INVERTER_SW already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS1_INVERTER_SW' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS1_INVERTER_SW',
                            '0',
                            'integer',
                            '0x80035',
                            '0',  
                            'ubyte',
                            'unsigned char',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 1 Inverter switch position'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS1_INVERTER_SW. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_INVERTER_SW' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_INVERTER_SW');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_INVERTER_SW',
                        'UPS 2 Inverter switch position',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_INVERTER_SW already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_INVERTER_SW' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_INVERTER_SW',
                            '0',
                            'integer',
                            '0x80045',
                            '0',  
                            'ubyte',
                            'unsigned char',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Inverter switch position'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_INVERTER_SW. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_INVERTER_VOLTS' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_INVERTER_VOLTS');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_INVERTER_VOLTS',
                        'UPS 2 Inverter voltages by phase',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_INVERTER_VOLTS already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_INVERTER_VOLTS' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_INVERTER_VOLTS',
                            '0',
                            'integer',
                            '0x004d',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Inverter voltages by phase'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_INVERTER_VOLTS. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_OUTPUT_CURRENT' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_OUTPUT_CURRENT');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_OUTPUT_CURRENT',
                        'UPS 2 Output currents by phase',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_OUTPUT_CURRENT already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_OUTPUT_CURRENT' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_OUTPUT_CURRENT',
                            '0',
                            'integer',
                            '0x0046',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Output currents by phase'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_OUTPUT_CURRENT. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS2_OUTPUT_VOLTS' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS2_OUTPUT_VOLTS');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS2_OUTPUT_VOLTS',
                        'UPS 2 Output voltages by phase',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS2_OUTPUT_VOLTS already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS2_OUTPUT_VOLTS' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS2_OUTPUT_VOLTS',
                            '0',
                            'integer',
                            '0x0045',
                            '0',  
                            'int16',
                            'short',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Output voltages by phase'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS2_OUTPUT_VOLTS. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS_STATUS_1' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS_STATUS_1');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS_STATUS_1',
                        'UPS 1 Current status word',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS_STATUS_1 already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS_STATUS_1' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS_STATUS_1',
                            '0',
                            'integer',
                            '0x80039',
                            '0',  
                            'ubyte',
                            'unsigned char',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 1 Current status word'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS_STATUS_1. Skipping unique monitor point insertion.');
                    END IF;

                SELECT COUNT(propertyname) INTO defaultBACIPropertyCount FROM defaultbaciProperty WHERE propertyname='UPS_STATUS_2' and defaultComponentId=defCompId;
                IF defaultBACIPropertyCount=0 THEN

                    dbms_output.put_line('Inserting default BACI Property UPS_STATUS_2');
                    SELECT MAX(defaultBACIPropId) INTO defaultBACIPropId FROM defaultbaciProperty;
                    defaultBACIPropId:=COALESCE(defaultBACIPropId,0)+1;
                    INSERT INTO DefaultBACIProperty (
                        DEFAULTBACIPROPID,
                        DEFAULTCOMPONENTID,
                        PROPERTYNAME,
                        DESCRIPTION,
                        FORMAT,
                        UNITS,
                        RESOLUTION,
                        ARCHIVE_PRIORITY,
                        ARCHIVE_MIN_INT,
                        ARCHIVE_MAX_INT,
                        DEFAULT_TIMER_TRIG,
                        MIN_TIMER_TRIG,
                        INITIALIZE_DEVIO,
                        MIN_DELTA_TRIG,
                        DEFAULT_VALUE,
                        GRAPH_MIN,
                        GRAPH_MAX,
                        MIN_STEP,
                        ARCHIVE_DELTA,
                        ALARM_HIGH_ON,
                        ALARM_LOW_ON,
                        ALARM_HIGH_OFF,
                        ALARM_LOW_OFF,
                        ALARM_TIMER_TRIG,
                        MIN_VALUE,
                        MAX_VALUE,
                        BITDESCRIPTION,
                        WHENSET,
                        WHENCLEARED,
                        STATESDESCRIPTION,
                        CONDITION,
                        ALARM_ON,
                        ALARM_OFF,
                        DATA,
                        ALARM_FAULT_FAMILY,
                        ALARM_FAULT_MEMBER,
                        ALARM_LEVEL,
                        ARCHIVE_SUPPRESS,
                        ARCHIVE_MECHANISM)
                    VALUES (
                        defaultBACIPropId,
                        defCompId,
                        'UPS_STATUS_2',
                        'UPS 2 Current status word',
                        'none',
                        'none',
                        '0',
                        '3',
                        '0',
                        '300', 
                        '1',
                        '0.048',
                        '0',
                        '0',
                        '0',
                        '0',   
                        '0',   
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '0',
                        '-2147483648',
                        '2147483647',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '',
                        '!',
                        '!',
                        '0',
                        '0', 
                        'monitor_collector'
                    );
                ELSE 
                    dbms_output.put_line('Default BACI Property UPS_STATUS_2 already exists... continue');
                    SELECT defaultBACIPropId INTO defaultBACIPropId FROM defaultbaciProperty WHERE propertyname='UPS_STATUS_2' and defaultComponentId=defCompId;
                END IF;

                    SELECT COUNT(monitorPointName) INTO monitorPropCount FROM defaultMonitorPoint WHERE defaultbacipropertyId=defaultBACIPropId;
                    IF monitorPropCount=0 THEN
                        SELECT MAX(defaultMonitorPointId) INTO defaultMonPointId FROM defaultMonitorPoint;
                        defaultMonPointId:=COALESCE(defaultMonPointId,0)+1; 
                        INSERT INTO DefaultMonitorPoint (
                            DEFAULTMONITORPOINTID,
                            DEFAULTBACIPROPERTYID,
                            MONITORPOINTNAME,
                            INDICE,
                            DATATYPE,
                            RCA,
                            TERELATED,
                            RAWDATATYPE,
                            WORLDDATATYPE,
                            UNITS,
                            SCALE,
                            OFFSET,
                            MINRANGE,
                            MAXRANGE,
                            DESCRIPTION)
                        VALUES(
                            defaultMonPointId,
                            defaultBACIPropId,
                            'UPS_STATUS_2',
                            '0',
                            'integer',
                            '0x80049',
                            '0',  
                            'ubyte',
                            'unsigned char',
                            'none',
                            '1.0',   
                            '0.0',   
                            '0',   
                            '0',   
                            'UPS 2 Current status word'
                        );
                    ELSE 
                        dbms_output.put_line('WARNING: Found other Monitor Points associated with property UPS_STATUS_2. Skipping unique monitor point insertion.');
                    END IF;

COMMIT;

EXCEPTION 
WHEN OTHERS THEN
    dbms_output.put_line('Transaction Error:'||SQLERRM);
    dbms_output.put_line('Rolling back the transaction');
    ROLLBACK;
END;

.
/
