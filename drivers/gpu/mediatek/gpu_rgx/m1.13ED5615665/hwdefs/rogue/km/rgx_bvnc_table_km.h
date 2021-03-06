/*************************************************************************/ /*!
@Title          Hardware definition file rgx_bvnc_table_km.h
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

/******************************************************************************
 *                 Auto generated file by rgxbvnc_tablegen.py                 *
 *                  This file should not be edited manually                   *
 *****************************************************************************/

#ifndef RGX_BVNC_TABLE_KM_H
#define RGX_BVNC_TABLE_KM_H

#include "img_types.h"
#include "img_defs.h"
#include "rgxdefs_km.h"

#ifndef _RGXBVNC_C_
#error "This file should only be included from rgxbvnc.c"
#endif

#if defined(RGX_BVNC_TABLE_UM_H)
#error "This file should not be included in conjunction with rgx_bvnc_table_um.h"
#endif


/******************************************************************************
 * Defines and arrays for each feature with values used
 * for handling the corresponding values
 *****************************************************************************/

#define	RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_values[RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 2, };

#define	RGX_FEATURE_FBCDC_ALGORITHM_MAX_VALUE_IDX	(5)
static const IMG_UINT16 aui16_RGX_FEATURE_FBCDC_ALGORITHM_values[RGX_FEATURE_FBCDC_ALGORITHM_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 3, 4, };

#define	RGX_FEATURE_FBCDC_ARCHITECTURE_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_FBCDC_ARCHITECTURE_values[RGX_FEATURE_FBCDC_ARCHITECTURE_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 3, };

#define	RGX_FEATURE_META_MAX_VALUE_IDX	(5)
static const IMG_UINT16 aui16_RGX_FEATURE_META_values[RGX_FEATURE_META_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, LTP217, LTP218, MTP218, MTP219, };

#define	RGX_FEATURE_META_COREMEM_BANKS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_META_COREMEM_BANKS_values[RGX_FEATURE_META_COREMEM_BANKS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 8, };

#define	RGX_FEATURE_META_COREMEM_SIZE_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_META_COREMEM_SIZE_values[RGX_FEATURE_META_COREMEM_SIZE_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 0, 32, 256, };

#define	RGX_FEATURE_META_DMA_CHANNEL_COUNT_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_META_DMA_CHANNEL_COUNT_values[RGX_FEATURE_META_DMA_CHANNEL_COUNT_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 4, };

#define	RGX_FEATURE_NUM_CLUSTERS_MAX_VALUE_IDX	(5)
static const IMG_UINT16 aui16_RGX_FEATURE_NUM_CLUSTERS_values[RGX_FEATURE_NUM_CLUSTERS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 4, 6, };

#define	RGX_FEATURE_NUM_ISP_IPP_PIPES_MAX_VALUE_IDX	(9)
static const IMG_UINT16 aui16_RGX_FEATURE_NUM_ISP_IPP_PIPES_values[RGX_FEATURE_NUM_ISP_IPP_PIPES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 3, 4, 6, 7, 8, 12, };

#define	RGX_FEATURE_NUM_OSIDS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_NUM_OSIDS_values[RGX_FEATURE_NUM_OSIDS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 8, };

#define	RGX_FEATURE_NUM_RASTER_PIPES_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_NUM_RASTER_PIPES_values[RGX_FEATURE_NUM_RASTER_PIPES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 0, 1, 2, };

#define	RGX_FEATURE_PHYS_BUS_WIDTH_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_PHYS_BUS_WIDTH_values[RGX_FEATURE_PHYS_BUS_WIDTH_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 32, 36, 40, };

#define	RGX_FEATURE_SCALABLE_TE_ARCH_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_SCALABLE_TE_ARCH_values[RGX_FEATURE_SCALABLE_TE_ARCH_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, };

#define	RGX_FEATURE_SCALABLE_VCE_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_SCALABLE_VCE_values[RGX_FEATURE_SCALABLE_VCE_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, };

#define	RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_MAX_VALUE_IDX	(3)
static const IMG_UINT16 aui16_RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_values[RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, };

#define	RGX_FEATURE_SLC_BANKS_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_BANKS_values[RGX_FEATURE_SLC_BANKS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 4, };

#define	RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_values[RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 512, };

