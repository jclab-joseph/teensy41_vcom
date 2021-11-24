/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef __USB_DEVICE_DESCRIPTOR_H__
#define __USB_DEVICE_DESCRIPTOR_H__

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define USB_DEVICE_SPECIFIC_BCD_VERSION (0x0200U)
#define USB_DEVICE_DEMO_BCD_VERSION (0x0101U)

#define USB_DEVICE_CLASS (0xEFU)
#define USB_DEVICE_SUBCLASS (0x02U)
#define USB_DEVICE_PROTOCOL (0x01U)
/*! @brief Maximum current USB device can draw from bus in milliamperes.*/
#define USB_DEVICE_MAX_POWER (0x64U)	

#define USB_DEVICE_CONFIGURATION_COUNT (1U)
#define USB_DEVICE_STRING_COUNT (3U)
#define USB_DEVICE_LANGUAGE_COUNT (1U)

#define USB_COMPOSITE_CONFIGURATION_INDEX (1U)
/* Length of Interface Association Descriptor in bytes */
#define USB_IAD_DESC_SIZE (8U)



/* Header Functional Descriptor, which marks the beginning of the concatenated set of functional descriptors for the interface */
#define USB_CDC_HEADER_FUNC_DESC (0x00U)
/* Call Management Functional Descriptor */
#define USB_CDC_CALL_MANAGEMENT_FUNC_DESC (0x01U)
/* Abstract Control Management Functional Descriptor */
#define USB_CDC_ABSTRACT_CONTROL_FUNC_DESC (0x02U)
/* Direct Line Management Functional Descriptor */
#define USB_CDC_DIRECT_LINE_FUNC_DESC (0x03U)
/* Telephone Ringer Functional Descriptor */
#define USB_CDC_TELEPHONE_RINGER_FUNC_DESC (0x04U)
/* Telephone Call and Line State Reporting Capabilities Functional Descriptor */
#define USB_CDC_TELEPHONE_REPORT_FUNC_DESC (0x05U)
/* Union Functional Descriptor */
#define USB_CDC_UNION_FUNC_DESC (0x06U)
/* Country Selection Functional Descriptor */
#define USB_CDC_COUNTRY_SELECT_FUNC_DESC (0x07U)
/* Telephone Operational Modes Functional Descriptor */
#define USB_CDC_TELEPHONE_MODES_FUNC_DESC (0x08U)
/* USB Terminal Functional Descriptor */
#define USB_CDC_TERMINAL_FUNC_DESC (0x09U)
/* Network Channel Terminal Descriptor */
#define USB_CDC_NETWORK_CHANNEL_FUNC_DESC (0x0AU)
/* Protocol Unit Functional Descriptor */
#define USB_CDC_PROTOCOL_UNIT_FUNC_DESC (0x0BU)
/* Extension Unit Functional Descriptor */
#define USB_CDC_EXTENSION_UNIT_FUNC_DESC (0x0CU)
/* Multi-Channel Management Functional Descriptor */
#define USB_CDC_MULTI_CHANNEL_FUNC_DESC (0x0DU)
/* CAPI Control Management Functional Descriptor */
#define USB_CDC_CAPI_CONTROL_FUNC_DESC (0x0EU)
/* Ethernet Networking Functional Descriptor */
#define USB_CDC_ETHERNET_NETWORKING_FUNC_DESC (0x0FU)
/* ATM Networking Functional Descriptor */
#define USB_CDC_ATM_NETWORKING_FUNC_DESC (0x10U)
/* Wireless Handset Control Model Functional Descriptor */
#define USB_CDC_WIRELESS_CONTROL_FUNC_DESC (0x11U)
/* Mobile Direct Line Model Functional Descriptor */
#define USB_CDC_MOBILE_DIRECT_LINE_FUNC_DESC (0x12U)
/* MDLM Detail Functional Descriptor */
#define USB_CDC_MDLM_DETAIL_FUNC_DESC (0x13U)
/* Device Management Model Functional Descriptor */
#define USB_CDC_DEVICE_MANAGEMENT_FUNC_DESC (0x14U)
/* OBEX Functional Descriptor */
#define USB_CDC_OBEX_FUNC_DESC (0x15U)
/* Command Set Functional Descriptor */
#define USB_CDC_COMMAND_SET_FUNC_DESC (0x16U)
/* Command Set Detail Functional Descriptor */
#define USB_CDC_COMMAND_SET_DETAIL_FUNC_DESC (0x17U)
/* Telephone Control Model Functional Descriptor */
#define USB_CDC_TELEPHONE_CONTROL_FUNC_DESC (0x18U)
/* OBEX Service Identifier Functional Descriptor */
#define USB_CDC_OBEX_SERVICE_ID_FUNC_DESC (0x19U)

