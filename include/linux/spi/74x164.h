#ifndef LINUX_SPI_74X164_H
#define LINUX_SPI_74X164_H

struct gen_74x164_chip_platform_data {
	/* number assigned to the first GPIO */
	unsigned	base;
	/* number of chained registers */
	unsigned	num_registers;
	/* address of a buffer containing initial data */
	u8		*init_data;
};

#endif