#define	RGX_FEATURE_SLC_SIZE_IN_BYTES_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_SIZE_IN_BYTES_values[RGX_FEATURE_SLC_SIZE_IN_BYTES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 16, 64, 128, };

#define	RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_values[RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 512, };

#define	RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_values[RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 40, };


/******************************************************************************
 * Table contains pointers to each feature value array for features that have
 * values.
 * Indexed using enum RGX_FEATURE_WITH_VALUE_INDEX from rgx_bvnc_defs_km.h
 *****************************************************************************/

static const IMG_UINT16 * const gaFeaturesValues[RGX_FEATURE_WITH_VALUES_MAX_IDX] = {
	aui16_RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_values,
	aui16_RGX_FEATURE_FBCDC_ALGORITHM_values,
	aui16_RGX_FEATURE_FBCDC_ARCHITECTURE_values,
	aui16_RGX_FEATURE_META_values,
	aui16_RGX_FEATURE_META_COREMEM_BANKS_values,
	aui16_RGX_FEATURE_META_COREMEM_SIZE_values,
	aui16_RGX_FEATURE_META_DMA_CHANNEL_COUNT_values,
	aui16_RGX_FEATURE_NUM_CLUSTERS_values,
	aui16_RGX_FEATURE_NUM_ISP_IPP_PIPES_values,
	aui16_RGX_FEATURE_NUM_OSIDS_values,
	aui16_RGX_FEATURE_NUM_RASTER_PIPES_values,
	aui16_RGX_FEATURE_PHYS_BUS_WIDTH_values,
	aui16_RGX_FEATURE_SCALABLE_TE_ARCH_values,
	aui16_RGX_FEATURE_SCALABLE_VCE_values,
	aui16_RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_values,
	aui16_RGX_FEATURE_SLC_BANKS_values,
	aui16_RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_values,
	aui16_RGX_FEATURE_SLC_SIZE_IN_BYTES_values,
	aui16_RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_values,
	aui16_RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_values,
};


/******************************************************************************
 * Array containing the lengths of the arrays containing the values.
 * Used for indexing the aui16_<FEATURE>_values defined upwards
 *****************************************************************************/


static const IMG_UINT16 gaFeaturesValuesMaxIndexes[] = {
	RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_MAX_VALUE_IDX,
	RGX_FEATURE_FBCDC_ALGORITHM_MAX_VALUE_IDX,
	RGX_FEATURE_FBCDC_ARCHITECTURE_MAX_VALUE_IDX,
	RGX_FEATURE_META_MAX_VALUE_IDX,
	RGX_FEATURE_META_COREMEM_BANKS_MAX_VALUE_IDX,
	RGX_FEATURE_META_COREMEM_SIZE_MAX_VALUE_IDX,
	RGX_FEATURE_META_DMA_CHANNEL_COUNT_MAX_VALUE_IDX,
	RGX_FEATURE_NUM_CLUSTERS_MAX_VALUE_IDX,
	RGX_FEATURE_NUM_ISP_IPP_PIPES_MAX_VALUE_IDX,
	RGX_FEATURE_NUM_OSIDS_MAX_VALUE_IDX,
	RGX_FEATURE_NUM_RASTER_PIPES_MAX_VALUE_IDX,
	RGX_FEATURE_PHYS_BUS_WIDTH_MAX_VALUE_IDX,
	RGX_FEATURE_SCALABLE_TE_ARCH_MAX_VALUE_IDX,
	RGX_FEATURE_SCALABLE_VCE_MAX_VALUE_IDX,
	RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_BANKS_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_SIZE_IN_BYTES_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_MAX_VALUE_IDX,
	RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_MAX_VALUE_IDX,
};


/******************************************************************************
 * Bit-positions for features with values
 *****************************************************************************/

