/********************************************************************************
 * class        Setting periphery for MPPT controller                           *
 *                                                                              *
 * file         Periphery.h                                                     *
 * author       Ilya Galkin                                                     *
 * date         30.05.2020                                                      *
 *                                                                              *
 ********************************************************************************/

#pragma once

/********************************************************************************
 * Include 
 ********************************************************************************/

#include "Led.h"
#include "Hrpwm.h"
#include "Clock.h"
#include "Adc.h"

/********************************************************************************
 * Class Periphery
 ********************************************************************************/

class Periphery {
    public:
        static void Init() {
            Periphery::ResetHrpwmChannel();
            Clock::Init();
            Led::Init();
            Hrpwm::Init();
            Adc::Init();
        }

    private:
        static void ResetHrpwmChannel() {
            Gpio::Init<8,9>(GPIOA, Gpio::Mode::output, Gpio::Type::PP); 
            Gpio::Reset<8,9>(GPIOA);
        }
};