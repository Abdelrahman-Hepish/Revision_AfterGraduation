################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
HelloSTM32.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
HelloSTM32.list \

OBJCOPY_BIN += \
HelloSTM32.bin \


# All Target
all: HelloSTM32.elf secondary-outputs

# Tool invocations
HelloSTM32.elf: $(OBJS) $(USER_OBJS) E:\After\ Graduation\Revision_AfterGraduation\Embedded\ C\STM32_WS\HelloSTM32\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "HelloSTM32.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\After Graduation\Revision_AfterGraduation\Embedded C\STM32_WS\HelloSTM32\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="HelloSTM32.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

HelloSTM32.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "HelloSTM32.list"
	@echo 'Finished building: $@'
	@echo ' '

HelloSTM32.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "HelloSTM32.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
