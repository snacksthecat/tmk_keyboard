/*
    ChibiOS - (C) 2015-2016 flabbergast <s3+flabbergast@sdfeu.org>

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for a custom KL27Z breakout board.
 */

/*
 * Board identifier.
 */
#define BOARD_KL27Z_BREAKOUT
#define BOARD_NAME                  "Custom KL27Z breakout"

/*
 * MCU type
 */
#define KL27Zxxx

/*
 * Onboard features.
 */
//#define GPIO_LED    IOPORT1
//#define PIN_LED     2
// PTD7 on ELF
#define GPIO_LED    IOPORT4
#define PIN_LED     7
#define GPIO_BUTTON IOPORT1
#define PIN_BUTTON  4

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