static const IMG_UINT16 aui16FeaturesWithValuesBitPositions[] = {
	(0U), /* RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_POS */
	(2U), /* RGX_FEATURE_FBCDC_ALGORITHM_POS */
	(5U), /* RGX_FEATURE_FBCDC_ARCHITECTURE_POS */
	(8U), /* RGX_FEATURE_META_POS */
	(11U), /* RGX_FEATURE_META_COREMEM_BANKS_POS */
	(13U), /* RGX_FEATURE_META_COREMEM_SIZE_POS */
	(16U), /* RGX_FEATURE_META_DMA_CHANNEL_COUNT_POS */
	(18U), /* RGX_FEATURE_NUM_CLUSTERS_POS */
	(21U), /* RGX_FEATURE_NUM_ISP_IPP_PIPES_POS */
	(25U), /* RGX_FEATURE_NUM_OSIDS_POS */
	(27U), /* RGX_FEATURE_NUM_RASTER_PIPES_POS */
	(30U), /* RGX_FEATURE_PHYS_BUS_WIDTH_POS */
	(33U), /* RGX_FEATURE_SCALABLE_TE_ARCH_POS */
	(35U), /* RGX_FEATURE_SCALABLE_VCE_POS */
	(37U), /* RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_POS */
	(39U), /* RGX_FEATURE_SLC_BANKS_POS */
	(42U), /* RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_POS */
	(44U), /* RGX_FEATURE_SLC_SIZE_IN_BYTES_POS */
	(47U), /* RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_POS */
	(49U), /* RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_POS */
};


/******************************************************************************
 * Bit-masks for features with values
 *****************************************************************************/

static const IMG_UINT64 aui64FeaturesWithValuesBitMasks[] = {
	(IMG_UINT64_C(0x0000000000000003)), /* RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_BIT_MASK */
	(IMG_UINT64_C(0x000000000000001C)), /* RGX_FEATURE_FBCDC_ALGORITHM_BIT_MASK */
	(IMG_UINT64_C(0x00000000000000E0)), /* RGX_FEATURE_FBCDC_ARCHITECTURE_BIT_MASK */
	(IMG_UINT64_C(0x0000000000000700)), /* RGX_FEATURE_META_BIT_MASK */
	(IMG_UINT64_C(0x0000000000001800)), /* RGX_FEATURE_META_COREMEM_BANKS_BIT_MASK */
	(IMG_UINT64_C(0x000000000000E000)), /* RGX_FEATURE_META_COREMEM_SIZE_BIT_MASK */
	(IMG_UINT64_C(0x0000000000030000)), /* RGX_FEATURE_META_DMA_CHANNEL_COUNT_BIT_MASK */
	(IMG_UINT64_C(0x00000000001C0000)), /* RGX_FEATURE_NUM_CLUSTERS_BIT_MASK */
	(IMG_UINT64_C(0x0000000001E00000)), /* RGX_FEATURE_NUM_ISP_IPP_PIPES_BIT_MASK */
	(IMG_UINT64_C(0x0000000006000000)), /* RGX_FEATURE_NUM_OSIDS_BIT_MASK */
	(IMG_UINT64_C(0x0000000038000000)), /* RGX_FEATURE_NUM_RASTER_PIPES_BIT_MASK */
	(IMG_UINT64_C(0x00000001C0000000)), /* RGX_FEATURE_PHYS_BUS_WIDTH_BIT_MASK */
	(IMG_UINT64_C(0x0000000600000000)), /* RGX_FEATURE_SCALABLE_TE_ARCH_BIT_MASK */
	(IMG_UINT64_C(0x0000001800000000)), /* RGX_FEATURE_SCALABLE_VCE_BIT_MASK */
	(IMG_UINT64_C(0x0000006000000000)), /* RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_BIT_MASK */
	(IMG_UINT64_C(0x0000038000000000)), /* RGX_FEATURE_SLC_BANKS_BIT_MASK */
	(IMG_UINT64_C(0x00000C0000000000)), /* RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_BIT_MASK */
	(IMG_UINT64_C(0x0000700000000000)), /* RGX_FEATURE_SLC_SIZE_IN_BYTES_BIT_MASK */
	(IMG_UINT64_C(0x0001800000000000)), /* RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_BIT_MASK */
	(IMG_UINT64_C(0x0006000000000000)), /* RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_BIT_MASK */
};


/******************************************************************************
 * Table mapping bitmasks for features and features with values
 *****************************************************************************/


