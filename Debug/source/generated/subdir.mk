################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/generated/usb_device_composite.c \
../source/generated/usb_device_descriptor.c 

OBJS += \
./source/generated/usb_device_composite.o \
./source/generated/usb_device_descriptor.o 

C_DEPS += \
./source/generated/usb_device_composite.d \
./source/generated/usb_device_descriptor.d 


# Each subdirectory must supply rules for building sources it contributes
source/generated/%.o: ../source/generated/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_MIMXRT1062DVJ6A -DCPU_MIMXRT1062DVJ6A_cm7 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DSDK_OS_FREE_RTOS -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\board" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\source" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\source\generated" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\freertos\freertos_kernel\include" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\freertos\template\ARM_CM4F" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\drivers" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\component\serial_manager" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\component\uart" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\utilities" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\include" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\device\class\msc" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\output\source\device\class" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\device\class" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\device\source" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\output\source\device" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\device\include" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\phy" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\device\source\ehci" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\usb\device\class\cdc" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\component\lists" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\component\osa" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\CMSIS" -I"C:\Users\jic57\Documents\MCUXpressoIDE_11.4.1_6260\workspace\appnkey-firmware-dev01\device" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


