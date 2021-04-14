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
>*  Linux or Mac OC: docker run --rm -it -v "$pwd":/root/env myos-buildenv
>*  Windows [Command Prompt]: docker run --rm -it -v "%cd%":/root/env myos-buildenv
>*  Windows [Powershell]: docker run --rm -it -v "${pwd}:/root/env" myos-buildenv
* Build files: make build-x86_64
* Run QEMU: qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L "C:\Program Files\qemu"

## Notes

* QEMU must be added to Path before emulation.
* Run VSCode and Docker in Administrator Mode

## Screenshot
![QEMU View](https://i.imgur.com/somPyZC.png)
