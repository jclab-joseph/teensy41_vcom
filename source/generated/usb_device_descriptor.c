/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#include "usb_device_config.h"
#include "usb.h"
#include "usb_device.h"

#include "usb_device_class.h"
#include "usb_device_descriptor.h"

#include "usb_device_composite.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Define endpoint setting type */
typedef struct _usb_endpoint_setting
{
    uint16_t size;
    uint8_t interval;
} usb_endpoint_setting_t;
 
 /*!
* @brief Gets setting (interval and max packet size) of specific endpoint based on speed a alternate setting
*
* @param uint8_t Speed.
* @param uint8_t Alternate setting.
* @param uint8_t Endpoint address.
* @retval usb_endpoint_setting_t Endpoint setting.
*/
static usb_endpoint_setting_t getEndpointSetting (uint8_t speed, uint8_t alternateSetting, uint8_t address);

/*******************************************************************************
 * Variables
 ******************************************************************************/

usb_device_endpoint_struct_t g_UsbDeviceInterface0CicVcomSetting0DefaultEndpoints[USB_INTERFACE_0_CIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT] = {
    {
        USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN | (USB_IN << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
        USB_ENDPOINT_INTERRUPT,
        FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE,
        FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_INTERVAL,
    },
};

usb_device_interface_struct_t g_UsbDeviceInterface0CicVcomInterface[] = {
    {
        USB_INTERFACE_0_CIC_VCOM_SETTING_0_DEFAULT_INDEX, /* The alternate setting of the interface */
        {
            USB_INTERFACE_0_CIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT, /* Endpoints count */
            g_UsbDeviceInterface0CicVcomSetting0DefaultEndpoints, /* Endpoints handle */
        },
        NULL,
    },
};

usb_device_endpoint_struct_t g_UsbDeviceInterface1DicVcomSetting0DefaultEndpoints[USB_INTERFACE_1_DIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT] = {
    {
        USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN | (USB_IN << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
        USB_ENDPOINT_BULK,
        FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE,
        FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_INTERVAL,
    },
    {
        USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT | (USB_OUT << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
        USB_ENDPOINT_BULK,
        FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE,
        FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_INTERVAL,
    },
};

usb_device_interface_struct_t g_UsbDeviceInterface1DicVcomInterface[] = {
    {
        USB_INTERFACE_1_DIC_VCOM_SETTING_0_DEFAULT_INDEX, /* The alternate setting of the interface */
        {
            USB_INTERFACE_1_DIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT, /* Endpoints count */
            g_UsbDeviceInterface1DicVcomSetting0DefaultEndpoints, /* Endpoints handle */
        },
        NULL,
    },
};

usb_device_endpoint_struct_t g_UsbDeviceInterface2MscRamDiskSetting0DefaultEndpoints[USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_DEFAULT_ENDPOINT_COUNT] = {
    {
        USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN | (USB_IN << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
        USB_ENDPOINT_BULK,
        FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE,
        FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_INTERVAL,
    },
    {
        USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT | (USB_OUT << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
        USB_ENDPOINT_BULK,
        FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE,
        FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_INTERVAL,
    },
};

usb_device_interface_struct_t g_UsbDeviceInterface2MscRamDiskInterface[] = {
    {
        USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_DEFAULT_INDEX, /* The alternate setting of the interface */
        {
            USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_DEFAULT_ENDPOINT_COUNT, /* Endpoints count */
            g_UsbDeviceInterface2MscRamDiskSetting0DefaultEndpoints, /* Endpoints handle */
        },
        NULL,
    },
};

usb_device_interfaces_struct_t g_UsbDeviceInterface0CicVcomInterfaces[USB_INTERFACE_0_CIC_VCOM_INTERFACE_COUNT] = {
    {
        USB_INTERFACE_0_CIC_VCOM_CLASS,
        USB_INTERFACE_0_CIC_VCOM_SUBCLASS,
        USB_INTERFACE_0_CIC_VCOM_PROTOCOL,
        USB_INTERFACE_0_CIC_VCOM_INDEX,
        g_UsbDeviceInterface0CicVcomInterface,  /* Interfaces handle */
        sizeof(g_UsbDeviceInterface0CicVcomInterface) / sizeof(usb_device_interface_struct_t),
    },
    {
        USB_INTERFACE_1_DIC_VCOM_CLASS,
        USB_INTERFACE_1_DIC_VCOM_SUBCLASS,
        USB_INTERFACE_1_DIC_VCOM_PROTOCOL,
        USB_INTERFACE_1_DIC_VCOM_INDEX,
        g_UsbDeviceInterface1DicVcomInterface,  /* Interfaces handle */
        sizeof(g_UsbDeviceInterface1DicVcomInterface) / sizeof(usb_device_interface_struct_t),
    },
};

usb_device_interface_list_t g_UsbDeviceInterface0CicVcomInterfaceList[USB_DEVICE_CONFIGURATION_COUNT] = {
    {
        USB_INTERFACE_0_CIC_VCOM_INTERFACE_COUNT,
        g_UsbDeviceInterface0CicVcomInterfaces, /* The interfaces handle */
    },
};

usb_device_class_struct_t g_UsbDeviceInterface0CicVcomConfig = {
    g_UsbDeviceInterface0CicVcomInterfaceList,
    kUSB_DeviceClassTypeCdc,
    USB_DEVICE_CONFIGURATION_COUNT,
};

usb_device_interfaces_struct_t g_UsbDeviceInterface2MscRamDiskInterfaces[USB_INTERFACE_2_MSC_RAM_DISK_INTERFACE_COUNT] = {
    {
        USB_INTERFACE_2_MSC_RAM_DISK_CLASS,
        USB_INTERFACE_2_MSC_RAM_DISK_SUBCLASS,
        USB_INTERFACE_2_MSC_RAM_DISK_PROTOCOL,
        USB_INTERFACE_2_MSC_RAM_DISK_INDEX,
        g_UsbDeviceInterface2MscRamDiskInterface,  /* Interfaces handle */
        sizeof(g_UsbDeviceInterface2MscRamDiskInterface) / sizeof(usb_device_interface_struct_t),
    },
};

usb_device_interface_list_t g_UsbDeviceInterface2MscRamDiskInterfaceList[USB_DEVICE_CONFIGURATION_COUNT] = {
    {
        USB_INTERFACE_2_MSC_RAM_DISK_INTERFACE_COUNT,
        g_UsbDeviceInterface2MscRamDiskInterfaces, /* The interfaces handle */
    },
};

usb_device_class_struct_t g_UsbDeviceInterface2MscRamDiskConfig = {
    g_UsbDeviceInterface2MscRamDiskInterfaceList,
    kUSB_DeviceClassTypeMsc,
    USB_DEVICE_CONFIGURATION_COUNT,
};

USB_DMA_INIT_DATA_ALIGN(USB_DATA_ALIGN_SIZE)
uint8_t g_UsbDeviceDescriptor[] = {
    USB_DESCRIPTOR_LENGTH_DEVICE, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_DEVICE,   /* DEVICE Descriptor Type */
    USB_SHORT_GET_LOW(USB_DEVICE_SPECIFIC_BCD_VERSION),
    USB_SHORT_GET_HIGH(USB_DEVICE_SPECIFIC_BCD_VERSION), /* USB Specification Release Number in
                                                     Binary-Coded Decimal (i.e., 2.10 is 210H). */
    USB_DEVICE_CLASS,                                    /* Class code (assigned by the USB-IF). */
    USB_DEVICE_SUBCLASS,                                 /* Subclass code (assigned by the USB-IF). */
    USB_DEVICE_PROTOCOL,                                 /* Protocol code (assigned by the USB-IF). */
    USB_CONTROL_MAX_PACKET_SIZE,                         /* Maximum packet size for endpoint zero
                                                     (only 8, 16, 32, or 64 are valid) */

    0xC9U, 0x1FU,                                        /* Vendor ID (assigned by the USB-IF) */
    0x94U, 0x00U,                                        /* Product ID (assigned by the manufacturer) */
    USB_SHORT_GET_LOW(USB_DEVICE_DEMO_BCD_VERSION),
    USB_SHORT_GET_HIGH(USB_DEVICE_DEMO_BCD_VERSION), /* Device release number in binary-coded decimal */
    0x01U,                                           /* Index of string descriptor describing manufacturer */
    0x02U,                                           /* Index of string descriptor describing product */
    0x00U,                                           /* Index of string descriptor describing the
                                                        device's serial number */
    USB_DEVICE_CONFIGURATION_COUNT,                  /* Number of possible configurations */
};


#if (defined(USB_DEVICE_CONFIG_CV_TEST) && (USB_DEVICE_CONFIG_CV_TEST > 0U))
USB_DMA_INIT_DATA_ALIGN(USB_DATA_ALIGN_SIZE)
uint8_t g_UsbDeviceQualifierDescriptor[] = {
    USB_DESCRIPTOR_LENGTH_DEVICE_QUALITIER, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_DEVICE_QUALITIER,   /* DEVICE Descriptor Type */
    USB_SHORT_GET_LOW(USB_DEVICE_SPECIFIC_BCD_VERSION),
    USB_SHORT_GET_HIGH(USB_DEVICE_SPECIFIC_BCD_VERSION), /* USB Specification Release Number in
                                                            Binary-Coded Decimal (i.e., 2.10 is 210H). */
    USB_DEVICE_CLASS,                                    /* Class code (assigned by the USB-IF). */
    USB_DEVICE_SUBCLASS,                                 /* Subclass code (assigned by the USB-IF). */
    USB_DEVICE_PROTOCOL,                                 /* Protocol code (assigned by the USB-IF). */
    USB_CONTROL_MAX_PACKET_SIZE,                         /* Maximum packet size for endpoint zero
                                                            (only 8, 16, 32, or 64 are valid) */
    0x00U,                                               /* Number of Other-speed Configurations */
    0x00U,                                               /* Reserved for future use, must be zero */
};
#endif

USB_DMA_INIT_DATA_ALIGN(USB_DATA_ALIGN_SIZE)
uint8_t g_UsbDeviceConfigurationDescriptor[] = {
    USB_DESCRIPTOR_LENGTH_CONFIGURE, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_CONFIGURE,   /* CONFIGURATION Descriptor Type */
    USB_SHORT_GET_LOW(USB_DESCRIPTOR_LENGTH_CONFIGURE + USB_IAD_DESC_SIZE + USB_DESCRIPTOR_LENGTH_INTERFACE + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_CDC_HEADER_FUNC + USB_DESCRIPTOR_LENGTH_CDC_CALL_MANAG + USB_DESCRIPTOR_LENGTH_CDC_ABSTRACT + USB_DESCRIPTOR_LENGTH_INTERFACE_0_CIC_VCOM_UNION_FUNC + USB_DESCRIPTOR_LENGTH_INTERFACE + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_INTERFACE + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_ENDPOINT),
    USB_SHORT_GET_HIGH(USB_DESCRIPTOR_LENGTH_CONFIGURE + USB_IAD_DESC_SIZE + USB_DESCRIPTOR_LENGTH_INTERFACE + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_CDC_HEADER_FUNC + USB_DESCRIPTOR_LENGTH_CDC_CALL_MANAG + USB_DESCRIPTOR_LENGTH_CDC_ABSTRACT + USB_DESCRIPTOR_LENGTH_INTERFACE_0_CIC_VCOM_UNION_FUNC + USB_DESCRIPTOR_LENGTH_INTERFACE + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_INTERFACE + USB_DESCRIPTOR_LENGTH_ENDPOINT + USB_DESCRIPTOR_LENGTH_ENDPOINT), /* Total length of data returned for this configuration. */
    USB_COMPOSITE_INTERFACE_COUNT,                 /* Number of interfaces supported by this configuration */
    USB_COMPOSITE_CONFIGURATION_INDEX,              /* Value to use as an argument to the
                                                      SetConfiguration() request to select this configuration */
    0x00U,                                      /* Index of string descriptor describing this configuration */
    (USB_DESCRIPTOR_CONFIGURE_ATTRIBUTE_D7_MASK) |
        (USB_DEVICE_CONFIG_SELF_POWER << USB_DESCRIPTOR_CONFIGURE_ATTRIBUTE_SELF_POWERED_SHIFT) |
        (USB_DEVICE_CONFIG_REMOTE_WAKEUP << USB_DESCRIPTOR_CONFIGURE_ATTRIBUTE_REMOTE_WAKEUP_SHIFT),
    /* Configuration characteristics
         D7: Reserved (set to one)
         D6: Self-powered
         D5: Remote Wakeup
         D4...0: Reserved (reset to zero)
    */
    USB_DEVICE_MAX_POWER/2,          /* Maximum power consumption of the USB
                                      * device from the bus in this specific
                                      * configuration when the device is fully
                                      * operational. Expressed in 2 mA units
                                      *  (i.e., 50 = 100 mA).
                                      */

    USB_IAD_DESC_SIZE, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_INTERFACE_ASSOCIATION, /* INTERFACE_ASSOCIATION Descriptor Type */
    USB_INTERFACE_0_CIC_VCOM_INDEX, /* The first interface number associated with this function */
    2U, /* The number of contiguous interfaces associated with this function */
    USB_INTERFACE_0_CIC_VCOM_CLASS,            /* Class code (assigned by the USB-IF). */

    USB_INTERFACE_0_CIC_VCOM_SUBCLASS,         /* Subclass code (assigned by the USB-IF). */
 
    USB_INTERFACE_0_CIC_VCOM_PROTOCOL,         /* Protocol code (assigned by the USB). */
    2U, /* Function string descriptor index */

    USB_DESCRIPTOR_LENGTH_INTERFACE, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_INTERFACE,   /* INTERFACE Descriptor Type */
    USB_INTERFACE_0_CIC_VCOM_INDEX,   /* Number of this interface. */
    USB_INTERFACE_0_CIC_VCOM_SETTING_0_DEFAULT_INDEX,         /* Value used to select this alternate setting
                                        for the interface identified in the prior field */
    USB_INTERFACE_0_CIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT,  /* Number of endpoints used by this
                                       interface setting (excluding endpoint zero). */
    USB_INTERFACE_0_CIC_VCOM_CLASS,            /* Class code (assigned by the USB-IF). */
    USB_INTERFACE_0_CIC_VCOM_SUBCLASS,         /* Subclass code (assigned by the USB-IF). */
    USB_INTERFACE_0_CIC_VCOM_PROTOCOL,         /* Protocol code (assigned by the USB). */
    0U,                             /* Index of string descriptor describing this interface */

    USB_DESCRIPTOR_LENGTH_CDC_HEADER_FUNC, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_CDC_CS_INTERFACE,  /* CS_INTERFACE Descriptor Type */
    USB_CDC_HEADER_FUNC_DESC,
    0x10U,
    0x01U, /* USB Class Definitions for Communications the Communication specification version 1.10 */

    USB_DESCRIPTOR_LENGTH_CDC_CALL_MANAG, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_CDC_CS_INTERFACE, /* CS_INTERFACE Descriptor Type */
    USB_CDC_CALL_MANAGEMENT_FUNC_DESC,
    0x01U, /*Bit 0: Whether device handle call management itself 1, Bit 1: Whether device can send/receive call
             management information over a Data Class Interface 0 */
    USB_INTERFACE_1_DIC_VCOM_INDEX, /* Indicates multiplexed commands are handled via data interface */

    USB_DESCRIPTOR_LENGTH_CDC_ABSTRACT,   /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_CDC_CS_INTERFACE, /* CS_INTERFACE Descriptor Type */
    USB_CDC_ABSTRACT_CONTROL_FUNC_DESC,
    0x06U, /* Bit 0: Whether device supports the request combination of Set_Comm_Feature, Clear_Comm_Feature, and
             Get_Comm_Feature 0, Bit 1: Whether device supports the request combination of Set_Line_Coding,
             Set_Control_Line_State, Get_Line_Coding, and the notification Serial_State 1, Bit 2: Whether device
             supports the request Send_Break, Bit 3: Whether device supports the notification Network_Connection */

    USB_DESCRIPTOR_LENGTH_INTERFACE_0_CIC_VCOM_UNION_FUNC, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_CDC_CS_INTERFACE, /* CS_INTERFACE Descriptor Type */
    USB_CDC_UNION_FUNC_DESC,
    USB_INTERFACE_0_CIC_VCOM_INDEX,        /* The interface number of the Communications or Data Class interface  */
    USB_INTERFACE_1_DIC_VCOM_INDEX,        /* Interface number of subordinate interface in the Union  */

    USB_DESCRIPTOR_LENGTH_ENDPOINT,       /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_ENDPOINT,         /* ENDPOINT Descriptor Type */
    USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN | (USB_IN << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
    /* The number of the endpoint on the USB device described by this descriptor. */
    USB_ENDPOINT_INTERRUPT, /* This field describes the endpoint's attributes */
    USB_SHORT_GET_LOW(FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE),
    USB_SHORT_GET_HIGH(FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE),
    FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_INTERVAL, /* Interval for polling endpoint for data transfers. */
    USB_DESCRIPTOR_LENGTH_INTERFACE, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_INTERFACE,   /* INTERFACE Descriptor Type */
    USB_INTERFACE_1_DIC_VCOM_INDEX,   /* Number of this interface. */
    USB_INTERFACE_1_DIC_VCOM_SETTING_0_DEFAULT_INDEX,         /* Value used to select this alternate setting
                                        for the interface identified in the prior field */
    USB_INTERFACE_1_DIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT,  /* Number of endpoints used by this
                                       interface setting (excluding endpoint zero). */
    USB_INTERFACE_1_DIC_VCOM_CLASS,            /* Class code (assigned by the USB-IF). */
    USB_INTERFACE_1_DIC_VCOM_SUBCLASS,         /* Subclass code (assigned by the USB-IF). */
    USB_INTERFACE_1_DIC_VCOM_PROTOCOL,         /* Protocol code (assigned by the USB). */
    0U,                             /* Index of string descriptor describing this interface */

    USB_DESCRIPTOR_LENGTH_ENDPOINT,       /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_ENDPOINT,         /* ENDPOINT Descriptor Type */
    USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN | (USB_IN << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
    /* The number of the endpoint on the USB device described by this descriptor. */
    USB_ENDPOINT_BULK, /* This field describes the endpoint's attributes */
    USB_SHORT_GET_LOW(FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE),
    USB_SHORT_GET_HIGH(FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE),
    FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_INTERVAL, /* Interval for polling endpoint for data transfers. */
    USB_DESCRIPTOR_LENGTH_ENDPOINT,       /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_ENDPOINT,         /* ENDPOINT Descriptor Type */
    USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT | (USB_OUT << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
    /* The number of the endpoint on the USB device described by this descriptor. */
    USB_ENDPOINT_BULK, /* This field describes the endpoint's attributes */
    USB_SHORT_GET_LOW(FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE),
    USB_SHORT_GET_HIGH(FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE),
    FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_INTERVAL, /* Interval for polling endpoint for data transfers. */
    USB_DESCRIPTOR_LENGTH_INTERFACE, /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_INTERFACE,   /* INTERFACE Descriptor Type */
    USB_INTERFACE_2_MSC_RAM_DISK_INDEX,   /* Number of this interface. */
    USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_DEFAULT_INDEX,         /* Value used to select this alternate setting
                                        for the interface identified in the prior field */
    USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_DEFAULT_ENDPOINT_COUNT,  /* Number of endpoints used by this
                                       interface setting (excluding endpoint zero). */
    USB_INTERFACE_2_MSC_RAM_DISK_CLASS,            /* Class code (assigned by the USB-IF). */
    USB_INTERFACE_2_MSC_RAM_DISK_SUBCLASS,         /* Subclass code (assigned by the USB-IF). */
    USB_INTERFACE_2_MSC_RAM_DISK_PROTOCOL,         /* Protocol code (assigned by the USB). */
    0U,                             /* Index of string descriptor describing this interface */

    USB_DESCRIPTOR_LENGTH_ENDPOINT,       /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_ENDPOINT,         /* ENDPOINT Descriptor Type */
    USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN | (USB_IN << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
    /* The number of the endpoint on the USB device described by this descriptor. */
    USB_ENDPOINT_BULK, /* This field describes the endpoint's attributes */
    USB_SHORT_GET_LOW(FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE),
    USB_SHORT_GET_HIGH(FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE),
    FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_INTERVAL, /* Interval for polling endpoint for data transfers. */
    USB_DESCRIPTOR_LENGTH_ENDPOINT,       /* Size of this descriptor in bytes */
    USB_DESCRIPTOR_TYPE_ENDPOINT,         /* ENDPOINT Descriptor Type */
    USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT | (USB_OUT << USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_SHIFT),
    /* The number of the endpoint on the USB device described by this descriptor. */
    USB_ENDPOINT_BULK, /* This field describes the endpoint's attributes */
    USB_SHORT_GET_LOW(FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE),
    USB_SHORT_GET_HIGH(FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE),
    FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_INTERVAL, /* Interval for polling endpoint for data transfers. */
};

USB_DMA_INIT_DATA_ALIGN(USB_DATA_ALIGN_SIZE)
uint8_t g_UsbDeviceString0[] = {
    2U + 2U * 1U,
    USB_DESCRIPTOR_TYPE_STRING,
    0x09U,
    0x04U,
};

USB_DMA_INIT_DATA_ALIGN(USB_DATA_ALIGN_SIZE)
uint8_t g_UsbDeviceString1[] = {
    2U + 2U * 3U,
    USB_DESCRIPTOR_TYPE_STRING,
    'N',
    0x00U,
    'X',
    0x00U,
    'P',
    0x00U,
};

USB_DMA_INIT_DATA_ALIGN(USB_DATA_ALIGN_SIZE)
uint8_t g_UsbDeviceString2[] = {
    2U + 2U * 4U,
    USB_DESCRIPTOR_TYPE_STRING,
    'V',
    0x00U,
    'C',
    0x00U,
    'O',
    0x00U,
    'M',
    0x00U,
};

uint32_t g_UsbDeviceStringDescriptorLength[USB_DEVICE_STRING_COUNT] = {
    sizeof(g_UsbDeviceString0),
    sizeof(g_UsbDeviceString1),
    sizeof(g_UsbDeviceString2),
};

uint8_t *g_UsbDeviceStringDescriptorArray[USB_DEVICE_STRING_COUNT] = {
    g_UsbDeviceString0,
    g_UsbDeviceString1,
    g_UsbDeviceString2,
};

usb_language_t g_UsbDeviceLanguage[USB_DEVICE_LANGUAGE_COUNT] = {{
    g_UsbDeviceStringDescriptorArray, g_UsbDeviceStringDescriptorLength, (uint16_t)0x0409U,
}};

usb_language_list_t g_UsbDeviceLanguageList = {
    g_UsbDeviceString0, sizeof(g_UsbDeviceString0), g_UsbDeviceLanguage, USB_DEVICE_LANGUAGE_COUNT,
};

/*******************************************************************************
 * Code
 ******************************************************************************/

/* Get device descriptor request. */
usb_status_t USB_DeviceGetDeviceDescriptor(usb_device_handle handle,
                                           usb_device_get_device_descriptor_struct_t *deviceDescriptor)
{
    deviceDescriptor->buffer = g_UsbDeviceDescriptor;
    deviceDescriptor->length = USB_DESCRIPTOR_LENGTH_DEVICE;
    return kStatus_USB_Success;
}

#if (defined(USB_DEVICE_CONFIG_CV_TEST) && (USB_DEVICE_CONFIG_CV_TEST > 0U))
/* Get device qualifier descriptor request. */
usb_status_t USB_DeviceGetDeviceQualifierDescriptor(
    usb_device_handle handle, usb_device_get_device_qualifier_descriptor_struct_t *deviceQualifierDescriptor)
{
    deviceQualifierDescriptor->buffer = g_UsbDeviceQualifierDescriptor;
    deviceQualifierDescriptor->length = USB_DESCRIPTOR_LENGTH_DEVICE_QUALITIER;
    return kStatus_USB_Success;
}
#endif
/* Get device configuration descriptor request. */
usb_status_t USB_DeviceGetConfigurationDescriptor(
    usb_device_handle handle, usb_device_get_configuration_descriptor_struct_t *configurationDescriptor)
{
    if (USB_COMPOSITE_CONFIGURATION_INDEX > configurationDescriptor->configuration)
    {
        configurationDescriptor->buffer = g_UsbDeviceConfigurationDescriptor;
        configurationDescriptor->length = USB_DESCRIPTOR_LENGTH_CONFIGURATION_ALL;
        return kStatus_USB_Success;
    }
    return kStatus_USB_InvalidRequest;
}

/* Get device string descriptor request. */
usb_status_t USB_DeviceGetStringDescriptor(usb_device_handle handle,
                                           usb_device_get_string_descriptor_struct_t *stringDescriptor)
{
    if (stringDescriptor->stringIndex == 0U)
    {
        stringDescriptor->buffer = (uint8_t *)g_UsbDeviceLanguageList.languageString;
        stringDescriptor->length = g_UsbDeviceLanguageList.stringLength;
    }
    else
    {
        uint8_t languageId = 0U;
        uint8_t languageIndex = USB_DEVICE_STRING_COUNT;

        for (; languageId < USB_DEVICE_LANGUAGE_COUNT; languageId++)
        {
            if (stringDescriptor->languageId == g_UsbDeviceLanguageList.languageList[languageId].languageId)
            {
                if (stringDescriptor->stringIndex < USB_DEVICE_STRING_COUNT)
                {
                    languageIndex = stringDescriptor->stringIndex;
                }
                break;
            }
        }

        if (USB_DEVICE_STRING_COUNT == languageIndex)
        {
            return kStatus_USB_InvalidRequest;
        }
        stringDescriptor->buffer = (uint8_t *)g_UsbDeviceLanguageList.languageList[languageId].string[languageIndex];
        stringDescriptor->length = g_UsbDeviceLanguageList.languageList[languageId].length[languageIndex];
    }
    return kStatus_USB_Success;
}

/* Gets setting (interval and max packet size) of specific endpoint based on speed a alternate setting */
static usb_endpoint_setting_t getEndpointSetting (uint8_t speed, uint8_t alternateSetting, uint8_t address)
{
	usb_endpoint_setting_t setting;

	setting.interval = 0U;
	setting.size = 0U;

    if (USB_SPEED_HIGH == speed)
    {
		switch (alternateSetting)
		{
		case USB_ALTERNATE_SETTING_0:
			switch (address)
			{
                case USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN | USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_DIRECTION:
                    setting.interval = HS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_INTERVAL;
                    setting.size = HS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE;
                    break;
                case USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN | USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_DIRECTION:
                    setting.interval = HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_INTERVAL;
                    setting.size = HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE;
                    break;
                case USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT | USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_DIRECTION:
                    setting.interval = HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_INTERVAL;
                    setting.size = HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE;
                    break;
                case USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN | USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_DIRECTION:
                    setting.interval = HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_INTERVAL;
                    setting.size = HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE;
                    break;
                case USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT | USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_DIRECTION:
                    setting.interval = HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_INTERVAL;
                    setting.size = HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE;
                    break;
            }
            break;
		}
    }
    else
    {
        switch (alternateSetting)
        {
		case USB_ALTERNATE_SETTING_0:
			switch (address)
			{
                case USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN | USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_DIRECTION:
                    setting.interval = FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_INTERVAL;
                    setting.size = FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE;
                    break;
                case USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN | USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_DIRECTION:
                    setting.interval = FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_INTERVAL;
                    setting.size = FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE;
                    break;
                case USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT | USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_DIRECTION:
                    setting.interval = FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_INTERVAL;
                    setting.size = FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE;
                    break;
                case USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN | USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_DIRECTION:
                    setting.interval = FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_INTERVAL;
                    setting.size = FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE;
                    break;
                case USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT | USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_DIRECTION:
                    setting.interval = FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_INTERVAL;
                    setting.size = FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE;
                    break;
            }
            break;
        }
    }

	return setting;
}

/* Due to the difference of HS and FS descriptors, the device descriptors and configurations need to be updated to match
 * current speed.
 * As the default, the device descriptors and configurations are configured by using FS parameters for both EHCI and
 * KHCI.
 * When the EHCI is enabled, the application needs to call this function to update device by using current speed.
 * The updated information includes endpoint max packet size, endpoint interval, etc. */
usb_status_t USB_DeviceSetSpeed(usb_device_handle handle, uint8_t speed)
{
    usb_descriptor_union_t *descriptorHead;
    usb_descriptor_union_t *descriptorTail;
    uint8_t alternateSetting = 0;
    usb_endpoint_setting_t endpointSetting = {0,0};

    descriptorHead = (usb_descriptor_union_t *)&g_UsbDeviceConfigurationDescriptor[0];
    descriptorTail =
        (usb_descriptor_union_t *)(&g_UsbDeviceConfigurationDescriptor[USB_DESCRIPTOR_LENGTH_CONFIGURATION_ALL - 1U]);

    while (descriptorHead < descriptorTail)
    {
    	if (descriptorHead->common.bDescriptorType == USB_DESCRIPTOR_TYPE_INTERFACE)
    	{
			alternateSetting = descriptorHead->interface.bAlternateSetting;
    	}

        if (descriptorHead->common.bDescriptorType == USB_DESCRIPTOR_TYPE_ENDPOINT)
        {
           	endpointSetting = getEndpointSetting(speed, alternateSetting, descriptorHead->endpoint.bEndpointAddress);

            descriptorHead->endpoint.bInterval = endpointSetting.interval;
            USB_SHORT_TO_LITTLE_ENDIAN_ADDRESS(endpointSetting.size, descriptorHead->endpoint.wMaxPacketSize);
        }

        descriptorHead = (usb_descriptor_union_t *)((uint8_t *)descriptorHead  +  descriptorHead->common.bLength);
    }

    if (USB_SPEED_HIGH == speed)
    {
        g_UsbDeviceInterface0CicVcomSetting0DefaultEndpoints[0].maxPacketSize = HS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE;
        g_UsbDeviceInterface1DicVcomSetting0DefaultEndpoints[0].maxPacketSize = HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE;
        g_UsbDeviceInterface1DicVcomSetting0DefaultEndpoints[1].maxPacketSize = HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE;
        g_UsbDeviceInterface2MscRamDiskSetting0DefaultEndpoints[0].maxPacketSize = HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE;
        g_UsbDeviceInterface2MscRamDiskSetting0DefaultEndpoints[1].maxPacketSize = HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE;
    }
    else
    {
        g_UsbDeviceInterface0CicVcomSetting0DefaultEndpoints[0].maxPacketSize = FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE;
        g_UsbDeviceInterface1DicVcomSetting0DefaultEndpoints[0].maxPacketSize = FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE;
        g_UsbDeviceInterface1DicVcomSetting0DefaultEndpoints[1].maxPacketSize = FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE;
        g_UsbDeviceInterface2MscRamDiskSetting0DefaultEndpoints[0].maxPacketSize = FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE;
        g_UsbDeviceInterface2MscRamDiskSetting0DefaultEndpoints[1].maxPacketSize = FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE;
    }

    return kStatus_USB_Success;
}
