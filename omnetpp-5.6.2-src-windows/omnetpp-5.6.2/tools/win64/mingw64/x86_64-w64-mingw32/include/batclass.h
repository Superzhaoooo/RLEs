/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>
#include <poclass.h>

DEFINE_GUID (BATTERY_STATUS_WMI_GUID, 0xfc4670d1, 0xebbf, 0x416e, 0x87, 0xce, 0x37, 0x4a, 0x4e, 0xbc, 0x11, 0x1a);
DEFINE_GUID (BATTERY_RUNTIME_WMI_GUID, 0x535a3767, 0x1ac2, 0x49bc, 0xa0, 0x77, 0x3f, 0x7a, 0x02, 0xe4, 0x0a, 0xec);
DEFINE_GUID (BATTERY_TEMPERATURE_WMI_GUID, 0x1a52a14d, 0xadce, 0x4a44, 0x9a, 0x3e, 0xc8, 0xd8, 0xf1, 0x5f, 0xf2, 0xc2);
DEFINE_GUID (BATTERY_FULL_CHARGED_CAPACITY_WMI_GUID, 0x40b40565, 0x96f7, 0x4435, 0x86, 0x94, 0x97, 0xe0, 0xe4, 0x39, 0x59, 0x05);
DEFINE_GUID (BATTERY_CYCLE_COUNT_WMI_GUID, 0xef98db24, 0x0014, 0x4c25, 0xa5, 0x0b, 0xc7, 0x24, 0xae, 0x5c, 0xd3, 0x71);
DEFINE_GUID (BATTERY_STATIC_DATA_WMI_GUID, 0x05e1e463, 0xe4e2, 0x4ea9, 0x80, 0xcb, 0x9b, 0xd4, 0xb3, 0xca, 0x06, 0x55);
DEFINE_GUID (BATTERY_STATUS_CHANGE_WMI_GUID, 0xcddfa0c3, 0x7c5b, 0x4e43, 0xa0, 0x34, 0x05, 0x9f, 0xa5, 0xb8, 0x43, 0x64);
DEFINE_GUID (BATTERY_TAG_CHANGE_WMI_GUID, 0x5e1f6e19, 0x8786, 0x4d23, 0x94, 0xfc, 0x9e, 0x74, 0x6b, 0xd5, 0xd8, 0x88);

#ifndef _BATCLASS_
#define _BATCLASS_

#if WINAPI_FAMILY_PARTITION (WINAPI_PARTITION_DESKTOP)
#ifndef _WINDOWS_

typedef NTSTATUS (BCLASS_QUERY_TAG_CALLBACK) (PVOID Context, PULONG BatteryTag);
typedef BCLASS_QUERY_TAG_CALLBACK *PBCLASS_QUERY_TAG_CALLBACK;
typedef NTSTATUS (BCLASS_QUERY_INFORMATION_CALLBACK) (PVOID Context, ULONG BatteryTag, BATTERY_QUERY_INFORMATION_LEVEL Level, LONG AtRate, PVOID Buffer, ULONG BufferLength, PULONG ReturnedLength);
typedef BCLASS_QUERY_INFORMATION_CALLBACK *PBCLASS_QUERY_INFORMATION_CALLBACK;
typedef NTSTATUS (BCLASS_QUERY_STATUS_CALLBACK) (PVOID Context, ULONG BatteryTag, PBATTERY_STATUS BatteryStatus);
typedef BCLASS_QUERY_STATUS_CALLBACK *PBCLASS_QUERY_STATUS_CALLBACK;

typedef struct {
  ULONG PowerState;
  ULONG LowCapacity;
  ULONG HighCapacity;
} BATTERY_NOTIFY,*PBATTERY_NOTIFY;

typedef NTSTATUS (BCLASS_SET_STATUS_NOTIFY_CALLBACK) (PVOID Context, ULONG BatteryTag, PBATTERY_NOTIFY BatteryNotify);
typedef BCLASS_SET_STATUS_NOTIFY_CALLBACK *PBCLASS_SET_STATUS_NOTIFY_CALLBACK;
typedef NTSTATUS (BCLASS_SET_INFORMATION_CALLBACK) (PVOID Context, ULONG BatteryTag, BATTERY_SET_INFORMATION_LEVEL Level, PVOID Buffer);
typedef BCLASS_SET_INFORMATION_CALLBACK *PBCLASS_SET_INFORMATION_CALLBACK;
typedef NTSTATUS (BCLASS_DISABLE_STATUS_NOTIFY_CALLBACK) (PVOID Context);
typedef BCLASS_DISABLE_STATUS_NOTIFY_CALLBACK *PBCLASS_DISABLE_STATUS_NOTIFY_CALLBACK;
typedef PBCLASS_QUERY_TAG_CALLBACK BCLASS_QUERY_TAG;
typedef PBCLASS_QUERY_INFORMATION_CALLBACK BCLASS_QUERY_INFORMATION;
typedef PBCLASS_QUERY_STATUS_CALLBACK BCLASS_QUERY_STATUS;
typedef PBCLASS_SET_STATUS_NOTIFY_CALLBACK BCLASS_SET_STATUS_NOTIFY;
typedef PBCLASS_SET_INFORMATION_CALLBACK BCLASS_SET_INFORMATION;
typedef PBCLASS_DISABLE_STATUS_NOTIFY_CALLBACK BCLASS_DISABLE_STATUS_NOTIFY;

