/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_H_

#define _PANEL_ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config atu_l23_va_txd_inx_hx8394f_5p7_hd_video_panel_data = {
        "lcdkit_atu_l23_va_txd_inx_hx8394f_5p7_hd_video", "dsi:0:", 
        "txd_inx_hx8394f_5p7_hd_video", 10, 0, "DISPLAY_1", 0, 667000000, 
        60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution atu_l23_va_txd_inx_hx8394f_5p7_hd_video_panel_res = {
        720, 1440, 170, 35, 20, 0, 16, 12, 4, 0, 0, 0, 0, 0, 0, 0, 
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info atu_l23_va_txd_inx_hx8394f_5p7_hd_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd0[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB9, 0xFF, 0x83, 0x94,
   };


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd1[] = {
    0x07, 0x00, 0x39, 0xC0,
    0xBA, 0x62, 0x03, 0x68,
    0x6B, 0xB2, 0xC0, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd2[] = {
    0x0B, 0x00, 0x39, 0xC0,
    0xB1, 0x48, 0x16, 0x76,
    0x09, 0x32, 0x54, 0x71,
    0x51, 0x57, 0x43, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd3[] = {
    0x07, 0x00, 0x39, 0xC0,
    0xB2, 0x00, 0x80, 0x78,
    0x0C, 0x0D, 0x22, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd4[] = {
    0x16, 0x00, 0x39, 0xC0,
    0xB4, 0x69, 0x6A, 0x69,
    0x6A, 0x69, 0x6A, 0x01,
    0x0C, 0x7C, 0x55, 0x00,
    0x3F, 0x69, 0x6A, 0x69,
    0x6A, 0x69, 0x6A, 0x01,
    0x0C, 0x7C, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd5[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xB6, 0x6E, 0x6E, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd6[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xD2, 0x99, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd7[] = {
    0x22, 0x00, 0x39, 0xC0,
    0xD3, 0x00, 0x00, 0x07,
    0x07, 0x40, 0x07, 0x0C,
    0x00, 0x08, 0x10, 0x08,
    0x00, 0x08, 0x54, 0x15,
    0xAA, 0x05, 0xAA, 0x02,
    0x15, 0x06, 0x05, 0x06,
    0x47, 0x44, 0x0A, 0x0A,
    0x4B, 0x10, 0x07, 0x07,
    0x0C, 0x40, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd8[] = {
    0x2D, 0x00, 0x39, 0xC0,
    0xD5, 0x1C, 0x1C, 0x1D,
    0x1D, 0x00, 0x01, 0x02,
    0x03, 0x04, 0x05, 0x06,
    0x07, 0x08, 0x09, 0x0A,
    0x0B, 0x24, 0x25, 0x18,
    0x18, 0x26, 0x27, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x20,
    0x21, 0x18, 0x18, 0x18,
    0x18, 0xFF, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd9[] = {
    0x2D, 0x00, 0x39, 0xC0,
    0xD6, 0x1C, 0x1C, 0x1D,
    0x1D, 0x0B, 0x0A, 0x09,
    0x08, 0x07, 0x06, 0x05,
    0x04, 0x03, 0x02, 0x01,
    0x00, 0x21, 0x20, 0x18,
    0x18, 0x27, 0x26, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x25,
    0x24, 0x18, 0x18, 0x18,
    0x18, 0xFF, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd10[] = {
    0x3B, 0x00, 0x39, 0xC0,
    0xE0, 0x00, 0x03, 0x08,
    0x0D, 0x0F, 0x12, 0x16,
    0x14, 0x29, 0x39, 0x49,
    0x47, 0x4E, 0x5D, 0x60,
    0x63, 0x70, 0x74, 0x71,
    0x81, 0x92, 0x49, 0x47,
    0x4B, 0x4E, 0x51, 0x55,
    0x58, 0x7F, 0x00, 0x03,
    0x08, 0x0D, 0x0F, 0x12,
    0x16, 0x14, 0x29, 0x39,
    0x49, 0x47, 0x4D, 0x5D,
    0x5F, 0x62, 0x6F, 0x72,
    0x70, 0x81, 0x93, 0x49,
    0x48, 0x4B, 0x4E, 0x51,
    0x56, 0x59, 0x7F, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd11[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xC0, 0x1F, 0x31, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd12[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xCC, 0x0B, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd13[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xD4, 0x02, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd14[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd15[] = {
    0x0D, 0x00, 0x39, 0xC0,
    0xD8, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd16[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd17[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd18[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xB1, 0x00, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd19[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd20[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xC6, 0xED, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd21[] = {
    0x08, 0x00, 0x39, 0xC0,
    0xC9, 0x0B, 0x01, 0xAA,
    0x1E, 0xB1, 0x1E, 0x00,
   };


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd22[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x55, 0x00, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd23[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x53, 0x2C, 0xFF, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd24[] = {
    0x11, 0x00, 0x05, 0x80};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd25[] = {
    0x29, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_command[] = {
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd0, 0x00},
{0xc, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd1, 0x00},
{0x10, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd2, 0x00},
{0xc, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd3, 0x00},
{0x1c, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd4, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd5, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd6, 0x00},
{0x28, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd7, 0x00},
{0x34, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd8, 0x00},
{0x34, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd9, 0x00},
{0x40, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd10, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd11, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd12, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd13, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd14, 0x00},
{0x14, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd15, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd16, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd17, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd18, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd19, 0x00},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd20, 0x00},
{0xc, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd21, 0x05},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd22, 0x05},
{0x8, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd23, 0x00},
{0x4, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd24, 0x78},
{0x4, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_on_cmd25, 0x14}
};
#define ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_ON_COMMAND 26


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_off_cmd1[] = {
    0x0B, 0x00, 0x39, 0xC0,
    0xB1, 0x48, 0x16, 0x76,
    0x09, 0x32, 0x54, 0x71,
    0x51, 0x57, 0x0D, 0xFF};


static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_off_cmd2[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd atu_l23_va_txd_inx_hx8394f_5p7_hd_video_off_command[] = {
{0x4, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_off_cmd0, 0x14},
{0x10, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_off_cmd1, 0x00},
{0x4, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_off_cmd2, 0x78}
};
#define ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_OFF_COMMAND 3


static struct command_state atu_l23_va_txd_inx_hx8394f_5p7_hd_video_state = {
        0, 1 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info atu_l23_va_txd_inx_hx8394f_5p7_hd_video_command_panel = {
        1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info atu_l23_va_txd_inx_hx8394f_5p7_hd_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration atu_l23_va_txd_inx_hx8394f_5p7_hd_video_lane_config = {
        3, 0, 1, 1, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t atu_l23_va_txd_inx_hx8394f_5p7_hd_video_timings[]= {
        0xB4, 0x2A, 0x1C, 0x00, 0x54, 0x58, 0x20, 0x2E, 0x20, 0x03, 0x04, 0x00 
};

static struct panel_timing atu_l23_va_txd_inx_hx8394f_5p7_hd_video_timing_info = {
        0, 4, 0x03, 0x23 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence atu_l23_va_txd_inx_hx8394f_5p7_hd_video_reset_seq = {
    { 1, 0, 1, }, { 2, 2, 10, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight atu_l23_va_txd_inx_hx8394f_5p7_hd_video_backlight = {
        2, 2, 255, 1, 2, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc atu_l23_va_txd_inx_hx8394f_5p7_hd_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 2, 2, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int atu_l23_va_txd_inx_hx8394f_5p7_hd_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int atu_l23_va_txd_inx_hx8394f_5p7_hd_video_dsi_pll_type  = DSI_PLL_TYPE_28NM;

int atu_l23_va_txd_inx_hx8394f_5p7_hd_video_mipi_signature  = 0xffff;

static const uint32_t atu_l23_va_txd_inx_hx8394f_5p7_hd_video_regulator_setting[]= {
        0x03, 0x08, 0x07, 0x00, 0x20, 0x07, 0x01 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config atu_l23_va_txd_inx_hx8394f_5p7_hd_video_panel_platform_config = {
        3, 1, 0, 0, 0, 0, 0x200, 0x20, 0, 99, 0, 60, 0, 0, 0, 124, 
        127, 98, 0, 0, 0, 0, 5500000, 5500000, 70, 20, 0, 0, 0, 1, 0, 
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info atu_l23_va_txd_inx_hx8394f_5p7_hd_video_panel_misc_info = {
        0, 0, 0, 0x01, 0x04, 0x01, 0x01, 1, 0, 1 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl atu_l23_va_txd_inx_hx8394f_5p7_hd_video_panel_delay_ctrl = {
        0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 0, 20, 0, 50 
};

static char atu_l23_va_txd_inx_hx8394f_5p7_hd_video_backlight_cmd0[] = {
    0x51, 0x00, 0x15, 0x80};




static struct mipi_dsi_cmd atu_l23_va_txd_inx_hx8394f_5p7_hd_video_backlight_command[] = {
{0x4, atu_l23_va_txd_inx_hx8394f_5p7_hd_video_backlight_cmd0, 0x00}
};
#define ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_BACKLIGHT_COMMAND 1


static struct lcd_bias_voltage_info atu_l23_va_txd_inx_hx8394f_5p7_hd_video_bias_ic0 = {
"hw_sm5109", 0x3e, 2, 1, 0x0c, 0x00, 0x01, 0x31, 0x11, 0x3f, 0x1f, 0x03, 0x03, 0xc3, 0x03, 0x43, 0x43, 0x00, 0x00, 0x00, 0
};
static struct lcd_bias_voltage_info atu_l23_va_txd_inx_hx8394f_5p7_hd_video_bias_ic1 = {
"hw_ocp2131", 0x3e, 2, 1, 0x06, 0x00, 0x01, 0x11, 0x11, 0x1f, 0x1f, 0x03, 0x33, 0x33, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0
};

static struct lcd_bias_voltage_info * atu_l23_va_txd_inx_hx8394f_5p7_hd_video_bias_ic_array[] = {
&atu_l23_va_txd_inx_hx8394f_5p7_hd_video_bias_ic0,
&atu_l23_va_txd_inx_hx8394f_5p7_hd_video_bias_ic1
};

#define ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_BIAS_IC_ARRAY 2


static struct backlight_ic_info * atu_l23_va_txd_inx_hx8394f_5p7_hd_video_backlight_ic_array[0];
 
#define ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_ATU_L23_VA_TXD_INX_HX8394F_5P7_HD_VIDEO_H_*/