static const IMG_UINT64 gaFeatures[][3]=
{
	{ IMG_UINT64_C(0x000100000002001e), IMG_UINT64_C(0x0000002000081029), IMG_UINT64_C(0x00023400d0682324) },	/* 1.0.2.30 */
	{ IMG_UINT64_C(0x0001000000040005), IMG_UINT64_C(0x0000002000081028), IMG_UINT64_C(0x00023400d06c2324) },	/* 1.0.4.5 */
	{ IMG_UINT64_C(0x0001000000040013), IMG_UINT64_C(0x0000002000081029), IMG_UINT64_C(0x00023400d06c2324) },	/* 1.0.4.19 */
	{ IMG_UINT64_C(0x0004000000020033), IMG_UINT64_C(0x000011600018123d), IMG_UINT64_C(0x00023400d0e84248) },	/* 4.0.2.51 */
	{ IMG_UINT64_C(0x0004000000020039), IMG_UINT64_C(0x0000116000181a3d), IMG_UINT64_C(0x00023400d2e84248) },	/* 4.0.2.57 */
	{ IMG_UINT64_C(0x000400000002003a), IMG_UINT64_C(0x0000116000181a3d), IMG_UINT64_C(0x00023400d2e84248) },	/* 4.0.2.58 */
	{ IMG_UINT64_C(0x0004000000040037), IMG_UINT64_C(0x000011600018123c), IMG_UINT64_C(0x00023400c0ec4248) },	/* 4.0.4.55 */
	{ IMG_UINT64_C(0x000400000006003e), IMG_UINT64_C(0x0000116000181a3d), IMG_UINT64_C(0x00023580c2f04248) },	/* 4.0.6.62 */
	{ IMG_UINT64_C(0x000500000001002e), IMG_UINT64_C(0x0000000000481209), IMG_UINT64_C(0x00021480d0242128) },	/* 5.0.1.46 */
	{ IMG_UINT64_C(0x0006000000040023), IMG_UINT64_C(0x000011600038123d), IMG_UINT64_C(0x00023400c0ec4248) },	/* 6.0.4.35 */
	{ IMG_UINT64_C(0x000a000000040019), IMG_UINT64_C(0x000007d7079e3d7d), IMG_UINT64_C(0x0002858ac2ed6c69) },	/* 10.0.4.25 */
	{ IMG_UINT64_C(0x000f000000010040), IMG_UINT64_C(0x0000000000481a09), IMG_UINT64_C(0x00022480d2442128) },	/* 15.0.1.64 */
	{ IMG_UINT64_C(0x0016000000150010), IMG_UINT64_C(0x00000004d849d809), IMG_UINT64_C(0x000204a052440000) },	/* 22.0.21.16 */
	{ IMG_UINT64_C(0x0016000000160019), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000214a052440000) },	/* 22.0.22.25 */
	{ IMG_UINT64_C(0x001600000016001d), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000214a052440000) },	/* 22.0.22.29 */
	{ IMG_UINT64_C(0x0016000000360019), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000224a052640000) },	/* 22.0.54.25 */
	{ IMG_UINT64_C(0x001600000036001e), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000224a052840000) },	/* 22.0.54.30 */
	{ IMG_UINT64_C(0x0016000000360026), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000224a092840000) },	/* 22.0.54.38 */
	{ IMG_UINT64_C(0x001600000036014a), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000224a05284002c) },	/* 22.0.54.330 */
	{ IMG_UINT64_C(0x0016000000680012), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000224a092c40000) },	/* 22.0.104.18 */
	{ IMG_UINT64_C(0x00160000006800da), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000224a092c4002c) },	/* 22.0.104.218 */
	{ IMG_UINT64_C(0x0016000000d0013e), IMG_UINT64_C(0x000000045849d809), IMG_UINT64_C(0x000225209b08002c) },	/* 22.0.208.318 */
	{ IMG_UINT64_C(0x00180000003600cc), IMG_UINT64_C(0x0000080c2849dc0b), IMG_UINT64_C(0x000224c09284002c) },	/* 24.0.54.204 */
	{ IMG_UINT64_C(0x00180000006801f8), IMG_UINT64_C(0x0000080c2849dc0b), IMG_UINT64_C(0x000224c092a4002c) },	/* 24.0.104.504 */
	{ IMG_UINT64_C(0x0018000000d001f8), IMG_UINT64_C(0x0000080c2849dc0b), IMG_UINT64_C(0x000235409b08002c) },	/* 24.0.208.504 */
	{ IMG_UINT64_C(0x0018000000d001f9), IMG_UINT64_C(0x0000080c2849dc0b), IMG_UINT64_C(0x000235409b08002c) },	/* 24.0.208.505 */
	{ IMG_UINT64_C(0x001d0000003400ca), IMG_UINT64_C(0x000008cc2849dc8b), IMG_UINT64_C(0x000214c092440030) },	/* 29.0.52.202 */
	{ IMG_UINT64_C(0x001d0000006c00d0), IMG_UINT64_C(0x000008cc2849dc8b), IMG_UINT64_C(0x000235409ae80030) },	/* 29.0.108.208 */
};