typedef struct {
  USHORT MajorVersion;
  USHORT MinorVersion;
  PVOID Context;
  BCLASS_QUERY_TAG QueryTag;
  BCLASS_QUERY_INFORMATION QueryInformation;
  BCLASS_SET_INFORMATION SetInformation;
  BCLASS_QUERY_STATUS QueryStatus;
  BCLASS_SET_STATUS_NOTIFY SetStatusNotify;
  BCLASS_DISABLE_STATUS_NOTIFY DisableStatusNotify;
  PDEVICE_OBJECT Pdo;
  PUNICODE_STRING DeviceName;
} BATTERY_MINIPORT_INFO,*PBATTERY_MINIPORT_INFO;

#define BATTERY_CLASS_MAJOR_VERSION 0x0001
#define BATTERY_CLASS_MINOR_VERSION 0x0000

typedef struct _BATTERY_WMI_STATUS {
  ULONG Tag;
  ULONG RemainingCapacity;
  LONG ChargeRate;
  LONG DischargeRate;
  ULONG Voltage;
  BOOLEAN PowerOnline;
  BOOLEAN Charging;
  BOOLEAN Discharging;
  BOOLEAN Critical;
} BATTERY_WMI_STATUS,*PBATTERY_WMI_STATUS;

typedef struct _BATTERY_WMI_RUNTIME {
  ULONG Tag;
  ULONG EstimatedRuntime;
} BATTERY_WMI_RUNTIME,*PBATTERY_WMI_RUNTIME;

typedef struct _BATTERY_WMI_TEMPERATURE {
  ULONG Tag;
  ULONG Temperature;
} BATTERY_WMI_TEMPERATURE,*PBATTERY_WMI_TEMPERATURE;

typedef struct _BATTERY_WMI_FULL_CHARGED_CAPACITY {
  ULONG Tag;
  ULONG FullChargedCapacity;
} BATTERY_WMI_FULL_CHARGED_CAPACITY,*PBATTERY_WMI_FULL_CHARGED_CAPACITY;

typedef struct _BATTERY_WMI_CYCLE_COUNT {
  ULONG Tag;
  ULONG CycleCount;
} BATTERY_WMI_CYCLE_COUNT,*PBATTERY_WMI_CYCLE_COUNT;

typedef struct _BATTERY_WMI_STATIC_DATA {
  ULONG Tag;
  WCHAR ManufactureDate[25];
  BATTERY_REPORTING_SCALE Granularity [4];
  ULONG Capabilities;
  UCHAR Technology;
  ULONG Chemistry;
  ULONG DesignedCapacity;
  ULONG DefaultAlert1;
  ULONG DefaultAlert2;
  ULONG CriticalBias;
  WCHAR Strings[1];
} BATTERY_WMI_STATIC_DATA,*PBATTERY_WMI_STATIC_DATA;

typedef struct _BATTERY_WMI_STATUS_CHANGE {
  ULONG Tag;
  BOOLEAN PowerOnline;
  BOOLEAN Charging;
  BOOLEAN Discharging;
  BOOLEAN Critical;
} BATTERY_WMI_STATUS_CHANGE,*PBATTERY_WMI_STATUS_CHANGE;

typedef struct _BATTERY_TAG_CHANGE {
  ULONG Tag;
} BATTERY_TAG_CHANGE,*PBATTERY_TAG_CHANGE;

#ifndef BATTERYCLASS
#define BATTERYCLASSAPI DECLSPEC_IMPORT
#else
#define BATTERYCLASSAPI
#endif

NTSTATUS BATTERYCLASSAPI BatteryClassInitializeDevice (PBATTERY_MINIPORT_INFO MiniportInfo, PVOID *ClassData);
NTSTATUS BATTERYCLASSAPI BatteryClassUnload (PVOID ClassData);
NTSTATUS BATTERYCLASSAPI BatteryClassIoctl (PVOID ClassData, PIRP Irp);
NTSTATUS BATTERYCLASSAPI BatteryClassSystemControl (PVOID ClassData, PVOID WmiLibContext, PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Disposition);
NTSTATUS BATTERYCLASSAPI BatteryClassQueryWmiDataBlock (PVOID ClassData, PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, PULONG InstanceLengthArray, ULONG OutBufferSize, PUCHAR Buffer);
NTSTATUS BATTERYCLASSAPI BatteryClassStatusNotify (PVOID ClassData);

#endif
#endif

#endif
