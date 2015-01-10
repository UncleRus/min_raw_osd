#ifndef LIB_UAVTALK_VERSIONS_H_
#define LIB_UAVTALK_VERSIONS_H_

#if UAVTALK_VERSION_RELEASE == 130601
#	define UAVTALK_FLIGHTSTATUS_OBJID			0x1B7AEB74
#	define UAVTALK_SYSTEMALARMS_OBJID			0x1D70DB44
#	define UAVTALK_FLIGHTTELEMETRYSTATS_OBJID	0x2F7E2902
#	define UAVTALK_GCSTELEMETRYSTATS_OBJID		0xABC72744
#	define UAVTALK_ATTITUDEACTUAL_OBJID			0x33DAD5E6
#	define UAVTALK_MANUALCONTROLCOMMAND_OBJID	0x1E82C2D2
#	define UAVTALK_GPSPOSITION_OBJID			0xE2A323B6
#	define UAVTALK_GPSTIME_OBJID				0xD4478084
#	define UAVTALK_GPSVELOCITY_OBJID			0x8245DC80
#	define _UT_OFFS_FTS_STATUS					20
#	define _UT_OFFS_MCC_CHANNELS				20

#elif UAVTALK_VERSION_RELEASE == 130602
#	define UAVTALK_FLIGHTSTATUS_OBJID			0x0B37AA16
#	define UAVTALK_SYSTEMALARMS_OBJID			0x1D70DB44
#	define UAVTALK_FLIGHTTELEMETRYSTATS_OBJID	0x2F7E2902
#	define UAVTALK_GCSTELEMETRYSTATS_OBJID		0xABC72744
#	define UAVTALK_ATTITUDEACTUAL_OBJID			0x33DAD5E6
#	define UAVTALK_MANUALCONTROLCOMMAND_OBJID	0x1E82C2D2
#	define UAVTALK_GPSPOSITION_OBJID			0xE2A323B6
#	define UAVTALK_GPSTIME_OBJID				0xD4478084
#	define UAVTALK_GPSVELOCITY_OBJID			0x8245DC80
#	define _UT_OFFS_FTS_STATUS					20
#	define _UT_OFFS_MCC_CHANNELS				20

#elif UAVTALK_VERSION_RELEASE == 140101
#	define UAVTALK_FLIGHTSTATUS_OBJID			0x0B37AA16
#	define UAVTALK_SYSTEMALARMS_OBJID			0x34EEACF8
#	define UAVTALK_FLIGHTTELEMETRYSTATS_OBJID	0x6737BB5A
#	define UAVTALK_GCSTELEMETRYSTATS_OBJID		0xCAD1DC0A
#	define UAVTALK_ATTITUDESTATE_OBJID			0xD7E0D964	// new name since VERSION_RELEASE_14_01_1
#	define UAVTALK_MANUALCONTROLCOMMAND_OBJID	0xB8C7F78A
#	define UAVTALK_GPSPOSITIONSENSOR_OBJID 		0x1A5748CE	// new name since VERSION_RELEASE_14_01_1
#	define UAVTALK_GPSTIME_OBJID				0xD4478084
#	define UAVTALK_GPSVELOCITYSENSOR_OBJID		0x0BC57454	// new name since VERSION_RELEASE_14_01_1
#	define _UT_OFFS_FTS_STATUS					36
#	define _UT_OFFS_MCC_CHANNELS				20

#elif UAVTALK_VERSION_RELEASE == 140601
#	define UAVTALK_FLIGHTSTATUS_OBJID			0xC5FF2D54
#	define UAVTALK_SYSTEMALARMS_OBJID			0xBA9B00A4
#	define UAVTALK_FLIGHTTELEMETRYSTATS_OBJID	0x6737BB5A
#	define UAVTALK_GCSTELEMETRYSTATS_OBJID		0xCAD1DC0A
#	define UAVTALK_ATTITUDESTATE_OBJID			0xD7E0D964
#	define UAVTALK_MANUALCONTROLCOMMAND_OBJID	0x161A2C98
#	define UAVTALK_GPSPOSITIONSENSOR_OBJID		0x7D26A6E6
#	define UAVTALK_GPSTIME_OBJID				0xD4478084
#	define UAVTALK_GPSVELOCITYSENSOR_OBJID		0x0BC57454
#	define _UT_OFFS_FTS_STATUS					36
#	define _UT_OFFS_MCC_CHANNELS				20

#elif UAVTALK_VERSION_RELEASE == 141001
#	define UAVTALK_FLIGHTSTATUS_OBJID			0xC5FF2D54
#	define UAVTALK_SYSTEMALARMS_OBJID			0xBA9B00A4
#	define UAVTALK_FLIGHTTELEMETRYSTATS_OBJID	0x6737BB5A
#	define UAVTALK_GCSTELEMETRYSTATS_OBJID		0xCAD1DC0A
#	define UAVTALK_ATTITUDESTATE_OBJID			0xD7E0D964
#	define UAVTALK_MANUALCONTROLCOMMAND_OBJID	0x161A2C98
#	define UAVTALK_GPSPOSITIONSENSOR_OBJID		0x7D26A6E6
#	define UAVTALK_GPSTIME_OBJID				0xD4478084
#	define UAVTALK_GPSVELOCITYSENSOR_OBJID		0x0BC57454
#	define _UT_OFFS_FTS_STATUS					36
#	define _UT_OFFS_MCC_CHANNELS				24

#else
#	error Unknown UAVTalk version release
#endif

// renamed
#ifndef UAVTALK_ATTITUDESTATE_OBJID
#	define UAVTALK_ATTITUDESTATE_OBJID UAVTALK_ATTITUDEACTUAL_OBJID
#endif
#ifndef UAVTALK_GPSPOSITIONSENSOR_OBJID
#	define UAVTALK_GPSPOSITIONSENSOR_OBJID UAVTALK_GPSPOSITION_OBJID
#endif
#ifndef UAVTALK_GPSVELOCITYSENSOR_OBJID
#	define UAVTALK_GPSVELOCITYSENSOR_OBJID UAVTALK_GPSVELOCITY_OBJID
#endif


#endif /* LIB_UAVTALK_VERSIONS_H_ */
