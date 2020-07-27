

#ifndef  ___COMM_DRIVER_IO_CONTROL___
#define	 ___COMM_DRIVER_IO_CONTROL___



#define		COMM_DRIVER_WIN32_DEV_NAME  L"\\DosDevices\\CommDriverDev"
#define		COMM_DRIVER_DEV_NAME	      L"\\Device\\CommDriverDev"


#define		FILE_DEVICE_COMM_DRIVER		 0x00008810


#define		IO_REFERENCE_EVENT		    (ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x801, METHOD_NEITHER, FILE_ANY_ACCESS)
#define		IO_DEREFERENCE_EVENT	    (ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x802, METHOD_NEITHER, FILE_ANY_ACCESS)

#define		IO_SET_EVENT				(ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x803, METHOD_NEITHER, FILE_ANY_ACCESS)
#define		IO_CLEAR_EVENT				(ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x804, METHOD_NEITHER, FILE_ANY_ACCESS)
#define		IO_QUERY_EVENT_STATE		(ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x805, METHOD_NEITHER, FILE_ANY_ACCESS)


#endif