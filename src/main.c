#include <zephyr.h>
#include <lib.h>

void main(void)
{
  printk("Hello World! %s\n", CONFIG_BOARD);

  TestFunc1();
  //TestFunc2();
}
