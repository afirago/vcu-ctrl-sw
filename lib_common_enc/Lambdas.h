/******************************************************************************
*
* Copyright (C) 2019 Allegro DVT2.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX OR ALLEGRO DVT2 BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of  Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
*
* Except as contained in this notice, the name of Allegro DVT2 shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Allegro DVT2.
*
******************************************************************************/

/****************************************************************************
   -----------------------------------------------------------------------------
****************************************************************************/
#pragma once

#include "lib_rtos/types.h"
#include "lib_common_enc/EncChanParam.h"
#define LDA_TABLE_SIZE 208

static const AL_TBufInfo EP1_BUF_LAMBDAS =
{
  1, 256, 0
}; // only 208 bytes used

typedef uint8_t AL_TLambdas[4];

typedef uint8_t TLambdasTable[LDA_TABLE_SIZE];

static const TLambdasTable DEFAULT_LDA_TABLE =
{
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02,
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
  0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07,
  0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x09, 0x0A, 0x0A,
  0x0A, 0x0A, 0x0A, 0x0B, 0x0B, 0x0B, 0x0D, 0x0D, 0x0D, 0x0D, 0x0E, 0x0E, 0x0E,
  0x0E, 0x10, 0x10, 0x10, 0x10, 0x12, 0x12, 0x12, 0x12, 0x14, 0x14, 0x14, 0x14,
  0x17, 0x17, 0x17, 0x17, 0x19, 0x19, 0x19, 0x19, 0x1D, 0x1D, 0x1D, 0x1D, 0x20,
  0x20, 0x20, 0x20, 0x24, 0x24, 0x24, 0x24, 0x28, 0x28, 0x28, 0x28, 0x2D, 0x2D,
  0x2D, 0x2D, 0x33, 0x33, 0x33, 0x33, 0x39, 0x39, 0x39, 0x39, 0x40, 0x40, 0x40,
  0x40, 0x48, 0x48, 0x48, 0x48, 0x51, 0x51, 0x51, 0x51, 0x5B, 0x5B, 0x5B, 0x5B,
};

static const TLambdasTable AVC_DEFAULT_LDA_TABLE =
{
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x02, 0x01,
  0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02,
  0x03, 0x02, 0x02, 0x02,
  0x03, 0x02, 0x03, 0x02,
  0x03, 0x03, 0x03, 0x03,
  0x04, 0x03, 0x03, 0x03,
  0x04, 0x03, 0x03, 0x03,
  0x04, 0x03, 0x04, 0x03,
  0x05, 0x04, 0x04, 0x04,
  0x06, 0x04, 0x05, 0x04,
  0x06, 0x05, 0x05, 0x05,
  0x07, 0x05, 0x06, 0x05,
  0x08, 0x06, 0x06, 0x06,
  0x09, 0x06, 0x07, 0x06,
  0x0A, 0x07, 0x08, 0x07,
  0x0B, 0x08, 0x09, 0x08,
  0x0D, 0x09, 0x0A, 0x09,
  0x0E, 0x0A, 0x0B, 0x0A,
  0x10, 0x0B, 0x0C, 0x0B,
  0x12, 0x0D, 0x0E, 0x0D,
  0x14, 0x0E, 0x0F, 0x0E,
  0x17, 0x0F, 0x11, 0x0F,
  0x19, 0x11, 0x13, 0x11,
  0x1D, 0x13, 0x15, 0x13,
  0x20, 0x15, 0x18, 0x15,
  0x24, 0x18, 0x1B, 0x18,
  0x28, 0x1B, 0x1E, 0x1B,
  0x2D, 0x1E, 0x22, 0x1E,
  0x33, 0x21, 0x26, 0x21,
  0x39, 0x25, 0x2A, 0x25,
  0x40, 0x2A, 0x30, 0x2A,
  0x48, 0x2F, 0x35, 0x2F,
  0x51, 0x35, 0x3C, 0x35,
  0x5B, 0x3B, 0x43, 0x3B,
};

static const TLambdasTable HEVC_DEFAULT_LDA_TABLE =
{
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01,
  0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01,
  0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02,
  0x03, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x04,
  0x04, 0x02, 0x03, 0x04, 0x04, 0x03, 0x03, 0x04, 0x05, 0x03, 0x03, 0x04,
  0x05, 0x03, 0x03, 0x04, 0x06, 0x03, 0x04, 0x04, 0x07, 0x04, 0x04, 0x08,
  0x08, 0x04, 0x05, 0x08, 0x09, 0x05, 0x05, 0x08, 0x0A, 0x05, 0x06, 0x08,
  0x0C, 0x06, 0x06, 0x08, 0x0C, 0x06, 0x07, 0x10, 0x10, 0x07, 0x08, 0x10,
  0x12, 0x08, 0x09, 0x10, 0x15, 0x09, 0x0A, 0x10, 0x18, 0x0A, 0x0B, 0x10,
  0x1B, 0x0B, 0x0C, 0x10, 0x1E, 0x0C, 0x0E, 0x20, 0x22, 0x0E, 0x0F, 0x20,
  0x26, 0x0F, 0x11, 0x20, 0x2A, 0x11, 0x13, 0x20, 0x30, 0x13, 0x15, 0x20,
  0x35, 0x15, 0x18, 0x20, 0x3C, 0x18, 0x1B, 0x40, 0x43, 0x1B, 0x1E, 0x40,
  0x4B, 0x1E, 0x22, 0x40, 0x54, 0x21, 0x26, 0x40, 0x5F, 0x25, 0x2A, 0x40,
  0x6A, 0x2A, 0x30, 0x40, 0x77, 0x2F, 0x35, 0x80, 0x85, 0x35, 0x3C, 0x80,
  0x96, 0x3B, 0x43, 0x80,
};

