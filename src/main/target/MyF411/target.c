/*
* This file is part of Cleanflight.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdbool.h>
#include <platform.h>

#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {
    // ========== 电机（4 路，空心杯 MOS） ==========
    // Motor 1
    DEF_TIM(TIM2, CH1, PA0, TIM_USE_MOTOR, 0, 0),

    // Motor 2
    DEF_TIM(TIM2, CH2, PA1, TIM_USE_MOTOR, 0, 0),

    // Motor 3
    DEF_TIM(TIM3, CH1, PA6, TIM_USE_MOTOR, 0, 0),

    // Motor 4
    DEF_TIM(TIM3, CH2, PA7, TIM_USE_MOTOR, 0, 0),

    // ========== 舵机（2 路，硬件 PWM） ==========
    // Servo 1
    DEF_TIM(TIM4, CH3, PB8, TIM_USE_SERVO, 0, 0),

    // Servo 2
    DEF_TIM(TIM4, CH4, PB9, TIM_USE_SERVO, 0, 0),
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);