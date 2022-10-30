#pragma once

#define DEVICE_HIDE 0x8001

#define IOCTL_HIDE_PATH CTL_CODE(DEVICE_HIDE, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SHOW_PATH CTL_CODE(DEVICE_HIDE, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HIDE_CLEAR CTL_CODE(DEVICE_HIDE, 0x802, METHOD_NEITHER, FILE_ANY_ACCESS)