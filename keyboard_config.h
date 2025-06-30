  /*
Copyright 2018-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"


#define KEYBOARD_SIDE SINGLE
// CHANGE THIS FOR THE KEYBOARD TO MATCH WHAT IS BEING FLASHED. OPTIONS: LEFT  RIGHT  SINGLE

// #define DEVICE_NAME_R                         "ErgoTravelBLE_R"                          /**< Name of device. Will be included in the advertising data. */
// #define DEVICE_NAME_L                        "ErgoTravelBLE_L"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_M                         "fc660BLE"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "fc660BLE_V1"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "diy"                      /**< Manufacturer. Will be passed to Device Information Service. */



// #if KEYBOARD_SIDE == RIGHT
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K12, K13, K14, K15, K11, K16, K17, \
    K20, K21, K22, K23, K24, K25, K26, K27, K32, K33, K34, K35, K31, K36, K37, \
    K40, K41, K42, K43, K44, K45, K46, K47, K52, K53, K54, K55, K51, \
    K60, K61, K62, K63, K64, K65, K66, K67, K72, K73, K74, K75, K76, \
    K80, K81, K82,           K85,                K93, K94, K95, K91, K96, K97 \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { KC_NO, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { KC_NO, K31, K32, K33, K34, K35, K36, K37 }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { KC_NO, K51, K52, K53, K54, K55, KC_NO, KC_NO }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { KC_NO, KC_NO, K72, K73, K74, K75, K76, KC_NO } \
    { K80, K81, K82, KC_NO, KC_NO, K85, KC_NO, KC_NO }, \
    { KC_NO, K91, KC_NO, K93, K94, K95, K96, K97 } \
}
// #else
// #define KEYMAP( \
//       k00, k01, k02, k03, k04, k05, k06, \
//       k10, k11, k12, k13, k14, k15, k16, \
//       k20, k21, k22, k23, k24, k25, k26, \
//       k30, k31, k32, k33, k34, k35,  k36 \
// ) \
// { \
//     { k00, k01, k02, k03, k04, k05, k06 }, \
//     { k10, k11, k12, k13, k14, k15, k16 }, \
//     { k20, k21, k22, k23, k24, k25, k26 }, \
//     { k30, k31, k32, k33, k34, k35, k36 } \
// } 

// #endif

#endif /* KEYBOARD_CONFIG_H */
