bootblock-y += bootblock.c
bootblock-y += gpio.c
romstage-y += gpio.c
ramstage-$(CONFIG_MAINBOARD_USE_LIBGFXINIT) += gma-mainboard.ads
