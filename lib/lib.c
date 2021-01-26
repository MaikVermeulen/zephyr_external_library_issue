#include <zephyr.h>
#include <lib.h>

#include <logging/log.h>
LOG_MODULE_REGISTER(lib, 4);

K_MSGQ_DEFINE(queue, sizeof(uint8_t), 1, 4);

void TestFunc1 (void)
{
  uint8_t a = 5;
  k_msgq_put(&queue, &a, K_FOREVER); /* FIXME If you replace this with e.g. LOG_INF("Test") it works */

  printk("Test func 1: %u\n", a);
}

void TestFunc2 (void)
{
  uint8_t a;
  k_msgq_put(&queue, &a, K_FOREVER);

  printk("Test func 2: %u\n", a);
}