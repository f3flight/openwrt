/*
 *  Edimax BR-61xx board support
 *
 *  Copyright (C) 2007-2008 Gabor Juhos <juhosg@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/gpio.h>

#include <asm/bootinfo.h>

#include <asm/mach-adm5120/adm5120_board.h>
#include <asm/mach-adm5120/adm5120_irq.h>
#include <asm/mach-adm5120/adm5120_platform.h>

extern void __init br61xx_generic_setup(void) __init;
