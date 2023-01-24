/*
 * 2020 - Karl Palsson <karlp@tweak.net.au>
 * Considered to be released into the public domain, or where not available
 * under your choice of the following spdx identifiers:
 * MIT, ISC, Apache-2.0, BSD-1-Clause, BSD-2-Clause, BSD-3-Clause,
 * CC-BY-4.0, GPL-2.0-or-later, LGPL-2.0-or-later
 * Pick whatever makes your integration life easier
 *
 * defauly config.h settings
 */

#pragma once

#define APP_BASE_ADDRESS (0x08000000 + BOOTLOADER_OFFSET)
#define DFU_UPLOAD_AVAILABLE 1
#define DFU_DOWNLOAD_AVAILABLE 1
#define TARGET_DFU_WTRANSFERSIZE 64

#define HAVE_LED 1
#define LED_GPIO_PORT GPIOA
#define LED_GPIO_PIN  GPIO9
#define LED_OPEN_DRAIN 1
#define USES_GPIOA 1

#define HAVE_BUTTON 1
#define BUTTON_GPIO_PORT GPIOC
#define BUTTON_GPIO_PIN  GPIO4
#define BUTTON_ACTIVE_HIGH 0
#define USES_GPIOC 1
#define BUTTON_SAMPLE_DELAY_CYCLES 0

#define HAVE_USB_PULLUP_CONTROL 0
