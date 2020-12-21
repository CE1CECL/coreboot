/* SPDX-License-Identifier: GPL-2.0-only */

#include <soc/gpio.h>

static const struct pad_config early_gpio_table[] = {
	/* LPC */
	PAD_CFG_NF(LPC_ILB_SERIRQ, UP_20K, DEEP, NF1),
	PAD_CFG_NF(LPC_CLKRUNB, UP_20K, DEEP, NF1),
	PAD_CFG_NF(LPC_AD0, UP_20K, DEEP, NF1),
	PAD_CFG_NF(LPC_AD1, UP_20K, DEEP, NF1),
	PAD_CFG_NF(LPC_AD2, UP_20K, DEEP, NF1),
	PAD_CFG_NF(LPC_AD3, UP_20K, DEEP, NF1),
	PAD_CFG_NF(LPC_FRAMEB, NATIVE, DEEP, NF1),
	PAD_CFG_NF(LPC_CLKOUT0, UP_20K, DEEP, NF1),
	PAD_CFG_NF(LPC_CLKOUT1, UP_20K, DEEP, NF1)
};
