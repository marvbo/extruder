################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Regelung/pid_controller.c 

OBJS += \
./Core/Src/Regelung/pid_controller.o 

C_DEPS += \
./Core/Src/Regelung/pid_controller.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Regelung/%.o Core/Src/Regelung/%.su Core/Src/Regelung/%.cyclo: ../Core/Src/Regelung/%.c Core/Src/Regelung/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Regelung

clean-Core-2f-Src-2f-Regelung:
	-$(RM) ./Core/Src/Regelung/pid_controller.cyclo ./Core/Src/Regelung/pid_controller.d ./Core/Src/Regelung/pid_controller.o ./Core/Src/Regelung/pid_controller.su

.PHONY: clean-Core-2f-Src-2f-Regelung

