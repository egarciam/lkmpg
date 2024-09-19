/*
 hello-3.c - Illustrating the __init, __initdata and __exit macros

*/
#include <linux/init.h> /* Needed for the macros */
#include <linux/module.h> /* Needed by all modules */
#include <linux/printk.h> /* Needed for pr_info() */


static int hello3_data __initdata = 3;
static int __init hello_3_init(void)
{ 
    pr_info("Hello world %d.\n", hello3_data); 
 
    /* A non 0 return means init_module failed; module can't be loaded. */ 
    return 0; 
} 
 
static void __exit hello_3_exit(void)
{ 
    pr_info("Goodbye world %d.\n", hello3_data); 
} 
 
module_init(hello_3_init);
module_exit(hello_3_exit); 
MODULE_LICENSE("GPL");