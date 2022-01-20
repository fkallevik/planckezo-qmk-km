/* Copyright 2015-2021 Jack Humbert
 * Copyright 2022 Fredrik Kallevik
 *
 * This file is part of planckezo-qmk-km.
 *
 * planckezo-qmk-km is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * planckezo-qmk-km is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with planckezo-qmk-km. If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

// Disable startup song
#ifdef AUDIO_ENABLE
#define STARTUP_SONG SONG(NO_SOUND)
#endif

// Most tactile encoders (for rotary knobs etc) have detents every 4 stages
#define ENCODER_RESOLUTION 4

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

// Set the number of milliseconde to pause after sending a wakeup packet
#define USB_SUSPEND_WAKEUP_DELAY 0

// Set the default animation speed
#define RGB_MATRIX_STARTUP_SPD 126
