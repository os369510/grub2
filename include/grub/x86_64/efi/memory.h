#ifndef GRUB_MEMORY_CPU_HEADER
#include <grub/efi/memory.h>

#if defined (__code_model_large__)
#define GRUB_EFI_MAX_USABLE_ADDRESS_32 0xffffffff
#define GRUB_EFI_MAX_USABLE_ADDRESS_64 __UINTPTR_MAX__
#define GRUB_EFI_MAX_USABLE_ADDRESS GRUB_EFI_MAX_USABLE_ADDRESS_32
#else
#define GRUB_EFI_MAX_USABLE_ADDRESS_32 0x7fffffff
#define GRUB_EFI_MAX_USABLE_ADDRESS_64 GRUB_EFI_MAX_USABLE_ADDRESS_32
#define GRUB_EFI_MAX_USABLE_ADDRESS GRUB_EFI_MAX_USABLE_ADDRESS_32
#endif

#endif /* ! GRUB_MEMORY_CPU_HEADER */