static const TLambdasTable VP9_DEFAULT_LDA_TABLE =
{
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x02, 0x02, 0x02,
  0x01, 0x02, 0x02, 0x02,
  0x01, 0x02, 0x02, 0x02,
  0x01, 0x02, 0x02, 0x02,
  0x01, 0x02, 0x02, 0x02,
  0x01, 0x03, 0x03, 0x03,
  0x02, 0x03, 0x03, 0x03,
  0x02, 0x03, 0x03, 0x03,
  0x02, 0x03, 0x03, 0x03,
  0x02, 0x03, 0x03, 0x03,
  0x02, 0x03, 0x03, 0x03,
  0x02, 0x04, 0x04, 0x04,
  0x03, 0x04, 0x04, 0x04,
  0x03, 0x04, 0x04, 0x04,
  0x03, 0x04, 0x04, 0x04,
  0x03, 0x05, 0x05, 0x05,
  0x04, 0x05, 0x05, 0x05,
  0x04, 0x05, 0x05, 0x05,
  0x05, 0x06, 0x06, 0x06,
  0x05, 0x06, 0x06, 0x06,
  0x06, 0x06, 0x06, 0x06,
  0x07, 0x07, 0x07, 0x07,
  0x08, 0x08, 0x08, 0x08,
  0x09, 0x08, 0x08, 0x08,
  0x0A, 0x09, 0x09, 0x09,
  0x0C, 0x0A, 0x0A, 0x0A,
  0x0E, 0x0B, 0x0B, 0x0B,
  0x10, 0x0B, 0x0B, 0x0B,
  0x12, 0x0C, 0x0C, 0x0C,
  0x15, 0x0E, 0x0E, 0x0E,
  0x18, 0x0F, 0x0F, 0x0F,
  0x1B, 0x11, 0x11, 0x11,
  0x1E, 0x12, 0x12, 0x12,
  0x22, 0x14, 0x14, 0x14,
  0x26, 0x15, 0x15, 0x15,
  0x2A, 0x18, 0x18, 0x18,
  0x30, 0x1B, 0x1B, 0x1B,
  0x35, 0x1C, 0x1C, 0x1C,
  0x3C, 0x1F, 0x1F, 0x1F,
  0x43, 0x23, 0x23, 0x23,
  0x4B, 0x26, 0x26, 0x26,
  0x54, 0x2A, 0x2A, 0x2A,
  0x5F, 0x30, 0x30, 0x30,
  0x6A, 0x32, 0x32, 0x32,
  0x77, 0x36, 0x35, 0x36,
  0x85, 0x3C, 0x3C, 0x3C,
  0x96, 0x43, 0x43, 0x43,
};

static const TLambdasTable HEVC_NEW_DEFAULT_LDA_TABLE =
{
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x02, 0x01,
  0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02,
  0x03, 0x02, 0x03, 0x02,
  0x03, 0x03, 0x03, 0x03,
  0x04, 0x03, 0x03, 0x03,
  0x04, 0x03, 0x03, 0x03,
  0x04, 0x03, 0x04, 0x03,
  0x05, 0x04, 0x04, 0x04,
  0x06, 0x04, 0x05, 0x04,
  0x07, 0x05, 0x05, 0x05,
  0x07, 0x05, 0x06, 0x05,
  0x09, 0x06, 0x06, 0x06,
  0x0A, 0x06, 0x07, 0x06,
  0x0B, 0x07, 0x08, 0x07,
  0x0D, 0x08, 0x09, 0x08,
  0x0F, 0x09, 0x0A, 0x09,
  0x11, 0x0A, 0x0B, 0x0A,
  0x13, 0x0B, 0x0C, 0x0B,
  0x15, 0x0C, 0x0E, 0x0C,
  0x18, 0x0E, 0x0F, 0x0E,
  0x1A, 0x0F, 0x11, 0x0F,
  0x1D, 0x11, 0x13, 0x11,
  0x21, 0x13, 0x15, 0x13,
  0x25, 0x15, 0x18, 0x15,
  0x2A, 0x18, 0x1B, 0x18,
  0x2F, 0x1B, 0x1E, 0x1B,
  0x34, 0x1E, 0x22, 0x1E,
  0x3A, 0x21, 0x26, 0x21,
  0x42, 0x25, 0x2A, 0x25,
  0x4A, 0x2A, 0x30, 0x2A,
  0x53, 0x2F, 0x35, 0x2F,
  0x5D, 0x35, 0x3C, 0x35,
  0x68, 0x3B, 0x43, 0x3B,
};