/* Length of Header Functional Descriptor in bytes */
#define USB_DESCRIPTOR_LENGTH_CDC_HEADER_FUNC (5U)
/* Length of Call Management Functional Descriptor in bytes */
#define USB_DESCRIPTOR_LENGTH_CDC_CALL_MANAG (5U)
/* Length of Abstract Control Management Functional Descriptor in bytes */
#define USB_DESCRIPTOR_LENGTH_CDC_ABSTRACT (4U)
#define USB_DESCRIPTOR_LENGTH_INTERFACE_0_CIC_VCOM_UNION_FUNC (5U)

#define USB_DESCRIPTOR_TYPE_CDC_CS_INTERFACE (0x24U)
#define USB_DESCRIPTOR_TYPE_CDC_CS_ENDPOINT (0x25U)

#define USB_ALTERNATE_SETTING_0 (0U)

#define USB_INTERFACE_0_CIC_VCOM_CLASS (0x02U)
#define USB_INTERFACE_0_CIC_VCOM_SUBCLASS (0x02U)
#define USB_INTERFACE_0_CIC_VCOM_PROTOCOL (0x00U)
#define USB_INTERFACE_0_CIC_VCOM_INTERFACE_COUNT (2U)
#define USB_INTERFACE_0_CIC_VCOM_INDEX (0U)
#define USB_INTERFACE_0_CIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT (1U)
#define USB_INTERFACE_0_CIC_VCOM_SETTING_0_DEFAULT_INDEX USB_ALTERNATE_SETTING_0
#define USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN (1U)
#define USB_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_DIRECTION USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_IN
#define FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE (16U)
#define HS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_PACKET_SIZE (16U)
#define FS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_INTERVAL (8U)
#define HS_INTERFACE_0_CIC_VCOM_SETTING_0_EP_1_INTERRUPT_IN_INTERVAL (7U)

#define USB_INTERFACE_1_DIC_VCOM_CLASS (0x0AU)
#define USB_INTERFACE_1_DIC_VCOM_SUBCLASS (0x00U)
#define USB_INTERFACE_1_DIC_VCOM_PROTOCOL (0x00U)
#define USB_INTERFACE_1_DIC_VCOM_INTERFACE_COUNT (1U)
#define USB_INTERFACE_1_DIC_VCOM_INDEX (1U)
#define USB_INTERFACE_1_DIC_VCOM_SETTING_0_DEFAULT_ENDPOINT_COUNT (2U)
#define USB_INTERFACE_1_DIC_VCOM_SETTING_0_DEFAULT_INDEX USB_ALTERNATE_SETTING_0
#define USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN (2U)
#define USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_DIRECTION USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_IN
#define FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE (64U)
#define HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_PACKET_SIZE (512U)
#define FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_INTERVAL (0U)
#define HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_2_BULK_IN_INTERVAL (0U)
#define USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT (1U)
#define USB_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_DIRECTION USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_OUT
#define FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE (64U)
#define HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_PACKET_SIZE (512U)
#define FS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_INTERVAL (0U)
#define HS_INTERFACE_1_DIC_VCOM_SETTING_0_EP_1_BULK_OUT_INTERVAL (0U)

#define USB_INTERFACE_2_MSC_RAM_DISK_CLASS (0x08U)
#define USB_INTERFACE_2_MSC_RAM_DISK_SUBCLASS (0x06U)
#define USB_INTERFACE_2_MSC_RAM_DISK_PROTOCOL (0x50U)
#define USB_INTERFACE_2_MSC_RAM_DISK_INTERFACE_COUNT (1U)
#define USB_INTERFACE_2_MSC_RAM_DISK_INDEX (2U)
#define USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_DEFAULT_ENDPOINT_COUNT (2U)
#define USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_DEFAULT_INDEX USB_ALTERNATE_SETTING_0
#define USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN (3U)
#define USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_DIRECTION USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_IN
#define FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE (64U)
#define HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_PACKET_SIZE (512U)
#define FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_INTERVAL (0U)
#define HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_3_BULK_IN_INTERVAL (0U)
#define USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT (2U)
#define USB_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_DIRECTION USB_DESCRIPTOR_ENDPOINT_ADDRESS_DIRECTION_OUT
#define FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE (64U)
#define HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_PACKET_SIZE (512U)
#define FS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_INTERVAL (0U)
#define HS_INTERFACE_2_MSC_RAM_DISK_SETTING_0_EP_2_BULK_OUT_INTERVAL (0U)

