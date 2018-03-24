			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
        #include "igb/e1000_regs.h"

	u32
	dummy(struct e1000_hw *hw, u32 reg) {
		return igb_rd32(hw, reg);
	}
