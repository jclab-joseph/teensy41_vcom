################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include utilities/subdir.mk
-include usb/phy/subdir.mk
-include usb/device/source/ehci/subdir.mk
-include usb/device/source/subdir.mk
-include usb/device/class/msc/subdir.mk
-include usb/device/class/cdc/subdir.mk
-include usb/device/class/subdir.mk
-include startup/subdir.mk
-include source/generated/subdir.mk
-include source/subdir.mk
-include freertos/freertos_kernel/portable/MemMang/subdir.mk
-include freertos/freertos_kernel/portable/GCC/ARM_CM4F/subdir.mk
-include freertos/freertos_kernel/subdir.mk
-include drivers/subdir.mk
-include device/subdir.mk
-include component/uart/subdir.mk
-include component/serial_manager/subdir.mk
-include component/osa/subdir.mk
-include component/lists/subdir.mk
-include board/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: appnkey-firmware-dev01.axf

# Tool invocations
appnkey-firmware-dev01.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -Xlinker -Map="appnkey-firmware-dev01.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -T appnkey-firmware-dev01_Debug.ld -o "appnkey-firmware-dev01.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) appnkey-firmware-dev01.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "appnkey-firmware-dev01.axf" ; arm-none-eabi-objcopy -v -O ihex "appnkey-firmware-dev01.axf" "appnkey-firmware-dev01.hex" ; # arm-none-eabi-objcopy -v -O binary "appnkey-firmware-dev01.axf" "appnkey-firmware-dev01.bin" ; # checksum -p MIMXRT1062xxxxA -d "appnkey-firmware-dev01.bin"
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