#define USB_DESCRIPTOR_LENGTH_CONFIGURATION_ALL (sizeof(g_UsbDeviceConfigurationDescriptor))



#define USB_DESCRIPTOR_LENGTH_STRING0 (sizeof(g_UsbDeviceString0))
#define USB_DESCRIPTOR_LENGTH_STRING1 (sizeof(g_UsbDeviceString1))
#define USB_DESCRIPTOR_LENGTH_STRING2 (sizeof(g_UsbDeviceString2))

#define USB_COMPOSITE_INTERFACE_COUNT (USB_INTERFACE_0_CIC_VCOM_INTERFACE_COUNT + USB_INTERFACE_2_MSC_RAM_DISK_INTERFACE_COUNT)

/*******************************************************************************
 * API
 ******************************************************************************/

/*!
* @brief Configure the device according to the USB speed.
*
* Due to the difference of HS and FS descriptors, the device descriptors and configurations need to be updated to match
* the current speed.
* As the default, the device descriptors and configurations are configured by using FS parameters for both EHCI and
* KHCI.
* When the EHCI is enabled, the application needs to call this fucntion to update device by using current speed.
* The updated information includes endpoint max packet size, endpoint interval, etc.
*
* @param usb_device_handle Handle to USB device.
* @param uint8_t Value contains information on speed in coded form:
* @verbatim
*    0 - full speed
*    1 - low speed
*    2 - high speed
* @endverbatim
* @retval kStatus_USB_Success Function always returns kStatus_USB_Success value.
*/
usb_status_t USB_DeviceSetSpeed(usb_device_handle handle, uint8_t speed);

#if (defined(USB_DEVICE_CONFIG_CV_TEST) && (USB_DEVICE_CONFIG_CV_TEST > 0U))
/*!
* @brief Get device qualifier descriptor request.
*
* @param usb_device_handle Handle to USB device.
* @param usb_device_get_device_qualifier_descriptor_struct_t USB device qualifier descriptor request structure that will be set by this function.
* @retval kStatus_USB_Success Function always returns kStatus_USB_Success value.
*/
usb_status_t USB_DeviceGetDeviceQualifierDescriptor(
    usb_device_handle handle, usb_device_get_device_qualifier_descriptor_struct_t *deviceQualifierDescriptor);
#endif

/*!
* @brief Gets device descriptor request.
*
* @param usb_device_handle Handle to USB device.
* @param usb_device_get_configuration_descriptor_struct_t USB device descriptor request structure.
* @retval kStatus_USB_Success Function always returns kStatus_USB_Success value.
*/
usb_status_t USB_DeviceGetDeviceDescriptor(usb_device_handle handle,
                                           usb_device_get_device_descriptor_struct_t *deviceDescriptor);

/*!
* @brief Get device configuration descriptor request .
*
* @param usb_device_handle Handle to USB device.
* @param usb_device_get_configuration_descriptor_struct_t USB device configuration descriptor request structure that will be set by this function.
* @retval kStatus_USB_Success Function always returns kStatus_USB_Success value.
*/
usb_status_t USB_DeviceGetConfigurationDescriptor(
    usb_device_handle handle, usb_device_get_configuration_descriptor_struct_t *configurationDescriptor);

/*!
* @brief Get device string descriptor request.
*
* @param usb_device_handle Handle to USB device.
* @param usb_device_get_string_descriptor_struct_t USB device string descriptor request structure that will be set by this function.
* @retval kStatus_USB_Success Function always returns kStatus_USB_Success value.
*/
usb_status_t USB_DeviceGetStringDescriptor(usb_device_handle handle,
                                           usb_device_get_string_descriptor_struct_t *stringDescriptor);

#endif /* __USB_DEVICE_DESCRIPTOR_H__ */
