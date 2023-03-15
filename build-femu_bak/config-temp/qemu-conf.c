#include <libaio.h>
#include <sys/eventfd.h>
#include <stddef.h>
int main(void) { io_setup(0, NULL); io_set_eventfd(NULL, 0); eventfd(0, 0); return 0; }
