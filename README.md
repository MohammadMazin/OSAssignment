# OSAssignment

## Tools Used
* VSCode
* Docker
* QEMU

## Coded In
* .C
* .ASM

## Steps To Run Code
* Run the following command in VSCode
>*  Linux or Mac OC: <code>docker run --rm -it -v "$pwd":/root/env myos-buildenv</code>
>*  Windows [Command Prompt]: <code>docker run --rm -it -v "%cd%":/root/env myos-buildenv</code>
>*  Windows [Powershell]: <code>docker run --rm -it -v "${pwd}:/root/env" myos-buildenv</code>
* Build files: <code>make build-x86_64</code>
* Run QEMU: <code>qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L "C:\Program Files\qemu"</code>

## Notes

* QEMU must be added to Path before emulation.
* Run VSCode and Docker in Administrator Mode

## Screenshot
![QEMU View](https://i.imgur.com/somPyZC.png)
