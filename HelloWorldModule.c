#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yiqing Wang");
MODULE_DESCRIPTION("A simple example Linux module that prints hello world on init and goodbye on exit.");
MODULE_VERSION("1");

static int __init lkm_example_init(void) {
 printk(KERN_INFO "Hello World!\n");
 return 0;
}
static void __exit lkm_example_exit(void) {
 printk(KERN_INFO "Goodbye!\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);