/******************************************************************************
 * Table mapping bitmasks for ERNs/BRNs
 *****************************************************************************/


static const IMG_UINT64 gaErnsBrns[][2]=
{
	{ IMG_UINT64_C(0x0001002700040013), IMG_UINT64_C(0x0000000000000005) },	/* 1.39.4.19 */
	{ IMG_UINT64_C(0x0001004b0002001e), IMG_UINT64_C(0x0000000000000004) },	/* 1.75.2.30 */
	{ IMG_UINT64_C(0x0001005200040005), IMG_UINT64_C(0x0000000000000000) },	/* 1.82.4.5 */
	{ IMG_UINT64_C(0x0004001d00020033), IMG_UINT64_C(0x000000000000420a) },	/* 4.29.2.51 */
	{ IMG_UINT64_C(0x0004001f00040037), IMG_UINT64_C(0x000000000000420a) },	/* 4.31.4.55 */
	{ IMG_UINT64_C(0x0004002800020033), IMG_UINT64_C(0x000000000000420a) },	/* 4.40.2.51 */
	{ IMG_UINT64_C(0x0004002900020039), IMG_UINT64_C(0x000000000000420a) },	/* 4.41.2.57 */
	{ IMG_UINT64_C(0x0004002b0006003e), IMG_UINT64_C(0x000000000000420a) },	/* 4.43.6.62 */
	{ IMG_UINT64_C(0x0004002d0002003a), IMG_UINT64_C(0x000000000000400a) },	/* 4.45.2.58 */
	{ IMG_UINT64_C(0x0004002e0006003e), IMG_UINT64_C(0x000000000000420a) },	/* 4.46.6.62 */
	{ IMG_UINT64_C(0x000500090001002e), IMG_UINT64_C(0x0000000000000031) },	/* 5.9.1.46 */
	{ IMG_UINT64_C(0x0005000b0001002e), IMG_UINT64_C(0x000000000000003c) },	/* 5.11.1.46 */
	{ IMG_UINT64_C(0x0006002200040023), IMG_UINT64_C(0x000000000000400a) },	/* 6.34.4.35 */
	{ IMG_UINT64_C(0x000a002100040019), IMG_UINT64_C(0x00000000000001ca) },	/* 10.33.4.25 */
	{ IMG_UINT64_C(0x000f000500010040), IMG_UINT64_C(0x0000000000000038) },	/* 15.5.1.64 */
	{ IMG_UINT64_C(0x0016001e00360019), IMG_UINT64_C(0x000000000001ac38) },	/* 22.30.54.25 */
	{ IMG_UINT64_C(0x001600280036001e), IMG_UINT64_C(0x000000000001ac38) },	/* 22.40.54.30 */
	{ IMG_UINT64_C(0x0016002c00160019), IMG_UINT64_C(0x000000000001ac38) },	/* 22.44.22.25 */
	{ IMG_UINT64_C(0x0016002e0036014a), IMG_UINT64_C(0x000000000001a83a) },	/* 22.46.54.330 */
	{ IMG_UINT64_C(0x0016003100150010), IMG_UINT64_C(0x000000000001ac38) },	/* 22.49.21.16 */
	{ IMG_UINT64_C(0x0016003c0016001d), IMG_UINT64_C(0x0000000000019438) },	/* 22.60.22.29 */
	{ IMG_UINT64_C(0x001600430036001e), IMG_UINT64_C(0x0000000000019c38) },	/* 22.67.54.30 */
	{ IMG_UINT64_C(0x001600440036001e), IMG_UINT64_C(0x0000000000019438) },	/* 22.68.54.30 */
	{ IMG_UINT64_C(0x00160056006800da), IMG_UINT64_C(0x0000000000009038) },	/* 22.86.104.218 */
	{ IMG_UINT64_C(0x0016005700680012), IMG_UINT64_C(0x0000000000009438) },	/* 22.87.104.18 */
	{ IMG_UINT64_C(0x0016006600360026), IMG_UINT64_C(0x0000000000009438) },	/* 22.102.54.38 */
	{ IMG_UINT64_C(0x0016006800d0013e), IMG_UINT64_C(0x000000000000903a) },	/* 22.104.208.318 */
	{ IMG_UINT64_C(0x0016006900d0013e), IMG_UINT64_C(0x000000000000903a) },	/* 22.105.208.318 */
	{ IMG_UINT64_C(0x0018003200d001f8), IMG_UINT64_C(0x000000000002843a) },	/* 24.50.208.504 */
	{ IMG_UINT64_C(0x0018003800d001f9), IMG_UINT64_C(0x000000000002843a) },	/* 24.56.208.505 */
	{ IMG_UINT64_C(0x00180042003600cc), IMG_UINT64_C(0x000000000002843a) },	/* 24.66.54.204 */
	{ IMG_UINT64_C(0x00180043006801f8), IMG_UINT64_C(0x000000000002843a) },	/* 24.67.104.504 */
	{ IMG_UINT64_C(0x001d000e006c00d0), IMG_UINT64_C(0x00000000000684ba) },	/* 29.14.108.208 */
	{ IMG_UINT64_C(0x001d0011003400ca), IMG_UINT64_C(0x00000000000684ba) },	/* 29.17.52.202 */
};

