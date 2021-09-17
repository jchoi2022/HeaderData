       
DEFINE_GUID(GUID_BTHDDI_SDP_NODE_INTERFACE, 0x81a7fdf3, 0x86c1, 0x4be8, 0xa8, 0xc8, 0x2a, 0x6d, 0x18, 0x8b, 0x41, 0x77);
DEFINE_GUID(GUID_BTHDDI_SDP_PARSE_INTERFACE, 0x4e719439, 0x9cf1, 0x4bab, 0xac, 0x1d, 0x32, 0x79, 0x86, 0x57, 0x43, 0xd2);
DEFINE_GUID(GUID_BTHDDI_PROFILE_DRIVER_INTERFACE, 0x94a59aa8, 0x4383, 0x4286, 0xaa, 0x4f, 0x34, 0xa1, 0x60, 0xf4, 0x0, 0x4);
DEFINE_GUID(GUID_BTH_DEVICE_INTERFACE, 0x00F40965,0xE89D, 0x4487, 0x98, 0x90, 0x87, 0xC3, 0xAB, 0xB2, 0x11, 0xF4);
#include <devpropdef.h>
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DeviceAddress, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 1);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_ServiceGUID, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 2);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DeviceFlags, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 3);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DeviceManufacturer, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 4);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DeviceModelNumber, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 5);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DeviceVIDSource, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 6);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DeviceVID, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 7);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DevicePID, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 8);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_DeviceProductVersion, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 9);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_ClassOfDevice_Deprecated, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 4);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_LastConnectedTime_Deprecated, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 5);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_ClassOfDevice, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 10);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_LastConnectedTime, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 11);
DEFINE_DEVPROPKEY(DEVPKEY_Bluetooth_LastSeenTime, 0x2bd67d8b, 0x8beb, 0x48d5, 0x87, 0xe0, 0x6c, 0xda, 0x34, 0x28, 0x04, 0x0a, 12);