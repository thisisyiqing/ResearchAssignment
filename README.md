# Linux Kernel Module Hello World
## Dependencies
- Install make: `sudo apt install make`
- Install gcc: `sudo apt install gcc`
If message like `Waiting for cache lock: Could not get lock /var/lib/dpkg/lock-frontend. It is held by process 3372` keeps prompting, you can try running `sudo kill -9 3372` before installing.
## Test the Module
- Run `make` to compile the code
- Run `sudo insmod HelloWorldModule.ko` to insert the module
- Run `sudo dmesg` to see the printed message
- Run `sudo rmmod HelloWorldModule.ko` to remove the module
- Run `sudo dmesg` to see the printed message
