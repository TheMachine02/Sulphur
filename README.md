# Sulphur

<p align="center">
<img src="https://i.imgur.com/BOHC1Em.png" />
</p>

Sulphur is a stage 2 boot loader designed to be used with sorcery kernel. It create a vfat boot partition and use it to load the kernel as a leaf executable file, then pass hand to kernel.

It also expose the partition as an usb mass storage (planned), allow multiple kernel to reside in the boot partition (with choice to load it). Kernel are lz4 compressed and the partition is 64KB, which should be more than enough (but this can be easily changed). Total size on flash is 128KB (64KB for the loader + partition size). With the 128KB of the TI OS boot code, the whole boot is packed into 256KB.

It should be pointed that it does make kernel execute in RAM (or it *could* in theory execute in flash, but it will be much more convoluted). That's not a real issue with a proprer file system support from the kernel, but you'll still need to keep the kernel size down if you don't want to clobber all the RAM. The side effect is also faster execution, which is definitely wanted.

The kernel space *should* be in memory protected region for security (which is the boot heap).