#if defined(DEBUG)

#define	FEATURE_NO_VALUES_NAMES_MAX_IDX	(45)

static const IMG_CHAR * const gaszFeaturesNoValuesNames[FEATURE_NO_VALUES_NAMES_MAX_IDX] =
{
	"AXI_ACELITE",
	"BIF_TILING",
	"CLUSTER_GROUPING",
	"COMPUTE",
	"COMPUTE_MORTON_CAPABLE",
	"COMPUTE_OVERLAP",
	"COMPUTE_OVERLAP_WITH_BARRIERS",
	"COREID_PER_OS",
	"DUST_POWER_ISLAND_S7",
	"DYNAMIC_DUST_POWER",
	"FASTRENDER_DM",
	"GPU_VIRTUALISATION",
	"GS_RTA_SUPPORT",
	"META_DMA",
	"MIPS",
	"PBE2_IN_XE",
	"PBVNC_COREID_REG",
	"PDS_PER_DUST",
	"PDS_TEMPSIZE8",
	"PERFBUS",
	"PERF_COUNTER_BATCH",
	"RAY_TRACING_DEPRECATED",
	"ROGUEXE",
	"S7_CACHE_HIERARCHY",
	"S7_TOP_INFRASTRUCTURE",
	"SCALABLE_VDM_GPP",
	"SIGNAL_SNOOPING",
	"SIMPLE_INTERNAL_PARAMETER_FORMAT",
	"SIMPLE_INTERNAL_PARAMETER_FORMAT_V1",
	"SIMPLE_INTERNAL_PARAMETER_FORMAT_V2",
	"SINGLE_BIF",
	"SLCSIZE8",
	"SLC_HYBRID_CACHELINE_64_128",
	"SLC_VIVT",
	"SYS_BUS_SECURE_RESET",
	"TDM_PDS_CHECKSUM",
	"TESSELLATION",
	"TLA",
	"TPU_CEM_DATAMASTER_GLOBAL_REGISTERS",
	"TPU_DM_GLOBAL_REGISTERS",
	"TPU_FILTERING_MODE_CONTROL",
	"VDM_DRAWINDIRECT",
	"VDM_OBJECT_LEVEL_LLS",
	"XE_MEMORY_HIERARCHY",
	"XT_TOP_INFRASTRUCTURE",
};

#define	ERNSBRNS_IDS_MAX_IDX	(19)

static const IMG_UINT32 gaui64ErnsBrnsIDs[ERNSBRNS_IDS_MAX_IDX] =
{
	38344,
	42290,
	42321,
	42606,
	43276,
	44871,
	46066,
	47025,
	50539,
	50767,
	57596,
	60084,
	61389,
	61450,
	63142,
	63553,
	65273,
	66622,
	68186,
};

#endif /* defined(DEBUG) */
#endif /* RGX_BVNC_TABLE_KM_H */
