#include <linux/module.h>;
#include <linux/init.h>

MODULE_VERSION("0.1");
MODULE_DESCRIPTION("Test module");
MODULE_AUTHOR("ADIL_DAVID_ARUZHAN");
MODULE_LICENSE("GPL");

static int __init ModuleInit(void) {
	printk("Hello, OSK\n");
	return 0;
}

static void __exit ModuleExit(void) {
	printk("Goodbye, OSK\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
