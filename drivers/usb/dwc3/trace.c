// SPDX-License-Identifier: GPL-2.0
/*
 * trace.c - DesignWare USB3 DRD Controller Trace Support
 *
 * Copyright (C) 2014 Texas Instruments Incorporated - https://www.ti.com
 *
 * Author: Felipe Balbi <balbi@ti.com>
 */

#define CREATE_TRACE_POINTS
#include "trace.h"

/* dwc3-msm reaches the core registers through the traced io.h helpers */
EXPORT_TRACEPOINT_SYMBOL_GPL(dwc3_readl);
EXPORT_TRACEPOINT_SYMBOL_GPL(dwc3_writel);
