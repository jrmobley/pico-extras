/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/scanvideo.h"

// todo support for inverted-y (probably belongs in the scanline generators, as would inverted x)

const scanvideo_timing_t vga_timing_640x480_60_default =
        {
                .clock_freq = 25000000,

                .h_active = 640,
                .v_active = 480,

                .h_front_porch = 16,
                .h_pulse = 64,
                .h_total = 800,
                .h_sync_polarity = 1,

                .v_front_porch = 1,
                .v_pulse = 2,
                .v_total = 523,
                .v_sync_polarity = 1,

                .enable_clock = 0,
                .clock_polarity = 0,

                .enable_den = 0
        };

const scanvideo_mode_t vga_mode_160x120_60 =
        {
                .default_timing = &vga_timing_640x480_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 160,
                .height = 120,
                .xscale = 4,
                .yscale = 4,
        };

const scanvideo_mode_t vga_mode_213x160_60 =
        {
                .default_timing = &vga_timing_640x480_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 213,
                .height = 160,
                .xscale = 3,
                .yscale = 3,
        };

const scanvideo_mode_t vga_mode_320x240_60 =
        {
                .default_timing = &vga_timing_640x480_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 320,
                .height = 240,
                .xscale = 2,
                .yscale = 2,
        };

const scanvideo_mode_t vga_mode_640x480_60 =
        {
                .default_timing = &vga_timing_640x480_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 640,
                .height = 480,
                .xscale = 1,
                .yscale = 1,
        };

/* Requires 130Mhz system clock, but standard XGA mode */
const scanvideo_timing_t vga_timing_1024x768_60_default =
        {
                .clock_freq = 65000000,

                .h_active = 1024,
                .v_active = 768,

                .h_front_porch = 24,
                .h_pulse = 136,
                .h_total = 1344,
                .h_sync_polarity = 0,

                .v_front_porch = 3,
                .v_pulse = 6,
                .v_total = 806,
                .v_sync_polarity = 1,

                .enable_clock = 0,
                .clock_polarity = 0,

                .enable_den = 0
        };

const scanvideo_mode_t vga_mode_1024x768_60 =
        {
                .default_timing = &vga_timing_1024x768_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 1024,
                .height = 768,
                .xscale = 1,
                .yscale = 1,
        };

const scanvideo_timing_t vga_timing_1280x720_60_default =
        {
                .clock_freq = 74250000,

                .h_active = 1280,
                .v_active = 720,

                .h_front_porch = 110,
                .h_pulse = 40,
                .h_total = 1650,
                .h_sync_polarity = 1,

                .v_front_porch = 5,
                .v_pulse = 5,
                .v_total = 750,
                .v_sync_polarity = 1,

                .enable_clock = 0,
                .clock_polarity = 0,

                .enable_den = 0
        };


const scanvideo_mode_t vga_mode_720p_60 =
        {
                .default_timing = &vga_timing_1280x720_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 1280,
                .height = 720,
                .xscale = 1,
                .yscale = 1,
        };

const scanvideo_timing_t vga_timing_1920x1080_60_default =
        {
                .clock_freq = 148500000,

                .h_active = 1920,
                .v_active = 1080,

                .h_front_porch = 88,
                .h_pulse = 44,
                .h_total = 2200,
                .h_sync_polarity = 1,

                .v_front_porch = 4,
                .v_pulse = 5,
                .v_total = 1125,
                .v_sync_polarity = 1,

                .enable_clock = 0,
                .clock_polarity = 0,

                .enable_den = 0
        };


const scanvideo_mode_t vga_mode_1080p_60 =
        {
                .default_timing = &vga_timing_1920x1080_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 1920,
                .height = 1080,
                .xscale = 1,
                .yscale = 1,
        };

const scanvideo_timing_t vga_timing_1280x1024_60_default =
        {
                .clock_freq = 108000000,

                .h_active = 1280,
                .v_active = 1024,

                .h_front_porch = 48,
                .h_pulse = 112,
                .h_total = 1688,
                .h_sync_polarity = 0,

                .v_front_porch = 1,
                .v_pulse = 3,
                .v_total = 1066,
                .v_sync_polarity = 0,
};

const scanvideo_mode_t vga_mode_1280x1024_60 =
        {
                .default_timing = &vga_timing_1920x1080_60_default,
                .pio_program = &video_24mhz_composable,
                .width = 1280,
                .height = 1024,
                .xscale = 1,
                .yscale = 1,
        };
