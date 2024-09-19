/*
 hello-4.c - module documentation

*/
#include <linux/init.h> /* Needed for the macros */
#include <linux/module.h> /* Needed by all modules */
#include <linux/printk.h> /* Needed for pr_info() */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("yayito");
MODULE_DESCRIPTION("casharreo con modulos");


// static int hello4_data __initdata = 4;
static int __init hello_4_init(void)
{ 
    pr_info("Hello worl 4.\n"); 
 
    /* A non 0 return means init_module failed; module can't be loaded. */ 
    return 0; 
} 
 
static void __exit hello_4_exit(void)
{ 
    pr_info("Goodbye world 4.\n"); 
} 
 
module_init(hello_4_init);
module_exit(hello_4_exit); 
