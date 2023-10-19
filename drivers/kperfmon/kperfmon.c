#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <asm/uaccess.h>

#define BUFFER_SIZE 1024

#define PROC_NAME "kperfmon"
#define MESSAGE "  \nkperfmon_version [1.0.1]   kperfmon_read : 0x3a316e0,  kperfmon_write : 0x3a316c8\njava_version [T13.0.1]\nnativelib_version [T13.0.0]\nperfmond_version [T13.2.4]\n[01-01 00:00:00.000 1  1181     0 (  2)][LOG][LCDV] ON\n"

static ssize_t proc_read(struct file *file, char *buf, size_t count, loff_t *pos);
static int proc_open(struct inode *inode, struct file *file);
static ssize_t proc_write(struct file *file, const char __user *usr_buf, size_t count, loff_t *pos);

static struct proc_ops proc_ops = {
        .proc_read = proc_read,
	.proc_open = proc_open,
	.proc_write = proc_write,
};

static int proc_init(void) {
 	if (proc_create(PROC_NAME, 0664, NULL, &proc_ops) == NULL) {
 		pr_info("%s() - Error creating entry in proc failed!!!\n", __func__);
 		return -ENOMEM;
 	}
	pr_info("%s()\n", __func__);
	return 0;
}

static void proc_exit(void) {
	remove_proc_entry(PROC_NAME, NULL);
	pr_info("%s()\n", __func__);
}

static ssize_t proc_read(struct file *file, char __user *usr_buf, size_t count, loff_t *pos) {
	int rv;
	char buffer[BUFFER_SIZE];

	rv = snprintf(buffer, sizeof(buffer), MESSAGE);
	if (rv < 0)
		return rv;

	if (*pos >= rv)
		return 0;

	if (count > rv - *pos)
		count = rv - *pos;

	if (copy_to_user(usr_buf, buffer + *pos, count)) {
		return -EFAULT;
	}

	*pos += count;
	return count;
}

static int proc_open(struct inode *inode, struct file *file) {
    return 0;
}

static ssize_t proc_write(struct file *file, const char __user *usr_buf, size_t count, loff_t *pos) {
    return count;
}

module_init(proc_init);
module_exit(proc_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Binse Park <unsang.park@samsung.com>");
MODULE_DESCRIPTION("Performance Log(OLOG)");
