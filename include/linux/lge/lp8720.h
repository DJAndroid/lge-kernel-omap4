
#ifndef _LINUX_LP8720_I2C_H
#define _LINUX_LP8720_I2C_H

#define LP8720_I2C_NAME "lp8720"
#define LP8720_I2C_ADDR	 0x7D

typedef enum 
{
  LDO1=0,
  LDO2,
  LDO3,
  LDO4,
  LDO5,
  SWREG
} subpm_output_enum;

struct lp8720_platform_data {
	int en_gpio_num;
};

#define TIMESTEP_25US 1 //default
#define TIMESTEP_50US 0

#define LP8720_GENERAL_SETTING 0x00
#define LP8720_LDO1_SETTING 0x01
#define LP8720_LDO2_SETTING 0x02
#define LP8720_LDO3_SETTING 0x03
#define LP8720_LDO4_SETTING 0x04
#define LP8720_LDO5_SETTING 0x05
#define LP8720_BUCK_SETTING1 0x06
#define LP8720_BUCK_SETTING2 0x07
#define LP8720_OUTPUT_ENABLE 0x08
#define LP8720_PULLDOWN_BITS 0x09

#define LP8720_STARTUP_DELAY_0 0x00
#define LP8720_STARTUP_DELAY_1TS 0x20
#define LP8720_STARTUP_DELAY_2TS 0x40
#define LP8720_STARTUP_DELAY_3TS 0x60
#define LP8720_STARTUP_DELAY_4TS 0x80
#define LP8720_STARTUP_DELAY_5TS 0xa0
#define LP8720_STARTUP_DELAY_6TS 0xc0
#define LP8720_NO_STARTUP 0xe0

#endif /* _LINUX_SYNAPTICS_I2C_RMI_H */

